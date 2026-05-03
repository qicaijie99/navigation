/**
 * This file is part of Small Point-LIO, an advanced Point-LIO algorithm implementation.
 * Copyright (C) 2025  Yingjie Huang
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#include "small_point_lio_node.hpp"
#include "io/pcd_io.h"
#include "lidar_adapter/custom_mid360_driver.h"
#include "lidar_adapter/livox_custom_msg.h"
#include "lidar_adapter/livox_pointcloud2.h"
#include "lidar_adapter/unitree_lidar.h"
#include "lidar_adapter/velodyne_pointcloud2.h"
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <sensor_msgs/msg/point_field.hpp>
#include <string>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

namespace small_point_lio {

    namespace {

        bool has_parameter_override(rclcpp::Node &node, const std::string &name) {
            const auto &overrides = node.get_node_parameters_interface()->get_parameter_overrides();
            return overrides.find(name) != overrides.end();
        }

        std::string get_or_declare_string_parameter(
                rclcpp::Node &node,
                const std::string &name,
                const std::string &default_value) {
            if (node.has_parameter(name)) {
                std::string value;
                if (node.get_parameter(name, value)) {
                    return value;
                }
            }
            return node.declare_parameter<std::string>(name, default_value);
        }

        bool get_or_declare_bool_parameter(
                rclcpp::Node &node,
                const std::string &name,
                bool default_value) {
            if (node.has_parameter(name)) {
                bool value = default_value;
                if (node.get_parameter(name, value)) {
                    return value;
                }
            }
            return node.declare_parameter<bool>(name, default_value);
        }

        float get_or_declare_float_parameter(
                rclcpp::Node &node,
                const std::string &name,
                float default_value) {
            if (node.has_parameter(name)) {
                float value = default_value;
                if (node.get_parameter(name, value)) {
                    return value;
                }
            }
            return node.declare_parameter<float>(name, default_value);
        }

        sensor_msgs::msg::PointCloud2 make_pointcloud2_message(
                const std::vector<Eigen::Vector3f> &pointcloud,
                const builtin_interfaces::msg::Time &time_msg,
                const std::string &frame_id) {
            sensor_msgs::msg::PointCloud2 msg;
            msg.header.stamp = time_msg;
            msg.header.frame_id = frame_id;
            msg.width = pointcloud.size();
            msg.height = 1;
            msg.fields.reserve(4);

            sensor_msgs::msg::PointField field;
            field.name = "x";
            field.offset = 0;
            field.datatype = sensor_msgs::msg::PointField::FLOAT32;
            field.count = 1;
            msg.fields.push_back(field);

            field.name = "y";
            field.offset = 4;
            msg.fields.push_back(field);

            field.name = "z";
            field.offset = 8;
            msg.fields.push_back(field);

            field.name = "intensity";
            field.offset = 12;
            msg.fields.push_back(field);

            msg.is_bigendian = false;
            msg.point_step = 16;
            msg.row_step = msg.width * msg.point_step;
            msg.data.resize(msg.row_step * msg.height);

            auto *pointer = reinterpret_cast<float *>(msg.data.data());
            for (const auto &point: pointcloud) {
                *pointer++ = point.x();
                *pointer++ = point.y();
                *pointer++ = point.z();
                *pointer++ = 0.0f;
            }

            msg.is_dense = false;
            return msg;
        }

        std::string get_string_parameter(
                rclcpp::Node &node,
                const std::string &primary_name,
                const std::string &default_value,
                const std::string &fallback_name = "") {
            if (!has_parameter_override(node, primary_name) &&
                !fallback_name.empty() &&
                has_parameter_override(node, fallback_name)) {
                return get_or_declare_string_parameter(node, fallback_name, default_value);
            }
            const auto primary_value = get_or_declare_string_parameter(node, primary_name, default_value);
            if (!primary_value.empty()) {
                return primary_value;
            }
            if (fallback_name.empty()) {
                return primary_value;
            }
            const auto fallback_value = get_or_declare_string_parameter(node, fallback_name, default_value);
            if (!fallback_value.empty()) {
                return fallback_value;
            }
            return default_value;
        }

        bool get_bool_parameter(
                rclcpp::Node &node,
                const std::string &primary_name,
                bool default_value,
                const std::string &fallback_name = "") {
            if (!has_parameter_override(node, primary_name) &&
                !fallback_name.empty() &&
                has_parameter_override(node, fallback_name)) {
                return get_or_declare_bool_parameter(node, fallback_name, default_value);
            }
            const auto primary_value = get_or_declare_bool_parameter(node, primary_name, default_value);
            return primary_value;
        }

    }// namespace

    SmallPointLioNode::SmallPointLioNode(const rclcpp::NodeOptions &options)
        : Node("small_point_lio", options) {
        const std::string lidar_topic = get_string_parameter(*this, "lidar_topic", "", "common.lid_topic");
        const std::string imu_topic = get_string_parameter(*this, "imu_topic", "", "common.imu_topic");
        const std::string lidar_type = get_string_parameter(*this, "lidar_type", "livox_pointcloud2");
        const std::string odometry_topic = get_string_parameter(*this, "odometry_topic", "aft_mapped_to_init");
        const std::string registered_scan_topic = get_string_parameter(*this, "registered_scan_topic", "cloud_registered");
        const std::string registered_scan_body_topic = get_string_parameter(*this, "registered_scan_body_topic", "cloud_registered_body");
        const std::string effected_scan_topic = get_string_parameter(*this, "effected_scan_topic", "cloud_effected");
        const std::string laser_map_topic = get_string_parameter(*this, "laser_map_topic", "Laser_map");
        const std::string path_topic = get_string_parameter(*this, "path_topic", "path");
        const std::string odom_frame = get_string_parameter(*this, "odom_frame", "camera_init");
        const std::string body_frame = get_string_parameter(*this, "body_frame", "body");
        const std::string tf_child_frame = get_string_parameter(*this, "tf_child_frame", "aft_mapped");
        const bool save_pcd = get_bool_parameter(*this, "save_pcd", false, "pcd_save.pcd_save_en");
        const bool publish_tf = get_bool_parameter(*this, "publish_tf", false, "publish.tf_send_en");
        const bool publish_path = get_bool_parameter(*this, "publish_path", false, "publish.path_en");
        const bool publish_registered_scan = get_bool_parameter(*this, "publish_registered_scan", true, "publish.scan_publish_en");
        const bool publish_registered_scan_body = get_bool_parameter(*this, "publish_registered_scan_body", false, "publish.scan_bodyframe_pub_en");
        const bool publish_effected_scan = get_bool_parameter(*this, "publish_effected_scan", true, "publish.scan_publish_en");
        const bool publish_laser_map = get_or_declare_bool_parameter(*this, "publish_laser_map", false);
        const float map_publish_resolution = get_or_declare_float_parameter(*this, "map_publish_resolution", 0.2f);

        small_point_lio = std::make_unique<small_point_lio::SmallPointLio>(*this);
        odometry_publisher = create_publisher<nav_msgs::msg::Odometry>(odometry_topic, 20);
        pointcloud_publisher = create_publisher<sensor_msgs::msg::PointCloud2>(registered_scan_topic, 20);
        pointcloud_body_publisher = create_publisher<sensor_msgs::msg::PointCloud2>(registered_scan_body_topic, 20);
        effected_pointcloud_publisher = create_publisher<sensor_msgs::msg::PointCloud2>(effected_scan_topic, 20);
        map_pointcloud_publisher = create_publisher<sensor_msgs::msg::PointCloud2>(laser_map_topic, 20);
        path_publisher = create_publisher<nav_msgs::msg::Path>(path_topic, 20);
        tf_broadcaster = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
        path_message.header.frame_id = odom_frame;
        if (save_pcd || publish_laser_map) {
            pointcloud_mapping = std::make_unique<util::PointcloudMapping>(map_publish_resolution);
        }
        map_save_trigger = create_service<std_srvs::srv::Trigger>(
                "map_save",
                [this, save_pcd](const std_srvs::srv::Trigger::Request::SharedPtr req, std_srvs::srv::Trigger::Response::SharedPtr res) {
                    if (!save_pcd) {
                        res->success = false;
                        res->message = "pcd save is disabled";
                        RCLCPP_ERROR(rclcpp::get_logger("small_point_lio"), "pcd save is disabled");
                        return;
                    }
                    res->success = true;
                    RCLCPP_INFO(rclcpp::get_logger("small_point_lio"), "waiting for pcd saving ...");
                    auto pointcloud_to_save = std::make_shared<std::vector<Eigen::Vector3f>>();
                    *pointcloud_to_save = pointcloud_mapping->get_points();
                    std::thread([pointcloud_to_save]() {
                        io::pcd::write_pcd(ROOT_DIR + "/pcd/scan.pcd", *pointcloud_to_save);
                        RCLCPP_INFO(rclcpp::get_logger("small_point_lio"), "save pcd success");
                    }).detach();
                });
        small_point_lio->set_odometry_callback([this, odom_frame, body_frame, tf_child_frame, publish_tf, publish_path](const common::Odometry &odometry) {
            last_odometry = odometry;

            builtin_interfaces::msg::Time time_msg;
            time_msg.sec = std::floor(odometry.timestamp);
            time_msg.nanosec = static_cast<uint32_t>((odometry.timestamp - time_msg.sec) * 1e9);

            nav_msgs::msg::Odometry odometry_msg;
            odometry_msg.header.stamp = time_msg;
            odometry_msg.header.frame_id = odom_frame;
            odometry_msg.child_frame_id = body_frame;
            odometry_msg.pose.pose.position.x = odometry.position.x();
            odometry_msg.pose.pose.position.y = odometry.position.y();
            odometry_msg.pose.pose.position.z = odometry.position.z();
            odometry_msg.pose.pose.orientation.x = odometry.orientation.x();
            odometry_msg.pose.pose.orientation.y = odometry.orientation.y();
            odometry_msg.pose.pose.orientation.z = odometry.orientation.z();
            odometry_msg.pose.pose.orientation.w = odometry.orientation.w();
            odometry_msg.twist.twist.linear.x = odometry.velocity.x();
            odometry_msg.twist.twist.linear.y = odometry.velocity.y();
            odometry_msg.twist.twist.linear.z = odometry.velocity.z();
            odometry_msg.twist.twist.angular.x = odometry.angular_velocity.x();
            odometry_msg.twist.twist.angular.y = odometry.angular_velocity.y();
            odometry_msg.twist.twist.angular.z = odometry.angular_velocity.z();

            if (publish_tf) {
                geometry_msgs::msg::TransformStamped transform_stamped;
                transform_stamped.header.stamp = time_msg;
                transform_stamped.header.frame_id = odom_frame;
                transform_stamped.child_frame_id = tf_child_frame;
                transform_stamped.transform.translation.x = odometry.position.x();
                transform_stamped.transform.translation.y = odometry.position.y();
                transform_stamped.transform.translation.z = odometry.position.z();
                transform_stamped.transform.rotation.x = odometry.orientation.x();
                transform_stamped.transform.rotation.y = odometry.orientation.y();
                transform_stamped.transform.rotation.z = odometry.orientation.z();
                transform_stamped.transform.rotation.w = odometry.orientation.w();
                tf_broadcaster->sendTransform(transform_stamped);
            }

            if (publish_path) {
                geometry_msgs::msg::PoseStamped pose_stamped;
                pose_stamped.header = odometry_msg.header;
                pose_stamped.pose = odometry_msg.pose.pose;
                path_message.header.stamp = time_msg;
                path_message.poses.emplace_back(pose_stamped);
                path_publisher->publish(path_message);
            }

            odometry_publisher->publish(odometry_msg);
        });
        small_point_lio->set_pointcloud_callback([this, save_pcd, odom_frame, publish_registered_scan, publish_effected_scan, publish_laser_map](const std::vector<Eigen::Vector3f> &pointcloud) {
            builtin_interfaces::msg::Time time_msg;
            time_msg.sec = std::floor(last_odometry.timestamp);
            time_msg.nanosec = static_cast<uint32_t>((last_odometry.timestamp - time_msg.sec) * 1e9);

            if (publish_registered_scan && pointcloud_publisher->get_subscription_count() > 0) {
                pointcloud_publisher->publish(make_pointcloud2_message(pointcloud, time_msg, odom_frame));
            }
            if (publish_effected_scan && effected_pointcloud_publisher->get_subscription_count() > 0) {
                effected_pointcloud_publisher->publish(make_pointcloud2_message(pointcloud, time_msg, odom_frame));
            }
            if (pointcloud_mapping) {
                pointcloud_mapping->add_pointcloud(pointcloud);
                if (publish_laser_map && map_pointcloud_publisher->get_subscription_count() > 0) {
                    map_pointcloud_publisher->publish(make_pointcloud2_message(pointcloud_mapping->get_points(), time_msg, odom_frame));
                }
            }
            (void) save_pcd;
        });
        small_point_lio->set_pointcloud_body_callback([this, body_frame, publish_registered_scan_body](const std::vector<Eigen::Vector3f> &pointcloud) {
            if (!publish_registered_scan_body || pointcloud_body_publisher->get_subscription_count() == 0) {
                return;
            }

            builtin_interfaces::msg::Time time_msg;
            time_msg.sec = std::floor(last_odometry.timestamp);
            time_msg.nanosec = static_cast<uint32_t>((last_odometry.timestamp - time_msg.sec) * 1e9);
            pointcloud_body_publisher->publish(make_pointcloud2_message(pointcloud, time_msg, body_frame));
        });
        if (lidar_type == "livox_custom_msg") {
#ifdef HAVE_LIVOX_DRIVER
            lidar_adapter = std::make_unique<LivoxCustomMsgAdapter>();
#else
            RCLCPP_ERROR(rclcpp::get_logger("small_point_lio"), "livox_custom_msg requested but not available!");
            rclcpp::shutdown();
            return;
#endif
        } else if (lidar_type == "livox_pointcloud2") {
            lidar_adapter = std::make_unique<LivoxPointCloud2Adapter>();
        } else if (lidar_type == "custom_mid360_driver") {
            lidar_adapter = std::make_unique<CustomMid360DriverAdapter>();
        } else if (lidar_type == "unilidar") {
            lidar_adapter = std::make_unique<UnilidarAdapter>();
        } else if (lidar_type == "velodyne_pointcloud2") {
            lidar_adapter = std::make_unique<VelodynePointCloud2Adapter>();
        } else {
            RCLCPP_ERROR(rclcpp::get_logger("small_point_lio"), "unknwon lidar type");
            rclcpp::shutdown();
            return;
        }
        lidar_adapter->setup_subscription(this, lidar_topic, [this](const std::vector<common::Point> &pointcloud) {
            small_point_lio->on_point_cloud_callback(pointcloud);
            small_point_lio->handle_once();
        });
        imu_subsciber = create_subscription<sensor_msgs::msg::Imu>(
                imu_topic,
                rclcpp::SensorDataQoS(),
                [this](const sensor_msgs::msg::Imu &msg) {
                    common::ImuMsg imu_msg;
                    imu_msg.angular_velocity = Eigen::Vector3d(msg.angular_velocity.x, msg.angular_velocity.y, msg.angular_velocity.z);
                    imu_msg.linear_acceleration = Eigen::Vector3d(msg.linear_acceleration.x, msg.linear_acceleration.y, msg.linear_acceleration.z);
                    imu_msg.timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9;
                    small_point_lio->on_imu_callback(imu_msg);
                    small_point_lio->handle_once();
                });
    }

}// namespace small_point_lio

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
RCLCPP_COMPONENTS_REGISTER_NODE(small_point_lio::SmallPointLioNode)
