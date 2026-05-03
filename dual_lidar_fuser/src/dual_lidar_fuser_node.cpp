#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <deque>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <stdexcept>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "sensor_msgs/msg/point_field.hpp"

class DualLidarFuserNode : public rclcpp::Node {
public:
  using PointCloud2 = sensor_msgs::msg::PointCloud2;
  using PointField = sensor_msgs::msg::PointField;

  struct QueuedCloud {
    PointCloud2 msg;
    rclcpp::Time received_time;
  };

  DualLidarFuserNode() : Node("dual_lidar_fuser") {
    left_topic_ = this->declare_parameter<std::string>(
        "left_topic", "/left/livox/lidar/pointcloud");
    right_topic_ = this->declare_parameter<std::string>(
        "right_topic", "/right/livox/lidar/pointcloud");
    fused_topic_ =
        this->declare_parameter<std::string>("fused_topic",
                                             "/livox/multi_lidar_points");

    left_source_frame_ =
        this->declare_parameter<std::string>("left_source_frame", "");
    right_source_frame_ =
        this->declare_parameter<std::string>("right_source_frame", "");
    output_frame_id_ =
        this->declare_parameter<std::string>("output_frame_id", "");
    const auto legacy_target_frame =
        this->declare_parameter<std::string>("target_frame", "");
    if (output_frame_id_.empty() && !legacy_target_frame.empty()) {
      output_frame_id_ = legacy_target_frame;
      RCLCPP_WARN(
          this->get_logger(),
          "Parameter target_frame is deprecated for dual_lidar_fuser. The node "
          "now publishes multi-lidar measurements and does not transform clouds. "
          "Do not use target_frame/output_frame_id on the Point-LIO input path.");
    }
    if (!output_frame_id_.empty()) {
      RCLCPP_WARN(
          this->get_logger(),
          "output_frame_id=%s forces all output messages to one frame_id. This is "
          "only for legacy visualization and should not be used as Point-LIO "
          "multi-lidar input.",
          output_frame_id_.c_str());
    }

    left_lidar_id_ = this->declare_parameter<int>("left_lidar_id", 0);
    right_lidar_id_ = this->declare_parameter<int>("right_lidar_id", 1);
    reorder_wait_sec_ =
        this->declare_parameter<double>("reorder_wait_sec", 0.015);
    queue_size_ = this->declare_parameter<int>("queue_size", 32);
    zero_epsilon_ = this->declare_parameter<double>("zero_epsilon", 1e-6);
    drop_zero_points_ =
        this->declare_parameter<bool>("drop_zero_points", true);
    output_reliable_ =
        this->declare_parameter<bool>("output_reliable", false);
    output_queue_size_ =
        this->declare_parameter<int>("output_queue_size", 4);

    if (queue_size_ < 2) {
      RCLCPP_WARN(this->get_logger(), "queue_size < 2, forcing it to 2");
      queue_size_ = 2;
    }
    if (output_queue_size_ < 1) {
      RCLCPP_WARN(this->get_logger(),
                  "output_queue_size < 1, forcing it to 1");
      output_queue_size_ = 1;
    }
    if (reorder_wait_sec_ < 0.0) {
      RCLCPP_WARN(this->get_logger(),
                  "reorder_wait_sec < 0, forcing it to 0.0");
      reorder_wait_sec_ = 0.0;
    }

    auto pub_qos =
        rclcpp::QoS(rclcpp::KeepLast(output_queue_size_)).durability_volatile();
    if (output_reliable_) {
      pub_qos.reliable();
    } else {
      pub_qos.best_effort();
    }

    fused_pub_ = this->create_publisher<PointCloud2>(fused_topic_, pub_qos);

    auto sub_qos = rclcpp::SensorDataQoS();
    left_sub_ = this->create_subscription<PointCloud2>(
        left_topic_, sub_qos,
        [this](PointCloud2::SharedPtr msg) {
          HandleCloud(msg, left_lidar_id_, left_source_frame_, "left");
        });
    right_sub_ = this->create_subscription<PointCloud2>(
        right_topic_, sub_qos,
        [this](PointCloud2::SharedPtr msg) {
          HandleCloud(msg, right_lidar_id_, right_source_frame_, "right");
        });

    flush_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(2),
        std::bind(&DualLidarFuserNode::FlushReadyClouds, this));

    RCLCPP_INFO(
        this->get_logger(),
        "dual_lidar_fuser started as multi-lidar mux. left=%s id=%d frame=%s "
        "right=%s id=%d frame=%s output=%s frame_policy=%s reorder_wait=%.3fs "
        "queue=%d drop_zero=%d qos=%s",
        left_topic_.c_str(), left_lidar_id_,
        left_source_frame_.empty() ? "<msg_frame>" : left_source_frame_.c_str(),
        right_topic_.c_str(), right_lidar_id_,
        right_source_frame_.empty() ? "<msg_frame>"
                                    : right_source_frame_.c_str(),
        fused_topic_.c_str(),
        output_frame_id_.empty()
            ? "source_frame_per_message"
            : output_frame_id_.c_str(),
        reorder_wait_sec_, queue_size_, drop_zero_points_,
        output_reliable_ ? "reliable" : "best_effort");
  }

private:
  static int64_t StampToNs(const builtin_interfaces::msg::Time & stamp) {
    return static_cast<int64_t>(stamp.sec) * 1000000000ll +
           static_cast<int64_t>(stamp.nanosec);
  }

  static bool IsZeroStamp(const builtin_interfaces::msg::Time & stamp) {
    return stamp.sec == 0 && stamp.nanosec == 0;
  }

  static void AddField(PointCloud2 & cloud, const std::string & name,
                       const uint32_t offset, const uint8_t datatype) {
    PointField field;
    field.name = name;
    field.offset = offset;
    field.count = 1;
    field.datatype = datatype;
    cloud.fields.push_back(field);
  }

  static int FindFieldOffset(const PointCloud2 & cloud,
                             const std::string & name) {
    for (const auto & field : cloud.fields) {
      if (field.name == name) {
        return static_cast<int>(field.offset);
      }
    }
    return -1;
  }

  static std::optional<PointField> FindField(const PointCloud2 & cloud,
                                             const std::string & name) {
    for (const auto & field : cloud.fields) {
      if (field.name == name) {
        return field;
      }
    }
    return std::nullopt;
  }

  template <typename T>
  static T ReadUnchecked(const PointCloud2 & cloud, const std::size_t base,
                         const int offset) {
    T value{};
    std::memcpy(&value, &cloud.data[base + static_cast<std::size_t>(offset)],
                sizeof(T));
    return value;
  }

  static double ReadNumericField(const PointCloud2 & cloud,
                                 const std::size_t base,
                                 const PointField & field,
                                 const double fallback) {
    const auto offset = static_cast<int>(field.offset);
    const auto byte_index = base + field.offset;
    if (byte_index >= cloud.data.size()) {
      return fallback;
    }

    switch (field.datatype) {
      case PointField::INT8:
        return static_cast<double>(ReadUnchecked<int8_t>(cloud, base, offset));
      case PointField::UINT8:
        return static_cast<double>(ReadUnchecked<uint8_t>(cloud, base, offset));
      case PointField::INT16:
        return static_cast<double>(ReadUnchecked<int16_t>(cloud, base, offset));
      case PointField::UINT16:
        return static_cast<double>(ReadUnchecked<uint16_t>(cloud, base, offset));
      case PointField::INT32:
        return static_cast<double>(ReadUnchecked<int32_t>(cloud, base, offset));
      case PointField::UINT32:
        return static_cast<double>(ReadUnchecked<uint32_t>(cloud, base, offset));
      case PointField::FLOAT32:
        return static_cast<double>(ReadUnchecked<float>(cloud, base, offset));
      case PointField::FLOAT64:
        return ReadUnchecked<double>(cloud, base, offset);
      default:
        return fallback;
    }
  }

  static void WriteFloat(std::vector<uint8_t> & data, const float value) {
    const auto old_size = data.size();
    data.resize(old_size + sizeof(float));
    std::memcpy(data.data() + old_size, &value, sizeof(float));
  }

  static void WriteDouble(std::vector<uint8_t> & data, const double value) {
    const auto old_size = data.size();
    data.resize(old_size + sizeof(double));
    std::memcpy(data.data() + old_size, &value, sizeof(double));
  }

  static void WriteUint8(std::vector<uint8_t> & data, const uint8_t value) {
    data.push_back(value);
  }

  static void InitOutputLayout(PointCloud2 & cloud) {
    cloud.fields.clear();
    AddField(cloud, "x", 0, PointField::FLOAT32);
    AddField(cloud, "y", 4, PointField::FLOAT32);
    AddField(cloud, "z", 8, PointField::FLOAT32);
    AddField(cloud, "intensity", 12, PointField::FLOAT32);
    AddField(cloud, "tag", 16, PointField::UINT8);
    AddField(cloud, "line", 17, PointField::UINT8);
    AddField(cloud, "timestamp", 18, PointField::FLOAT64);
    AddField(cloud, "lidar_id", 26, PointField::UINT8);
    cloud.point_step = 27;
    cloud.height = 1;
    cloud.is_bigendian = false;
    cloud.is_dense = true;
  }

  PointCloud2 AnnotateCloud(const PointCloud2 & in, const int lidar_id,
                            const std::string & source_frame_override,
                            const char * side) {
    if (IsZeroStamp(in.header.stamp)) {
      throw std::runtime_error(std::string(side) +
                               " cloud has zero PointCloud2.header.stamp");
    }

    const auto x_field = FindField(in, "x");
    const auto y_field = FindField(in, "y");
    const auto z_field = FindField(in, "z");
    if (!x_field || !y_field || !z_field || in.point_step == 0) {
      throw std::runtime_error(std::string(side) +
                               " cloud misses x/y/z fields");
    }

    const auto intensity_field = FindField(in, "intensity");
    const auto tag_field = FindField(in, "tag");
    const auto line_field = FindField(in, "line");
    const auto timestamp_field = FindField(in, "timestamp");
    const double fallback_timestamp_ns =
        static_cast<double>(StampToNs(in.header.stamp));
    const auto source_lidar_id_field = FindField(in, "lidar_id");

    PointCloud2 out;
    out.header = in.header;
    if (!source_frame_override.empty()) {
      if (out.header.frame_id != source_frame_override) {
        RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                             "Override %s cloud frame_id from %s to %s",
                             side, out.header.frame_id.c_str(),
                             source_frame_override.c_str());
      }
      out.header.frame_id = source_frame_override;
    }
    if (!output_frame_id_.empty()) {
      out.header.frame_id = output_frame_id_;
    }

    InitOutputLayout(out);
    out.data.reserve(static_cast<std::size_t>(in.width) * in.height *
                     out.point_step);

    const std::size_t point_count =
        static_cast<std::size_t>(in.width) * in.height;
    std::size_t kept_points = 0;
    const uint8_t output_lidar_id =
        static_cast<uint8_t>(std::clamp(lidar_id, 0, 255));

    for (std::size_t point_index = 0; point_index < point_count; ++point_index) {
      const std::size_t base = point_index * in.point_step;
      if (base + in.point_step > in.data.size()) {
        break;
      }

      const float x =
          static_cast<float>(ReadNumericField(in, base, *x_field, 0.0));
      const float y =
          static_cast<float>(ReadNumericField(in, base, *y_field, 0.0));
      const float z =
          static_cast<float>(ReadNumericField(in, base, *z_field, 0.0));
      const bool finite = std::isfinite(x) && std::isfinite(y) &&
                          std::isfinite(z);
      const bool zero = std::fabs(x) < zero_epsilon_ &&
                        std::fabs(y) < zero_epsilon_ &&
                        std::fabs(z) < zero_epsilon_;
      if (!finite || (drop_zero_points_ && zero)) {
        continue;
      }

      const float intensity = intensity_field
                                  ? static_cast<float>(ReadNumericField(
                                        in, base, *intensity_field, 0.0))
                                  : 0.0f;
      const uint8_t tag = tag_field
                              ? static_cast<uint8_t>(std::clamp(
                                    ReadNumericField(in, base, *tag_field, 0.0),
                                    0.0, 255.0))
                              : 0;
      const uint8_t line =
          line_field ? static_cast<uint8_t>(std::clamp(
                           ReadNumericField(in, base, *line_field, 0.0), 0.0,
                           255.0))
                     : 0;
      const double timestamp_ns =
          timestamp_field
              ? ReadNumericField(in, base, *timestamp_field,
                                 fallback_timestamp_ns)
              : fallback_timestamp_ns;

      uint8_t point_lidar_id = output_lidar_id;
      if (source_lidar_id_field) {
        point_lidar_id = static_cast<uint8_t>(std::clamp(
            ReadNumericField(in, base, *source_lidar_id_field, output_lidar_id),
            0.0, 255.0));
      }

      WriteFloat(out.data, x);
      WriteFloat(out.data, y);
      WriteFloat(out.data, z);
      WriteFloat(out.data, intensity);
      WriteUint8(out.data, tag);
      WriteUint8(out.data, line);
      WriteDouble(out.data, timestamp_ns);
      WriteUint8(out.data, point_lidar_id);
      ++kept_points;
    }

    out.width = static_cast<uint32_t>(kept_points);
    out.row_step = out.width * out.point_step;
    return out;
  }

  void HandleCloud(const PointCloud2::SharedPtr msg, const int lidar_id,
                   const std::string & source_frame_override,
                   const char * side) {
    if (!msg) {
      return;
    }

    PointCloud2 annotated;
    try {
      annotated = AnnotateCloud(*msg, lidar_id, source_frame_override, side);
    } catch (const std::exception & e) {
      RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                           "Drop %s cloud: %s", side, e.what());
      return;
    }

    std::vector<PointCloud2> ready;
    {
      std::lock_guard<std::mutex> lock(mutex_);
      pending_.push_back(QueuedCloud{std::move(annotated), this->now()});
      std::sort(pending_.begin(), pending_.end(),
                [](const QueuedCloud & a, const QueuedCloud & b) {
                  return StampToNs(a.msg.header.stamp) <
                         StampToNs(b.msg.header.stamp);
                });

      while (static_cast<int>(pending_.size()) > queue_size_) {
        ready.push_back(std::move(pending_.front().msg));
        pending_.pop_front();
      }

      CollectReadyLocked(ready);
    }

    PublishReady(ready);
  }

  void CollectReadyLocked(std::vector<PointCloud2> & ready) {
    const auto now = this->now();
    while (!pending_.empty()) {
      const double age = (now - pending_.front().received_time).seconds();
      if (age < reorder_wait_sec_) {
        break;
      }
      ready.push_back(std::move(pending_.front().msg));
      pending_.pop_front();
    }
  }

  void FlushReadyClouds() {
    std::vector<PointCloud2> ready;
    {
      std::lock_guard<std::mutex> lock(mutex_);
      CollectReadyLocked(ready);
    }

    PublishReady(ready);
  }

  void PublishReady(const std::vector<PointCloud2> & ready) {
    for (const auto & cloud : ready) {
      fused_pub_->publish(cloud);
      RCLCPP_INFO_THROTTLE(
          this->get_logger(), *this->get_clock(), 2000,
          "Published multi-lidar cloud: stamp=%.6f frame=%s points=%u",
          rclcpp::Time(cloud.header.stamp).seconds(),
          cloud.header.frame_id.c_str(), cloud.width * cloud.height);
    }
  }

  std::string left_topic_;
  std::string right_topic_;
  std::string fused_topic_;
  std::string left_source_frame_;
  std::string right_source_frame_;
  std::string output_frame_id_;
  int left_lidar_id_;
  int right_lidar_id_;
  double reorder_wait_sec_;
  int queue_size_;
  double zero_epsilon_;
  bool drop_zero_points_;
  bool output_reliable_;
  int output_queue_size_;

  rclcpp::Subscription<PointCloud2>::SharedPtr left_sub_;
  rclcpp::Subscription<PointCloud2>::SharedPtr right_sub_;
  rclcpp::Publisher<PointCloud2>::SharedPtr fused_pub_;
  rclcpp::TimerBase::SharedPtr flush_timer_;

  std::mutex mutex_;
  std::deque<QueuedCloud> pending_;
};

int main(int argc, char ** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DualLidarFuserNode>());
  rclcpp::shutdown();
  return 0;
}
