/**
 * This file is part of Small Point-LIO, an advanced Point-LIO algorithm implementation.
 * Copyright (C) 2025  Yingjie Huang
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

#include "base_lidar.h"
#include <cmath>
#include <cstdint>
#include <cstring>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/point_field.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>

namespace small_point_lio {

    namespace detail {

        inline int find_field_offset(const sensor_msgs::msg::PointCloud2 &msg, const std::string &name) {
            for (const auto &field: msg.fields) {
                if (field.name == name) {
                    return static_cast<int>(field.offset);
                }
            }
            return -1;
        }

        inline const sensor_msgs::msg::PointField *find_field(
                const sensor_msgs::msg::PointCloud2 &msg,
                const std::string &name) {
            for (const auto &field: msg.fields) {
                if (field.name == name) {
                    return &field;
                }
            }
            return nullptr;
        }

        template<typename T>
        inline T read_unchecked(const sensor_msgs::msg::PointCloud2 &msg, size_t byte_index) {
            T value{};
            std::memcpy(&value, &msg.data[byte_index], sizeof(T));
            return value;
        }

        inline uint8_t read_uint8_field(const sensor_msgs::msg::PointCloud2 &msg, size_t index, int offset, uint8_t default_value = 0) {
            if (offset < 0) {
                return default_value;
            }
            const size_t byte_index = index * msg.point_step + static_cast<size_t>(offset);
            if (byte_index >= msg.data.size()) {
                return default_value;
            }
            return msg.data[byte_index];
        }

        inline double read_numeric_field(
                const sensor_msgs::msg::PointCloud2 &msg,
                size_t index,
                const sensor_msgs::msg::PointField *field,
                double default_value) {
            if (field == nullptr) {
                return default_value;
            }
            const size_t byte_index = index * msg.point_step + static_cast<size_t>(field->offset);
            if (byte_index >= msg.data.size()) {
                return default_value;
            }

            switch (field->datatype) {
                case sensor_msgs::msg::PointField::INT8:
                    return static_cast<double>(read_unchecked<int8_t>(msg, byte_index));
                case sensor_msgs::msg::PointField::UINT8:
                    return static_cast<double>(read_unchecked<uint8_t>(msg, byte_index));
                case sensor_msgs::msg::PointField::INT16:
                    return static_cast<double>(read_unchecked<int16_t>(msg, byte_index));
                case sensor_msgs::msg::PointField::UINT16:
                    return static_cast<double>(read_unchecked<uint16_t>(msg, byte_index));
                case sensor_msgs::msg::PointField::INT32:
                    return static_cast<double>(read_unchecked<int32_t>(msg, byte_index));
                case sensor_msgs::msg::PointField::UINT32:
                    return static_cast<double>(read_unchecked<uint32_t>(msg, byte_index));
                case sensor_msgs::msg::PointField::FLOAT32:
                    return static_cast<double>(read_unchecked<float>(msg, byte_index));
                case sensor_msgs::msg::PointField::FLOAT64:
                    return read_unchecked<double>(msg, byte_index);
                default:
                    return default_value;
            }
        }

        inline bool is_valid_livox_tag(uint8_t tag) {
            const uint8_t return_mode = tag & 0x30;
            return return_mode == 0x00 || return_mode == 0x10;
        }

        inline double normalize_livox_timestamp(double raw_timestamp, double msg_time) {
            if (!std::isfinite(raw_timestamp)) {
                return msg_time;
            }

            // Some Livox PointCloud2 streams expose absolute time in seconds.
            if (std::abs(raw_timestamp - msg_time) < 10.0) {
                return raw_timestamp;
            }

            // livox_ros_driver2 and dual_lidar_fuser normally expose nanoseconds.
            const double ns_as_seconds = raw_timestamp * 1.0e-9;
            if (std::abs(ns_as_seconds - msg_time) < 10.0 || raw_timestamp > 1.0e12) {
                return ns_as_seconds;
            }

            // Otherwise treat it as a per-point offset. MID360 PointCloud2 commonly
            // uses nanosecond offsets; very small floating values are seconds offsets.
            if (std::abs(raw_timestamp) > 1.0e6) {
                return msg_time + raw_timestamp * 1.0e-9;
            }
            return msg_time + raw_timestamp;
        }

    }// namespace detail

    class LivoxPointCloud2Adapter : public LidarAdapterBase {
    private:
        rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription;

    public:
        inline void setup_subscription(rclcpp::Node *node, const std::string &topic, std::function<void(const std::vector<common::Point> &)> callback) override {
            const auto logger = node->get_logger();
            const auto clock = node->get_clock();
            subscription = node->create_subscription<sensor_msgs::msg::PointCloud2>(
                    topic,
                    rclcpp::SensorDataQoS(),
                    [callback, logger, clock](const sensor_msgs::msg::PointCloud2 &msg) {
                        sensor_msgs::PointCloud2ConstIterator<float> out_x(msg, "x");
                        sensor_msgs::PointCloud2ConstIterator<float> out_y(msg, "y");
                        sensor_msgs::PointCloud2ConstIterator<float> out_z(msg, "z");
                        const int tag_offset = detail::find_field_offset(msg, "tag");
                        const auto *timestamp_field = detail::find_field(msg, "timestamp");
                        const int lidar_id_offset = detail::find_field_offset(msg, "lidar_id");
                        if (timestamp_field == nullptr) {
                            RCLCPP_WARN_THROTTLE(
                                    logger,
                                    *clock,
                                    2000,
                                    "PointCloud2 input has no timestamp field; using header.stamp for every point.");
                        }
                        if (lidar_id_offset < 0) {
                            RCLCPP_WARN_THROTTLE(
                                    logger,
                                    *clock,
                                    2000,
                                    "PointCloud2 input has no lidar_id field; assuming lidar_id=0 for all points. "
                                    "Dual-lidar input must be muxed by dual_lidar_fuser first.");
                        }
                        const double msg_time = rclcpp::Time(msg.header.stamp).seconds();
                        size_t size = msg.width * msg.height;
                        std::vector<common::Point> pointcloud;
                        pointcloud.reserve(size);
                        for (size_t i = 0; i < size; ++i) {
                            const uint8_t tag = detail::read_uint8_field(msg, i, tag_offset);
                            if (detail::is_valid_livox_tag(tag)) {
                                common::Point new_point;
                                new_point.position << *out_x, *out_y, *out_z;
                                const double raw_timestamp =
                                        detail::read_numeric_field(msg, i, timestamp_field, msg_time);
                                new_point.timestamp =
                                        detail::normalize_livox_timestamp(raw_timestamp, msg_time);
                                new_point.lidar_id = detail::read_uint8_field(msg, i, lidar_id_offset);
                                pointcloud.push_back(new_point);
                            }
                            ++out_x;
                            ++out_y;
                            ++out_z;
                        }
                        callback(pointcloud);
                    });
        }
    };

}// namespace small_point_lio
