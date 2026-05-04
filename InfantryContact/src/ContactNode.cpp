#include <Checksum.h>
#include <CommPort.h>
#include <filter.h>
#include <pid.h>

#include <RxMsg.hpp>
#include <TxMsg.hpp>
#include <chrono>
#include <cmath> // M_PI
#include <functional>
#include <gary_msgs/msg/auto_aim.hpp>
#include <gary_msgs/msg/game_result.hpp>
#include <gary_msgs/msg/robot_buff.hpp>
#include <gary_msgs/msg/robot_hp.hpp>
#include <gary_msgs/msg/robot_position.hpp>
#include <gary_msgs/msg/robot_status.hpp>
#include <gary_msgs/msg/shoot_data.hpp>
#include <gary_msgs/msg/shoot_data.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <params.hpp>
#include <QueryScheduler.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/bool.hpp>
#include <string>
#include <tf2_msgs/msg/tf_message.hpp>

#define RAD 57.2957795f
#define PI  3.141592653589793

using namespace std::chrono_literals;

class ContactNode : public rclcpp::Node
{
public:
    ContactNode(int argc, char** argv)
        : Node("contact"), m_param(*this), m_pid_yaw_cfg(m_param.fillPidYawConfig()), m_pid_pitch_cfg(m_param.fillPidPitchConfig()), m_low_p_filter_yaw_config(m_param.filter.yaw_cutoff), m_commport(*this, m_param.port.port_name, m_param.port.baudrate), m_query_scheduler(*this, m_commport) {
        (void)argc;
        (void)argv;

        // ======================= the tx midware ========================
        cb_comm_port = [this](uint8_t* buffer, size_t size, bool safe_write) {
            m_commport.Write(buffer, size, safe_write);
        };

        cb_midware_unit_convert = [](float* pitch, float* yaw) {
            (void)pitch;
            (void)yaw;
            // *pitch = *pitch * RAD;
            // *yaw   = *yaw * RAD;
        };

        // midwares for autoaim
        cb_midware_pid = [this](float* pitch, float* yaw, const RxMsg& rx_state) {
            (void)pitch;
            (void)yaw;
            (void)rx_state;
            // const float yaw_command =
            //     pid_yaw.compute(pid_yaw.target_angle, rx_state.rx_content_.yaw) + rx_state.rx_content_.yaw;
            // const float pitch_command =
            //     pid_pitch.compute(pid_pitch.target_angle, rx_state.rx_content_.pitch) + rx_state.rx_content_.pitch;
            // *yaw   = yaw_command;
            // *pitch = pitch_command;
        };

        cb_midware_filter = [this](float* pitch, float* yaw, const RxMsg& rx_state) {
            (void)pitch;
            if (m_low_p_filter_yaw_config.get_initial() == 0.0f) {
                m_low_p_filter_yaw_config.set_initial(rx_state.rx_autoaim_msg_.imuYawAbsAngle);
            }
            *yaw = m_low_p_filter_yaw_config.update(*yaw);
        };

        cb_midware_boundary_ = [](float* pitch, float* yaw, const RxMsg&) {
            (void)pitch;
            (void)yaw;
            // *yaw   = (*yaw > 180.0f) ? (*yaw - 360.0f) : (*yaw <= -180.0f ? *yaw + 360.0f : *yaw);
            // *pitch = std::clamp(*pitch, -15.0f, 25.0f);
        };

        //

        // ========================= subscriber =============================
        _sub_autoaim_ = this->create_subscription<gary_msgs::msg::AutoAIM>(
            "/autoaim/target1", rclcpp::SensorDataQoS(), [this](const gary_msgs::msg::AutoAIM::SharedPtr msg) {
                auto&      tx_msg = m_commport.tx_msg();
                const auto rx_msg = m_commport.snapshotRxMsg();
                tx_msg.autoaim_callback(*msg, rx_msg, *this, cb_comm_port, cb_midware_unit_convert, cb_midware_pid, cb_midware_filter, cb_midware_boundary_, m_param.tx.send_cmd_verbose);
            });

        _sub_chasssis_cmd_vel_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "/cmd_vel", 10, [this](const geometry_msgs::msg::Twist::SharedPtr msg) {
                auto& tx_msg = m_commport.tx_msg();
                tx_msg.chassis_cmd_vel_callback(*msg, *this, cb_comm_port, m_param.tx.send_cmd_verbose);
            });

        _sub_use_hilly_mode_ = this->create_subscription<std_msgs::msg::Bool>(
            "/use_hilly_pose", 1, [this](const std_msgs::msg::Bool::SharedPtr msg) {
                auto& tx_msg = m_commport.tx_msg();
                tx_msg.hilly_mode_callback(*msg, cb_comm_port, *this);
            });

        _pub_autoaim_              = this->create_publisher<gary_msgs::msg::AutoAIM>("/autoaim/status", 10);
        _pub_small_yaw_quaternion_ = this->create_publisher<geometry_msgs::msg::QuaternionStamped>("/small_yaw_quaternion", 10);
        _pub_big_yaw_quaternion_   = this->create_publisher<geometry_msgs::msg::QuaternionStamped>("/big_yaw_quaternion", 10);
        _pub_ins_                  = this->create_publisher<tf2_msgs::msg::TFMessage>("/tf", 10);
        _pub_joint_state_          = this->create_publisher<sensor_msgs::msg::JointState>("/joint_states", 10);
        // navi / decision making
        _pub_robot_status_ = this->create_publisher<gary_msgs::msg::RobotStatus>("/referee/robot_status", 10);
        _pub_robot_hp_     = this->create_publisher<gary_msgs::msg::RobotHP>("/referee/robot_hp", 10);
        _pub_game_status_  = this->create_publisher<gary_msgs::msg::GameStatus>("/referee/game_status", 10);
        _pub_game_result_  = this->create_publisher<gary_msgs::msg::GameResult>("/referee/game_result", 10);
        _pub_field_events_ = this->create_publisher<gary_msgs::msg::FieldEvents>("/referee/field_events", 10);
        _pub_robot_buff_   = this->create_publisher<gary_msgs::msg::RobotBuff>("/referee/robot_buff", 10);
        _pub_robot_pos_    = this->create_publisher<gary_msgs::msg::RobotPosition>("/referee/robot_position", 10);

        m_query_scheduler.set_publishers(
            _pub_robot_status_,
            _pub_robot_hp_,
            _pub_game_status_,
            _pub_field_events_,
            _pub_game_result_,
            _pub_robot_buff_,
            _pub_robot_pos_);
        m_query_scheduler.set_enabled(m_param.tx.query_scheduler_enabled);
        m_query_scheduler.set_rx_verbose(m_param.rx.gimbal_status_verbose, m_param.rx.response_verbose);
        m_query_scheduler.set_autoaim_publishers(_pub_autoaim_, _pub_small_yaw_quaternion_, _pub_big_yaw_quaternion_, _pub_joint_state_);
        m_commport.setTxVerbose(m_param.tx.query_send_verbose);
        m_query_scheduler.start();
        m_commport.Start();
    }

    ~ContactNode() {
        // shutdown all the resource first, or the CommPort
        // may crash
        m_query_scheduler.stop();
        m_commport.Stop();
    }

private:
    Params         m_param;
    PIDController  m_pid_yaw_cfg;
    PIDController  m_pid_pitch_cfg;
    LowPassFilter  m_low_p_filter_yaw_config;
    CommPort       m_commport;
    QueryScheduler m_query_scheduler;

    // autoaim subscriber
    rclcpp::Subscription<gary_msgs::msg::AutoAIM>::SharedPtr   _sub_autoaim_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr _sub_chasssis_cmd_vel_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr       _sub_use_hilly_mode_;

    // Autoaim publishers
    rclcpp::Publisher<gary_msgs::msg::AutoAIM>::SharedPtr               _pub_autoaim_;
    rclcpp::Publisher<geometry_msgs::msg::QuaternionStamped>::SharedPtr _pub_small_yaw_quaternion_;
    rclcpp::Publisher<geometry_msgs::msg::QuaternionStamped>::SharedPtr _pub_big_yaw_quaternion_;
    rclcpp::Publisher<tf2_msgs::msg::TFMessage>::SharedPtr              _pub_ins_;
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr          _pub_joint_state_;

    // Navi Publisher (almost for decision making)
    rclcpp::Publisher<gary_msgs::msg::RobotStatus>::SharedPtr   _pub_robot_status_;
    rclcpp::Publisher<gary_msgs::msg::RobotHP>::SharedPtr       _pub_robot_hp_;
    rclcpp::Publisher<gary_msgs::msg::GameStatus>::SharedPtr    _pub_game_status_;
    rclcpp::Publisher<gary_msgs::msg::GameResult>::SharedPtr    _pub_game_result_;
    rclcpp::Publisher<gary_msgs::msg::FieldEvents>::SharedPtr   _pub_field_events_;
    rclcpp::Publisher<gary_msgs::msg::RobotBuff>::SharedPtr     _pub_robot_buff_;
    rclcpp::Publisher<gary_msgs::msg::RobotPosition>::SharedPtr _pub_robot_pos_;
    // rclcpp::Publisher<>::SharedPtr;

    TxMsg::comm_port_cb_t     cb_comm_port;
    TxMsg::midware_plain_cb_t cb_midware_unit_convert;
    TxMsg::midware_state_cb_t cb_midware_pid;
    TxMsg::midware_state_cb_t cb_midware_filter;
    TxMsg::midware_state_cb_t cb_midware_boundary_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ContactNode>(argc, argv);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
