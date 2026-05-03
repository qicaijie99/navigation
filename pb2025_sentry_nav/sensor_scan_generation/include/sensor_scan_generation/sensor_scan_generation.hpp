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

#ifndef SENSOR_SCAN_GENERATION__SENSOR_SCAN_GENERATION_HPP_
#define SENSOR_SCAN_GENERATION__SENSOR_SCAN_GENERATION_HPP_

#include <chrono>
#include <memory>
#include <string>

#include "message_filters/subscriber.h"
#include "message_filters/sync_policies/approximate_time.h"
#include "message_filters/synchronizer.h"
#include "nav_msgs/msg/odometry.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2_ros/transform_listener.h"

namespace sensor_scan_generation
{

class SensorScanGenerationNode : public rclcpp::Node
{
public:
  explicit SensorScanGenerationNode(const rclcpp::NodeOptions & options);

private:
  void odometryHandler(const nav_msgs::msg::Odometry::ConstSharedPtr & odometry);

  void laserCloudAndOdometryHandler(
    const nav_msgs::msg::Odometry::ConstSharedPtr & odometry,
    const sensor_msgs::msg::PointCloud2::ConstSharedPtr & laserCloud2);

  void obstacleCloudAndOdometryHandler(
    const nav_msgs::msg::Odometry::ConstSharedPtr & odometry,
    const sensor_msgs::msg::PointCloud2::ConstSharedPtr & obstacleCloud);

  bool getTransform(
    const std::string & target_frame, const std::string & source_frame,
    const rclcpp::Time & stamp,
    tf2::Transform & transform, tf2::Transform & cached_transform, bool & has_cached_transform);

  void publishTransform(
    const tf2::Transform & transform, const std::string & parent_frame,
    const std::string & child_frame, const rclcpp::Time & stamp);

  void publishOdometry(
    const tf2::Transform & transform, std::string parent_frame, const std::string & child_frame,
    const rclcpp::Time & stamp);

  void publishLatestState();

  tf2::Transform lowPassPose(
    const tf2::Transform & current, const rclcpp::Time & stamp,
    tf2::Transform & filtered, rclcpp::Time & filtered_stamp, bool & has_filtered,
    const std::string & label);

  tf2::Transform projectTo2D(const tf2::Transform & transform, bool zero_z) const;

  std::string lidar_frame_;
  std::string base_frame_;
  std::string robot_base_frame_;
  std::string base_pose_source_frame_;
  std::string obstacle_cloud_topic_;
  std::string obstacle_registered_topic_;
  bool project_odom_to_2d_;
  double realtime_odom_publish_period_sec_;
  bool smooth_base_pose_;
  double base_pose_smoothing_alpha_;
  double base_pose_filter_reset_dt_sec_;

  std::unique_ptr<tf2_ros::TransformBroadcaster> br_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pub_laser_cloud_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr pub_obstacle_cloud_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr pub_chassis_odometry_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr realtime_odometry_sub_;
  rclcpp::TimerBase::SharedPtr realtime_publish_timer_;

  std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
  std::unique_ptr<tf2_ros::TransformListener> tf_listener_;

  message_filters::Subscriber<nav_msgs::msg::Odometry> odometry_sub_;
  message_filters::Subscriber<sensor_msgs::msg::PointCloud2> laser_cloud_sub_;
  message_filters::Subscriber<nav_msgs::msg::Odometry> obstacle_odometry_sub_;
  message_filters::Subscriber<sensor_msgs::msg::PointCloud2> obstacle_cloud_sub_;

  using SyncPolicy = message_filters::sync_policies::ApproximateTime<
    nav_msgs::msg::Odometry, sensor_msgs::msg::PointCloud2>;
  std::unique_ptr<message_filters::Synchronizer<SyncPolicy>> sync_;
  std::unique_ptr<message_filters::Synchronizer<SyncPolicy>> obstacle_sync_;

  bool has_cached_lidar_to_base_pose_source_;
  bool has_cached_lidar_to_robot_base_;
  tf2::Transform cached_lidar_to_base_pose_source_;
  tf2::Transform cached_lidar_to_robot_base_;

  bool has_filtered_base_pose_source_;
  bool has_filtered_robot_base_;
  tf2::Transform filtered_base_pose_source_;
  tf2::Transform filtered_robot_base_;
  rclcpp::Time filtered_base_pose_source_stamp_;
  rclcpp::Time filtered_robot_base_stamp_;

  bool has_previous_odometry_;
  tf2::Transform previous_odometry_transform_;
  rclcpp::Time previous_odometry_stamp_;
  bool has_latest_state_;
  tf2::Transform latest_odom_to_base_;
  nav_msgs::msg::Odometry latest_chassis_odometry_;
  std::string latest_parent_frame_;
};

}  // namespace sensor_scan_generation

#endif  // SENSOR_SCAN_GENERATION__SENSOR_SCAN_GENERATION_HPP_
