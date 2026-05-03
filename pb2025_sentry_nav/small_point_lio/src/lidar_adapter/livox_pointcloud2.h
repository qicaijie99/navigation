/**
 * This file is part of Small Point-LIO, an advanced Point-LIO algorithm implementation.
 * Copyright (C) 2025  Yingjie Huang
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

#include "base_lidar.h"
#include <sensor_msgs/msg/point_cloud2.hpp>
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

    }// namespace detail

    class LivoxPointCloud2Adapter : public LidarAdapterBase {
    private:
        rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription;

    public:
        inline void setup_subscription(rclcpp::Node *node, const std::string &topic, std::function<void(const std::vector<common::Point> &)> callback) override {
            subscription = node->create_subscription<sensor_msgs::msg::PointCloud2>(
                    topic,
                    rclcpp::SensorDataQoS(),
                    [callback](const sensor_msgs::msg::PointCloud2 &msg) {
                        sensor_msgs::PointCloud2ConstIterator<float> out_x(msg, "x");
                        sensor_msgs::PointCloud2ConstIterator<float> out_y(msg, "y");
                        sensor_msgs::PointCloud2ConstIterator<float> out_z(msg, "z");
                        sensor_msgs::PointCloud2ConstIterator<uint8_t> out_tag(msg, "tag");
                        sensor_msgs::PointCloud2ConstIterator<double> out_timestamp(msg, "timestamp");
                        const int lidar_id_offset = detail::find_field_offset(msg, "lidar_id");
                        size_t size = msg.width * msg.height;
                        std::vector<common::Point> pointcloud;
                        pointcloud.reserve(size);
                        for (size_t i = 0; i < size; ++i) {
                            if ((*out_tag & 0b00111111) == 0b00000000) {
                                common::Point new_point;
                                new_point.position << *out_x, *out_y, *out_z;
                                new_point.timestamp = *out_timestamp * 1e-9;
                                new_point.lidar_id = detail::read_uint8_field(msg, i, lidar_id_offset);
                                pointcloud.push_back(new_point);
                            }
                            ++out_x;
                            ++out_y;
                            ++out_z;
                            ++out_tag;
                            ++out_timestamp;
                        }
                        callback(pointcloud);
                    });
        }
    };

}// namespace small_point_lio
