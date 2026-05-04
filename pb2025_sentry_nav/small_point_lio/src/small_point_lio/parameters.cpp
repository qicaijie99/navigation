/**
 * This file is part of Small Point-LIO, an advanced Point-LIO algorithm implementation.
 * Copyright (C) 2025  Yingjie Huang
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#include "parameters.h"

namespace small_point_lio {

    namespace {

        bool has_parameter_override(rclcpp::Node &node, const std::string &name) {
            const auto &overrides = node.get_node_parameters_interface()->get_parameter_overrides();
            return overrides.find(name) != overrides.end();
        }

        template<typename T>
        T read_parameter(
                rclcpp::Node &node,
                const std::string &primary_name,
                const T &default_value,
                const std::string &fallback_name = "") {
            const std::string *name_to_read = &primary_name;
            if (!fallback_name.empty() &&
                !has_parameter_override(node, primary_name) &&
                has_parameter_override(node, fallback_name)) {
                name_to_read = &fallback_name;
            }

            if (!node.has_parameter(*name_to_read)) {
                node.declare_parameter<T>(*name_to_read, default_value);
            }

            T value = default_value;
            node.get_parameter(*name_to_read, value);
            return value;
        }

        Eigen::Vector3d read_vector3_parameter(
                rclcpp::Node &node,
                const std::string &primary_name,
                const Eigen::Vector3d &default_value,
                const std::string &fallback_name = "") {
            const std::vector<double> default_vector{
                    default_value.x(), default_value.y(), default_value.z()};
            const auto values = read_parameter<std::vector<double>>(
                    node, primary_name, default_vector, fallback_name);
            if (values.size() != 3) {
                RCLCPP_WARN(
                        node.get_logger(),
                        "%s must have 3 values. Using default.",
                        primary_name.c_str());
                return default_value;
            }
            return Eigen::Vector3d(values[0], values[1], values[2]);
        }

        Eigen::Matrix3d read_matrix3_parameter(
                rclcpp::Node &node,
                const std::string &primary_name,
                const Eigen::Matrix3d &default_value,
                const std::string &fallback_name = "") {
            std::vector<double> default_vector(9);
            for (int row = 0; row < 3; ++row) {
                for (int col = 0; col < 3; ++col) {
                    default_vector[static_cast<size_t>(row * 3 + col)] = default_value(row, col);
                }
            }
            const auto values = read_parameter<std::vector<double>>(
                    node, primary_name, default_vector, fallback_name);
            if (values.size() != 9) {
                RCLCPP_WARN(
                        node.get_logger(),
                        "%s must have 9 values. Using default.",
                        primary_name.c_str());
                return default_value;
            }
            Eigen::Matrix3d matrix;
            matrix << values[0], values[1], values[2],
                    values[3], values[4], values[5],
                    values[6], values[7], values[8];
            return matrix;
        }

    }// namespace

    void Parameters::read_parameters(rclcpp::Node &node) {
        // 点云过滤
        point_filter_num = static_cast<int>(read_parameter<int64_t>(node, "point_filter_num", 1));
        auto min_distance = read_parameter<double>(node, "min_distance", 0.5, "preprocess.blind");
        auto max_distance = read_parameter<double>(node, "max_distance", 1000.0, "mapping.det_range");
        min_distance_squared = min_distance * min_distance;
        max_distance_squared = max_distance * max_distance;
        space_downsample = read_parameter<bool>(node, "space_downsample", true, "space_down_sample");
        space_downsample_leaf_size = static_cast<float>(read_parameter<double>(node, "space_downsample_leaf_size", 0.5, "filter_size_surf"));

        // IMU处理
        gravity = read_vector3_parameter(node, "gravity", Eigen::Vector3d(0.0, 0.0, -9.81), "mapping.gravity");
        check_satu = read_parameter<bool>(node, "check_satu", true);
        fix_gravity_direction = read_parameter<bool>(node, "fix_gravity_direction", true);
        satu_acc = read_parameter<double>(node, "satu_acc", 3.0, "mapping.satu_acc") * 0.99;
        satu_gyro = read_parameter<double>(node, "satu_gyro", 35.0, "mapping.satu_gyro") * 0.99;
        acc_norm = read_parameter<double>(node, "acc_norm", 1.0, "mapping.acc_norm");

        // 地图
        map_resolution = read_parameter<double>(node, "map_resolution", 0.5, "mapping.ivox_grid_resolution");
        init_map_size = static_cast<size_t>(read_parameter<int64_t>(node, "init_map_size", 10));

        // 雷达与IMU相对位姿
        extrinsic_est_en = read_parameter<bool>(node, "extrinsic_est_en", false, "mapping.extrinsic_est_en");
        extrinsic_T = read_vector3_parameter(node, "extrinsic_T", Eigen::Vector3d::Zero(), "mapping.extrinsic_T");
        extrinsic_R = read_matrix3_parameter(node, "extrinsic_R", Eigen::Matrix3d::Identity(), "mapping.extrinsic_R");
        multi_lidar_enabled = read_parameter<bool>(node, "multi_lidar.enable", false);
        multi_lidar_count = static_cast<int>(read_parameter<int64_t>(node, "multi_lidar.lidar_count", 1));
        if (multi_lidar_count < 1) {
            RCLCPP_WARN(node.get_logger(), "multi_lidar.lidar_count < 1, forcing it to 1");
            multi_lidar_count = 1;
        }
        lidar_T_wrt_IMU.clear();
        lidar_R_wrt_IMU.clear();
        lidar_T_wrt_IMU.reserve(static_cast<size_t>(multi_lidar_count));
        lidar_R_wrt_IMU.reserve(static_cast<size_t>(multi_lidar_count));
        for (int lidar_index = 0; lidar_index < multi_lidar_count; ++lidar_index) {
            const std::string prefix = "multi_lidar.lidar" + std::to_string(lidar_index);
            lidar_T_wrt_IMU.emplace_back(
                    read_vector3_parameter(node, prefix + ".extrinsic_T", extrinsic_T));
            lidar_R_wrt_IMU.emplace_back(
                    read_matrix3_parameter(node, prefix + ".extrinsic_R", extrinsic_R));
        }
        lidar_time_offsets = read_parameter<std::vector<double>>(
                node, "multi_lidar.time_offsets", std::vector<double>(static_cast<size_t>(multi_lidar_count), 0.0));
        if (lidar_time_offsets.size() < static_cast<size_t>(multi_lidar_count)) {
            lidar_time_offsets.resize(static_cast<size_t>(multi_lidar_count), 0.0);
        }
        if (multi_lidar_enabled && extrinsic_est_en) {
            RCLCPP_WARN(
                    node.get_logger(),
                    "multi_lidar.enable=true requires fixed per-lidar extrinsics. Forcing extrinsic_est_en=false");
            extrinsic_est_en = false;
        }

        // 滤波器参数
        laser_point_cov = read_parameter<double>(node, "laser_point_cov", 0.01, "mapping.lidar_meas_cov");
        imu_meas_acc_cov = read_parameter<double>(node, "imu_meas_acc_cov", 0.01, "mapping.imu_meas_acc_cov");
        imu_meas_omg_cov = read_parameter<double>(node, "imu_meas_omg_cov", 0.01, "mapping.imu_meas_omg_cov");
        velocity_cov = read_parameter<double>(node, "velocity_cov", 20.0, "mapping.vel_cov");
        acceleration_cov = read_parameter<double>(node, "acceleration_cov", 500.0, "mapping.acc_cov_output");
        omg_cov = read_parameter<double>(node, "omg_cov", 1000.0, "mapping.gyr_cov_output");
        ba_cov = read_parameter<double>(node, "ba_cov", 0.0001, "mapping.b_acc_cov");
        bg_cov = read_parameter<double>(node, "bg_cov", 0.0001, "mapping.b_gyr_cov");
        plane_threshold = read_parameter<double>(node, "plane_threshold", 0.1, "mapping.plane_thr");
        match_sqaured = read_parameter<double>(node, "match_sqaured", 81.0, "mapping.match_s");

        // 数据发布
        publish_odometry_without_downsample = read_parameter<bool>(
                node, "publish_odometry_without_downsample", false, "odometry.publish_odometry_without_downsample");
        publish_primary_lidar_pose = read_parameter<bool>(
                node, "publish_primary_lidar_pose", false, "odometry.publish_primary_lidar_pose");
    }

}// namespace small_point_lio
