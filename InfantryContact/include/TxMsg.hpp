#pragma once

#include <Content.hpp>
#include <functional>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <cmath>
#include <std_msgs/msg/bool.hpp>

#include "RxMsg.hpp"

#define RAD 57.2957795f
#define PI  3.141592653589793

class TxMsg
{
public:
    TxMsg() {
        memset(&tx_autoaim_navi_msg, 0, sizeof(TxAutoaimNaviMsg));
        memset(&tx_query_msg, 0, sizeof(TxQueryMsgType));
    }

    using midware_plain_cb_t = std::function<void(float*, float*)>;
    using midware_state_cb_t = std::function<void(float*, float*, const RxMsg&)>;
    using comm_port_cb_t     = std::function<void(uint8_t* buffer, size_t size, bool safe_write)>;

    TxAutoaimNaviMsg tx_autoaim_navi_msg = {};
    TxQueryMsgType   tx_query_msg        = {};

    // WARNING: you should ensure that the len is >= tx_content_' len
    void inline toBuffer(uint8_t* buffer, const size_t len) {
        std::memcpy(buffer, &tx_autoaim_navi_msg, len);
    }

    void autoaim_callback(
        TxAutoaimNaviMsg::autoAim_t msg, const RxMsg& rx_msg, rclcpp::Node& node, const std::function<void(uint8_t*, size_t, bool)>& comm_port_cb, const midware_plain_cb_t& midware_unit_convert_cb = [](float* pitch, float* yaw) {
                *pitch = *pitch * RAD;
                *yaw = *yaw * RAD; }, const midware_state_cb_t& midware_pid_cb = [](float* pitch, float* yaw, const RxMsg& rx) {
                (void)pitch;
                (void)yaw;
                (void)rx; }, const midware_state_cb_t& midware_filter_cb = [](float* pitch, float* yaw, const RxMsg& rx) {
                (void)pitch;
                (void)yaw;
                (void)rx; }, const midware_state_cb_t& midware_boundary_angle_cb = [](float* pitch, float* yaw, const RxMsg& rx) {
                (void)pitch;
                (void)yaw;
                (void)rx; }, bool verbose = true) {
        this->tx_autoaim_navi_msg.header = this->tx_autoaim_navi_msg.SOF;

        // convert the msg to angle
        // midware_unit_convert_cb(&msg.pitch, &msg.yaw);
        // (void)midware_pid_cb;
        // (void)midware_filter_cb;
        // midware_boundary_angle_cb(&pitch, &yaw, rx_msg);

        this->tx_autoaim_navi_msg.gimbalTargetImuAbsPitch = msg.pitch;
        this->tx_autoaim_navi_msg.gimbalTargetImuAbsYaw   = msg.yaw;

        // this->tx_autoaim_navi_msg.found = msg.target_distance ? 1 : 0;
        // NOTE: SHIT
        this->tx_autoaim_navi_msg.found = 1;
        this->tx_autoaim_navi_msg.shoot_or_not =
            msg.shoot_command == RxAutoAimMsg::autoaim_t::ALLOW_SHOOT ? 1 : 0;


        uint8_t tx_buffer[sizeof(TxAutoaimNaviMsg)] {};
        toBuffer(tx_buffer, sizeof(TxAutoaimNaviMsg));
        comm_port_cb(tx_buffer, sizeof(TxAutoaimNaviMsg), true);

        if (verbose) {
            std::ostringstream oss;
            oss << std::fixed << std::setprecision(2);
            oss << "[TxMsg] pitch: " << this->tx_autoaim_navi_msg.gimbalTargetImuAbsPitch
                << " yaw: " << this->tx_autoaim_navi_msg.gimbalTargetImuAbsYaw
                << " found: " << static_cast<int>(this->tx_autoaim_navi_msg.found)
                << " shoot: " << static_cast<int>(this->tx_autoaim_navi_msg.shoot_or_not)
                << " header: 0x" << std::hex << std::setw(2) << std::setfill('0')
                << static_cast<int>(this->tx_autoaim_navi_msg.header) << std::dec
                << std::setfill(' ') << " pitch:" << std::setw(7)
                << this->tx_autoaim_navi_msg.gimbalTargetImuAbsPitch << " yaw:" << std::setw(7)
                << this->tx_autoaim_navi_msg.gimbalTargetImuAbsYaw
                << " found:" << static_cast<int>(this->tx_autoaim_navi_msg.found)
                << " shoot:" << static_cast<int>(this->tx_autoaim_navi_msg.shoot_or_not);
            RCLCPP_INFO(node.get_logger(), "%s", oss.str().c_str());
        }
    }

  void hilly_mode_callback(const std_msgs::msg::Bool& msg, const std::function<void(uint8_t*, size_t, bool)>& comm_port_cb, rclcpp::Node& node) {
        this->tx_autoaim_navi_msg.header = 0x3A;
        this->tx_autoaim_navi_msg.hilly_mode = msg.data;
    
        // uint8_t tx_buffer[sizeof(TxAutoaimNaviMsg)] {};
        // toBuffer(tx_buffer, sizeof(TxAutoaimNaviMsg));
        //
        // comm_port_cb(tx_buffer, sizeof(TxAutoaimNaviMsg), true);
        if (this->tx_autoaim_navi_msg.hilly_mode)
            RCLCPP_WARN(node.get_logger(), "hilly_mode %s", this->tx_autoaim_navi_msg.hilly_mode? "YES" : "NO");
  }

    void chassis_cmd_vel_callback(const geometry_msgs::msg::Twist msg, rclcpp::Node& node, const std::function<void(uint8_t*, size_t, bool)>& comm_port_cb, bool verbose = true) {
        this->tx_autoaim_navi_msg.header = 0x3A;

        // update lower machine's angular
        // WARNING: navi 特供
        this->tx_autoaim_navi_msg.chassisTargetTwistLinear[0]  = msg.linear.y;
        this->tx_autoaim_navi_msg.chassisTargetTwistLinear[1]  = msg.linear.x;
        this->tx_autoaim_navi_msg.chassisTargetTwistLinear[2]  = msg.linear.z;
        this->tx_autoaim_navi_msg.chassisTargetTwistAngular[0] = msg.angular.x;
        this->tx_autoaim_navi_msg.chassisTargetTwistAngular[1] = msg.angular.y;
        this->tx_autoaim_navi_msg.chassisTargetTwistAngular[2] = msg.angular.z;

        uint8_t tx_buffer[sizeof(TxAutoaimNaviMsg)] {};
        toBuffer(tx_buffer, sizeof(TxAutoaimNaviMsg));
        comm_port_cb(tx_buffer, sizeof(TxAutoaimNaviMsg), true);

        if (verbose) {
            std::ostringstream oss;
            oss << std::fixed << std::setprecision(2) << "[TxMsg] linear(x,y,z)=(" << msg.linear.x
                << ", " << msg.linear.y << ", " << msg.linear.z << ")";
            RCLCPP_INFO(node.get_logger(), "%s", oss.str().c_str());
        }
    }

    void sendQuery(TxQueryMsgType        query_type,
                   const comm_port_cb_t& comm_port_cb,
                   bool                  verbose = false,
                   const rclcpp::Logger* logger  = nullptr) {
        tx_query_msg        = query_type;
        uint8_t tx_buffer[] = {static_cast<uint8_t>(tx_query_msg)};
        comm_port_cb(tx_buffer, sizeof(tx_buffer), true);

        if (verbose && logger != nullptr) {
            RCLCPP_INFO(*logger, "[TxMsg] query code=%u", static_cast<unsigned int>(tx_buffer[0]));
        }
    }
};
