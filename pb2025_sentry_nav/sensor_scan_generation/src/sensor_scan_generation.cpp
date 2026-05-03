// Copyright 2025 Lihan Chen
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "sensor_scan_generation/sensor_scan_generation.hpp"

#include "pcl_ros/transforms.hpp"
#include "tf2/time.h"
#include "tf2/utils.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

namespace sensor_scan_generation
{

SensorScanGenerationNode::SensorScanGenerationNode(const rclcpp::NodeOptions & options)
: Node("sensor_scan_generation", options)
{
  this->declare_parameter<std::string>("lidar_frame", "");
  this->declare_parameter<std::string>("base_frame", "");
  this->declare_parameter<std::string>("robot_base_frame", "");
  this->declare_parameter<std::string>("base_pose_source_frame", "");
  this->declare_parameter<std::string>("obstacle_cloud_topic", "livox/multi_lidar_points");
  this->declare_parameter<std::string>("obstacle_registered_topic", "registered_scan_obstacle");
  this->declare_parameter<bool>("project_odom_to_2d", true);
  this->declare_parameter<double>("realtime_odom_publish_rate_hz", 50.0);
  this->declare_parameter<bool>("smooth_base_pose", false);
  this->declare_parameter<double>("base_pose_smoothing_alpha", 0.25);
  this->declare_parameter<double>("base_pose_filter_reset_dt_sec", 1.0);

  this->get_parameter("lidar_frame", lidar_frame_);
  this->get_parameter("base_frame", base_frame_);
  this->get_parameter("robot_base_frame", robot_base_frame_);
  this->get_parameter("base_pose_source_frame", base_pose_source_frame_);
  this->get_parameter("obstacle_cloud_topic", obstacle_cloud_topic_);
  this->get_parameter("obstacle_registered_topic", obstacle_registered_topic_);
  this->get_parameter("project_odom_to_2d", project_odom_to_2d_);
  this->get_parameter("smooth_base_pose", smooth_base_pose_);
  this->get_parameter("base_pose_smoothing_alpha", base_pose_smoothing_alpha_);
  this->get_parameter("base_pose_filter_reset_dt_sec", base_pose_filter_reset_dt_sec_);
  if (base_pose_source_frame_.empty()) {
    base_pose_source_frame_ = base_frame_;
  }
  if (base_pose_smoothing_alpha_ < 0.0) {
    RCLCPP_WARN(
      this->get_logger(), "base_pose_smoothing_alpha %.3f is below 0.0; clamping to 0.0",
      base_pose_smoothing_alpha_);
    base_pose_smoothing_alpha_ = 0.0;
  } else if (base_pose_smoothing_alpha_ > 1.0) {
    RCLCPP_WARN(
      this->get_logger(), "base_pose_smoothing_alpha %.3f is above 1.0; clamping to 1.0",
      base_pose_smoothing_alpha_);
    base_pose_smoothing_alpha_ = 1.0;
  }
  double realtime_odom_publish_rate_hz = 50.0;
  this->get_parameter("realtime_odom_publish_rate_hz", realtime_odom_publish_rate_hz);
  if (realtime_odom_publish_rate_hz <= 0.0) {
    realtime_odom_publish_period_sec_ = 0.0;
  } else {
    if (realtime_odom_publish_rate_hz < 20.0) {
      RCLCPP_WARN(
        this->get_logger(),
        "realtime_odom_publish_rate_hz %.3f is below 20Hz; clamping to 20Hz",
        realtime_odom_publish_rate_hz);
      realtime_odom_publish_rate_hz = 20.0;
    }
    realtime_odom_publish_period_sec_ = 1.0 / realtime_odom_publish_rate_hz;
  }

  has_cached_lidar_to_base_pose_source_ = false;
  has_cached_lidar_to_robot_base_ = false;
  has_filtered_base_pose_source_ = false;
  has_filtered_robot_base_ = false;
  has_previous_odometry_ = false;
  has_latest_state_ = false;

  tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
  tf_listener_ = std::make_unique<tf2_ros::TransformListener>(*tf_buffer_);
  br_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

  pub_laser_cloud_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("sensor_scan", 2);
  pub_obstacle_cloud_ =
    this->create_publisher<sensor_msgs::msg::PointCloud2>(obstacle_registered_topic_, 2);
  pub_chassis_odometry_ = this->create_publisher<nav_msgs::msg::Odometry>("odometry", 2);
  if (realtime_odom_publish_period_sec_ > 0.0) {
    const auto realtime_publish_period = std::chrono::duration_cast<std::chrono::nanoseconds>(
      std::chrono::duration<double>(realtime_odom_publish_period_sec_));
    realtime_publish_timer_ = this->create_wall_timer(
      realtime_publish_period, std::bind(&SensorScanGenerationNode::publishLatestState, this));
  }

  rmw_qos_profile_t qos_profile = {
    RMW_QOS_POLICY_HISTORY_KEEP_LAST,
    1,
    RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
    RMW_QOS_POLICY_DURABILITY_VOLATILE,
    RMW_QOS_DEADLINE_DEFAULT,
    RMW_QOS_LIFESPAN_DEFAULT,
    RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
    RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
    false};

  realtime_odometry_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
    "lidar_odometry", rclcpp::SensorDataQoS(),
    std::bind(&SensorScanGenerationNode::odometryHandler, this, std::placeholders::_1));

  odometry_sub_.subscribe(this, "lidar_odometry", qos_profile);
  laser_cloud_sub_.subscribe(this, "registered_scan", qos_profile);
  obstacle_odometry_sub_.subscribe(this, "lidar_odometry", qos_profile);
  obstacle_cloud_sub_.subscribe(this, obstacle_cloud_topic_, qos_profile);

  sync_ = std::make_unique<message_filters::Synchronizer<SyncPolicy>>(
    SyncPolicy(100), odometry_sub_, laser_cloud_sub_);
  sync_->registerCallback(
    std::bind(
      &SensorScanGenerationNode::laserCloudAndOdometryHandler, this, std::placeholders::_1,
      std::placeholders::_2));

  obstacle_sync_ = std::make_unique<message_filters::Synchronizer<SyncPolicy>>(
    SyncPolicy(100), obstacle_odometry_sub_, obstacle_cloud_sub_);
  obstacle_sync_->registerCallback(
    std::bind(
      &SensorScanGenerationNode::obstacleCloudAndOdometryHandler, this, std::placeholders::_1,
      std::placeholders::_2));
}

void SensorScanGenerationNode::odometryHandler(
  const nav_msgs::msg::Odometry::ConstSharedPtr & odometry_msg)
{
  tf2::Transform tf_lidar_to_base_pose_source;
  tf2::Transform tf_lidar_to_robot_base;
  tf2::Transform tf_odom_to_base;
  tf2::Transform tf_odom_to_base_pose_source;
  tf2::Transform tf_odom_to_robot_base;
  tf2::Transform tf_odom_to_lidar;

  tf2::fromMsg(odometry_msg->pose.pose, tf_odom_to_lidar);
  const rclcpp::Time transform_stamp = odometry_msg->header.stamp;

  if (!getTransform(
      lidar_frame_, robot_base_frame_, transform_stamp, tf_lidar_to_robot_base,
      cached_lidar_to_robot_base_, has_cached_lidar_to_robot_base_))
  {
    return;
  }

  // base_pose_source_frame controls which physical frame drives odom->base_frame.
  // For the sentry robot, gimbal_yaw is the navigation heading, so base_footprint
  // can be published from the 2D projection of odom->gimbal_yaw while retaining
  // the existing TF tree under base_footprint.
  if (base_pose_source_frame_ == robot_base_frame_) {
    tf_lidar_to_base_pose_source = tf_lidar_to_robot_base;
  } else {
    if (!getTransform(
        lidar_frame_, base_pose_source_frame_, transform_stamp, tf_lidar_to_base_pose_source,
        cached_lidar_to_base_pose_source_, has_cached_lidar_to_base_pose_source_))
    {
      return;
    }
  }

  tf_odom_to_base_pose_source = tf_odom_to_lidar * tf_lidar_to_base_pose_source;
  tf_odom_to_robot_base = tf_odom_to_lidar * tf_lidar_to_robot_base;

  // Optional low-pass filter: use the lidar odometry stamp and smooth only the
  // pose exported to Nav2. TF lookups above still use the original sensor time.
  tf_odom_to_base_pose_source = lowPassPose(
    tf_odom_to_base_pose_source, odometry_msg->header.stamp, filtered_base_pose_source_,
    filtered_base_pose_source_stamp_, has_filtered_base_pose_source_, base_pose_source_frame_);
  if (base_pose_source_frame_ == robot_base_frame_) {
    tf_odom_to_robot_base = tf_odom_to_base_pose_source;
    filtered_robot_base_ = filtered_base_pose_source_;
    filtered_robot_base_stamp_ = filtered_base_pose_source_stamp_;
    has_filtered_robot_base_ = has_filtered_base_pose_source_;
  } else {
    tf_odom_to_robot_base = lowPassPose(
      tf_odom_to_robot_base, odometry_msg->header.stamp, filtered_robot_base_,
      filtered_robot_base_stamp_, has_filtered_robot_base_, robot_base_frame_);
  }

  tf_odom_to_base = tf_odom_to_base_pose_source;

  if (project_odom_to_2d_) {
    tf_odom_to_base = projectTo2D(tf_odom_to_base_pose_source, true);
    tf_odom_to_robot_base = projectTo2D(tf_odom_to_robot_base, false);
  }

  publishTransform(
    tf_odom_to_base, odometry_msg->header.frame_id, base_frame_, odometry_msg->header.stamp);
  publishOdometry(
    tf_odom_to_robot_base, odometry_msg->header.frame_id, robot_base_frame_,
    odometry_msg->header.stamp);
  latest_odom_to_base_ = tf_odom_to_base;
  latest_parent_frame_ = odometry_msg->header.frame_id;
  has_latest_state_ = true;
}

void SensorScanGenerationNode::laserCloudAndOdometryHandler(
  const nav_msgs::msg::Odometry::ConstSharedPtr & odometry_msg,
  const sensor_msgs::msg::PointCloud2::ConstSharedPtr & pcd_msg)
{
  tf2::Transform tf_odom_to_lidar;

  tf2::fromMsg(odometry_msg->pose.pose, tf_odom_to_lidar);

  sensor_msgs::msg::PointCloud2 out;
  pcl_ros::transformPointCloud(lidar_frame_, tf_odom_to_lidar.inverse(), *pcd_msg, out);
  pub_laser_cloud_->publish(out);
}

void SensorScanGenerationNode::obstacleCloudAndOdometryHandler(
  const nav_msgs::msg::Odometry::ConstSharedPtr & odometry_msg,
  const sensor_msgs::msg::PointCloud2::ConstSharedPtr & obstacle_cloud_msg)
{
  sensor_msgs::msg::PointCloud2 out;
  const std::string & target_frame = odometry_msg->header.frame_id;

  if (obstacle_cloud_msg->header.frame_id == target_frame) {
    out = *obstacle_cloud_msg;
  } else if (obstacle_cloud_msg->header.frame_id == lidar_frame_) {
    tf2::Transform tf_odom_to_lidar;
    tf2::fromMsg(odometry_msg->pose.pose, tf_odom_to_lidar);
    pcl_ros::transformPointCloud(target_frame, tf_odom_to_lidar, *obstacle_cloud_msg, out);
  } else {
    tf2::Transform tf_lidar_to_source;
    try {
      const auto tf_lidar_to_source_msg = tf_buffer_->lookupTransform(
        lidar_frame_, obstacle_cloud_msg->header.frame_id, tf2::TimePointZero);
      tf2::fromMsg(tf_lidar_to_source_msg.transform, tf_lidar_to_source);
    } catch (tf2::TransformException & ex) {
      if (!pcl_ros::transformPointCloud(target_frame, *obstacle_cloud_msg, out, *tf_buffer_)) {
        RCLCPP_WARN_THROTTLE(
          this->get_logger(), *this->get_clock(), 2000,
          "Failed to transform obstacle cloud from %s to %s: %s. Skipping obstacle cloud.",
          obstacle_cloud_msg->header.frame_id.c_str(), target_frame.c_str(), ex.what());
        return;
      }
      out.header.stamp = odometry_msg->header.stamp;
      out.header.frame_id = target_frame;
      pub_obstacle_cloud_->publish(out);
      return;
    }

    tf2::Transform tf_odom_to_lidar;
    tf2::fromMsg(odometry_msg->pose.pose, tf_odom_to_lidar);
    pcl_ros::transformPointCloud(
      target_frame, tf_odom_to_lidar * tf_lidar_to_source, *obstacle_cloud_msg, out);
  }

  out.header.stamp = odometry_msg->header.stamp;
  out.header.frame_id = target_frame;
  pub_obstacle_cloud_->publish(out);
}

bool SensorScanGenerationNode::getTransform(
  const std::string & target_frame, const std::string & source_frame,
  const rclcpp::Time & stamp,
  tf2::Transform & transform, tf2::Transform & cached_transform, bool & has_cached_transform)
{
  try {
    auto transform_stamped = tf_buffer_->lookupTransform(
      target_frame, source_frame, stamp, tf2::durationFromSec(0.2));
    tf2::fromMsg(transform_stamped.transform, transform);
    cached_transform = transform;
    has_cached_transform = true;
    return true;
  } catch (tf2::TransformException & ex) {
    try {
      auto transform_stamped = tf_buffer_->lookupTransform(
        target_frame, source_frame, tf2::TimePointZero, tf2::durationFromSec(0.1));
      tf2::fromMsg(transform_stamped.transform, transform);
      cached_transform = transform;
      has_cached_transform = true;
      RCLCPP_WARN_THROTTLE(
        this->get_logger(), *this->get_clock(), 2000,
        "TF lookup failed for %s <- %s at %.9f: %s. Using latest transform instead.",
        target_frame.c_str(), source_frame.c_str(), stamp.seconds(), ex.what());
      return true;
    } catch (tf2::TransformException & latest_ex) {
      (void) latest_ex;
    }

    if (has_cached_transform) {
      transform = cached_transform;
      RCLCPP_WARN_THROTTLE(
        this->get_logger(), *this->get_clock(), 2000,
        "TF lookup failed for %s <- %s at %.9f: %s. Using cached transform.",
        target_frame.c_str(), source_frame.c_str(), stamp.seconds(), ex.what());
      return true;
    }

    RCLCPP_WARN_THROTTLE(
      this->get_logger(), *this->get_clock(), 2000,
      "TF lookup failed for %s <- %s at %.9f: %s. No cached transform yet; skipping scan.",
      target_frame.c_str(), source_frame.c_str(), stamp.seconds(), ex.what());
    return false;
  }
}

void SensorScanGenerationNode::publishTransform(
  const tf2::Transform & transform, const std::string & parent_frame,
  const std::string & child_frame, const rclcpp::Time & stamp)
{
  geometry_msgs::msg::TransformStamped transform_msg;
  transform_msg.header.stamp = stamp;
  transform_msg.header.frame_id = parent_frame;
  transform_msg.child_frame_id = child_frame;
  transform_msg.transform = tf2::toMsg(transform);
  br_->sendTransform(transform_msg);
}

void SensorScanGenerationNode::publishLatestState()
{
  if (!has_latest_state_) {
    return;
  }

  const rclcpp::Time stamp = this->now();
  publishTransform(latest_odom_to_base_, latest_parent_frame_, base_frame_, stamp);

  auto odometry = latest_chassis_odometry_;
  odometry.header.stamp = stamp;
  pub_chassis_odometry_->publish(odometry);
}

void SensorScanGenerationNode::publishOdometry(
  const tf2::Transform & transform, std::string parent_frame, const std::string & child_frame,
  const rclcpp::Time & stamp)
{
  nav_msgs::msg::Odometry out;
  out.header.stamp = stamp;
  out.header.frame_id = parent_frame;
  out.child_frame_id = child_frame;

  const auto & origin = transform.getOrigin();
  out.pose.pose.position.x = origin.x();
  out.pose.pose.position.y = origin.y();
  out.pose.pose.position.z = origin.z();
  out.pose.pose.orientation = tf2::toMsg(transform.getRotation());

  const double dt = has_previous_odometry_ ? (stamp - previous_odometry_stamp_).seconds() : 0.0;

  if (dt > 0) {
    const auto linear_velocity =
      (transform.getOrigin() - previous_odometry_transform_.getOrigin()) / dt;

    const tf2::Quaternion q_diff =
      transform.getRotation() * previous_odometry_transform_.getRotation().inverse();
    const auto angular_velocity = q_diff.getAxis() * q_diff.getAngle() / dt;

    out.twist.twist.linear.x = linear_velocity.x();
    out.twist.twist.linear.y = linear_velocity.y();
    out.twist.twist.linear.z = linear_velocity.z();
    out.twist.twist.angular.x = angular_velocity.x();
    out.twist.twist.angular.y = angular_velocity.y();
    out.twist.twist.angular.z = angular_velocity.z();
  }

  previous_odometry_transform_ = transform;
  previous_odometry_stamp_ = stamp;
  has_previous_odometry_ = true;

  latest_chassis_odometry_ = out;
  pub_chassis_odometry_->publish(out);
}

tf2::Transform SensorScanGenerationNode::lowPassPose(
  const tf2::Transform & current, const rclcpp::Time & stamp,
  tf2::Transform & filtered, rclcpp::Time & filtered_stamp, bool & has_filtered,
  const std::string & label)
{
  if (!smooth_base_pose_) {
    return current;
  }

  if (!has_filtered) {
    filtered = current;
    filtered_stamp = stamp;
    has_filtered = true;
    return filtered;
  }

  const double dt = (stamp - filtered_stamp).seconds();
  if (dt < 0.0 || (base_pose_filter_reset_dt_sec_ > 0.0 && dt > base_pose_filter_reset_dt_sec_)) {
    filtered = current;
    filtered_stamp = stamp;
    RCLCPP_WARN_THROTTLE(
      this->get_logger(), *this->get_clock(), 2000,
      "Reset low-pass pose filter for %s because odometry dt is %.3fs",
      label.c_str(), dt);
    return filtered;
  }

  // alpha=1.0 follows raw odometry; smaller alpha suppresses high-frequency
  // jitter at the cost of output lag.
  const double alpha = base_pose_smoothing_alpha_;
  const double keep = 1.0 - alpha;
  const tf2::Vector3 smoothed_origin =
    filtered.getOrigin() * keep + current.getOrigin() * alpha;

  tf2::Quaternion smoothed_rotation =
    filtered.getRotation().slerp(current.getRotation(), alpha);
  smoothed_rotation.normalize();

  filtered.setOrigin(smoothed_origin);
  filtered.setRotation(smoothed_rotation);
  filtered_stamp = stamp;
  return filtered;
}

tf2::Transform SensorScanGenerationNode::projectTo2D(
  const tf2::Transform & transform, bool zero_z) const
{
  tf2::Transform projected = transform;
  tf2::Quaternion q;
  q.setRPY(0.0, 0.0, tf2::getYaw(transform.getRotation()));
  projected.setRotation(q);

  const auto origin = transform.getOrigin();
  projected.setOrigin(tf2::Vector3(origin.x(), origin.y(), zero_z ? 0.0 : origin.z()));
  return projected;
}

}  // namespace sensor_scan_generation

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(sensor_scan_generation::SensorScanGenerationNode)
