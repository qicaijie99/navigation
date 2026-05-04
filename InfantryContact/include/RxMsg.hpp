#pragma once

#include <Content.hpp>
#include <rclcpp/time.hpp>
#include <Checksum.h>
class RxMsg
{
public:
    RxMsg() {
        memset(&rx_autoaim_msg_, 0, sizeof(RxAutoAimMsg));
        memset(&rx_self_info_msg_, 0, sizeof(RxSelfInfoMsg));
        memset(&rx_enemy_hp_msg_, 0, sizeof(RxEnemyHpMsg));
        memset(&rx_game_info_msg_, 0, sizeof(RxGameInfoMsg));
        memset(&rx_buffs_msg_, 0, sizeof(RxBuffsMsg));
        memset(&rx_pos_msg_, 0, sizeof(RxPosMsg));
    }

    RxAutoAimMsg  rx_autoaim_msg_   = {};
    RxSelfInfoMsg rx_self_info_msg_ = {};
    RxEnemyHpMsg  rx_enemy_hp_msg_  = {};
    RxGameInfoMsg rx_game_info_msg_ = {};
    RxBuffsMsg    rx_buffs_msg_     = {};
    RxPosMsg      rx_pos_msg_       = {};

    uint8_t rx_buffer_[sizeof(RxAutoAimMsg)] {};

    enum class FrameType : uint8_t
    {
        UNKNOWN = 0,
        AUTOAIM = 1,
        QUERY   = 2,
    };

    FrameType      last_frame_type_ = FrameType::UNKNOWN;
    TxQueryMsgType last_query_code_ = TxQueryMsgType::SELF_INFO;

    void loadAutoaimMsgAndPublish(RxAutoAimMsg::autoaim_pub_t&    _autoaim_pub_,        //
                                  RxAutoAimMsg::quat_pub_t&       _small_yaw_quat_pub_, //
                                  RxAutoAimMsg::quat_pub_t&       _big_yaw_quat_pub_,   //
                                  RxAutoAimMsg::quat_joint_pub_t& _joint_state_pub_,    //
                                  rclcpp::Node&                   node,                 //
                                  bool                            verbose = true

    ) const {
        // should use CRC to verify the msg integrity first

        RxAutoAimMsg::autoaim_t autoaim_msg;
        autoaim_msg.pitch = rx_autoaim_msg_.imuPitchAbsAngle;
        autoaim_msg.yaw   = rx_autoaim_msg_.imuYawAbsAngle;
        if (_autoaim_pub_) {
            _autoaim_pub_->publish(autoaim_msg);
        }

        sensor_msgs::msg::JointState joint_state_msg;
        joint_state_msg.header.stamp    = node.now();
        joint_state_msg.header.frame_id = "";
        joint_state_msg.name.push_back("yaw_joint");
        joint_state_msg.name.push_back("pitch_joint");
        joint_state_msg.position.push_back(rx_autoaim_msg_.imuYawAbsAngle);
        joint_state_msg.position.push_back(-rx_autoaim_msg_.imuPitchAbsAngle);
        if (_joint_state_pub_) {
            _joint_state_pub_->publish(joint_state_msg);
        }

        geometry_msgs::msg::QuaternionStamped small_yaw_quat_msg;
        small_yaw_quat_msg.header.frame_id = "small_yaw_quaternion";
        small_yaw_quat_msg.header.stamp    = node.now();
        small_yaw_quat_msg.quaternion.x    = rx_autoaim_msg_.upperGimbalImuQuad[0];
        small_yaw_quat_msg.quaternion.y    = rx_autoaim_msg_.upperGimbalImuQuad[1];
        small_yaw_quat_msg.quaternion.z    = rx_autoaim_msg_.upperGimbalImuQuad[2];
        small_yaw_quat_msg.quaternion.w    = rx_autoaim_msg_.upperGimbalImuQuad[3];
        if (_small_yaw_quat_pub_) {
            _small_yaw_quat_pub_->publish(small_yaw_quat_msg);
        }

        geometry_msgs::msg::QuaternionStamped big_yaw_quat_msg;
        big_yaw_quat_msg.header.frame_id = "big_yaw_quaternion";
        big_yaw_quat_msg.header.stamp    = node.now();
        big_yaw_quat_msg.quaternion.x    = rx_autoaim_msg_.lowerYawConvertedQuat[0];
        big_yaw_quat_msg.quaternion.y    = rx_autoaim_msg_.lowerYawConvertedQuat[1];
        big_yaw_quat_msg.quaternion.z    = rx_autoaim_msg_.lowerYawConvertedQuat[2];
        big_yaw_quat_msg.quaternion.w    = rx_autoaim_msg_.lowerYawConvertedQuat[3];
        if (_big_yaw_quat_pub_) {
            _big_yaw_quat_pub_->publish(big_yaw_quat_msg);
        }

        if (verbose) {
            RCLCPP_INFO(node.get_logger(),
                        "======================== RX MSG ==========================");
            RCLCPP_INFO(node.get_logger(), "autoaim pub:    yaw: %.4f, pitch: %.4f", autoaim_msg.yaw, autoaim_msg.pitch);
            RCLCPP_INFO(node.get_logger(), "jointState pub: yaw: %.4f, pitch: %.4f", joint_state_msg.position[0], joint_state_msg.position[1]);
            RCLCPP_INFO(node.get_logger(), "quat pub:       x: %.4f, y: %.4f, z: %.4f, w: %.4f", small_yaw_quat_msg.quaternion.x, small_yaw_quat_msg.quaternion.y, small_yaw_quat_msg.quaternion.z, small_yaw_quat_msg.quaternion.w);
            RCLCPP_INFO(node.get_logger(), "quat pub:       x: %.4f, y: %.4f, z: %.4f, w: %.4f", big_yaw_quat_msg.quaternion.x, big_yaw_quat_msg.quaternion.y, big_yaw_quat_msg.quaternion.z, big_yaw_quat_msg.quaternion.w);
            RCLCPP_INFO(node.get_logger(),
                        "======================== RX END ==========================");
        }
    }

    void loadSelfInfoMsgAndPub(RxSelfInfoMsg::robotStatusPub_t& _robot_status_info_pub_,
                               rclcpp::Node&                    node,
                               bool                             verbose = true) const {
        RxSelfInfoMsg::robotStatus_t msg;
        msg.robot_id                      = rx_self_info_msg_.robot_id;
        msg.robot_level                   = rx_self_info_msg_.robot_level;
        msg.remain_hp                     = rx_self_info_msg_.current_HP;
        msg.max_hp                        = rx_self_info_msg_.maximum_HP;
        msg.shooter_17mm_id1_cooling_rate = rx_self_info_msg_.available_heat; // WARNING: this is the reamain heat value!!!!
        // WARNING: rx_self_info_msg_.shooter_barrel_cooling_value unuesed
        msg.chassis_power_output = rx_self_info_msg_.chassis_power_output;
        msg.chassis_power_limit  = rx_self_info_msg_.chassis_power_limit;
        _robot_status_info_pub_->publish(msg);

        if (verbose) {
            RCLCPP_INFO(
                node.get_logger(),
                "[SelfInfo]\n"
                "  id=%u level=%u\n"
                "  hp=%u/%u\n"
                "  heat_limit=%u\n"
                "  power=%u/%u",
                static_cast<unsigned int>(msg.robot_id),
                static_cast<unsigned int>(msg.robot_level),
                static_cast<unsigned int>(msg.remain_hp),
                static_cast<unsigned int>(msg.max_hp),
                static_cast<unsigned int>(msg.shooter_17mm_id1_cooling_limit),
                static_cast<unsigned int>(msg.chassis_power_output),
                static_cast<unsigned int>(msg.chassis_power_limit));
        }
    };

    void loadRxEnemyHpMsgAndPub(RxEnemyHpMsg::enemy_hp_pub_t& _enemy_hp_pub_,
                                rclcpp::Node&                 node,
                                bool                          verbose = true) const {
        RxEnemyHpMsg::enemy_hp_t msg;

        const uint8_t self_id       = rx_self_info_msg_.robot_id;
        const bool    enemy_is_red  = self_id >= 100;
        const bool    enemy_is_blue = (self_id > 0 && self_id < 100);

        if (enemy_is_red) {
            msg.red_1_hero_hp     = rx_enemy_hp_msg_.enemy_1_robot_HP;
            msg.red_2_engineer_hp = rx_enemy_hp_msg_.enemy_2_robot_HP;
            msg.red_3_infantry_hp = rx_enemy_hp_msg_.enemy_3_robot_HP;
            msg.red_4_infantry_hp = rx_enemy_hp_msg_.enemy_4_robot_HP;
            msg.red_5_infantry_hp = rx_enemy_hp_msg_.enemy_5_robot_HP;
            msg.red_7_sentry_hp   = rx_enemy_hp_msg_.enemy_7_robot_HP;
            msg.red_outpost_hp    = rx_enemy_hp_msg_.enemy_outpost_HP;
            msg.red_base_hp       = rx_enemy_hp_msg_.enemy_base_HP;
        }
        else if (enemy_is_blue) {
            msg.blue_1_hero_hp     = rx_enemy_hp_msg_.enemy_1_robot_HP;
            msg.blue_2_engineer_hp = rx_enemy_hp_msg_.enemy_2_robot_HP;
            msg.blue_3_infantry_hp = rx_enemy_hp_msg_.enemy_3_robot_HP;
            msg.blue_4_infantry_hp = rx_enemy_hp_msg_.enemy_4_robot_HP;
            msg.blue_5_infantry_hp = rx_enemy_hp_msg_.enemy_5_robot_HP;
            msg.blue_7_sentry_hp   = rx_enemy_hp_msg_.enemy_7_robot_HP;
            msg.blue_outpost_hp    = rx_enemy_hp_msg_.enemy_outpost_HP;
            msg.blue_base_hp       = rx_enemy_hp_msg_.enemy_base_HP;
        }
        else {
            if (verbose) {
                RCLCPP_WARN(node.get_logger(),
                            "[EnemyHP] unknown self robot_id=%u, treating enemy as red",
                            static_cast<unsigned int>(self_id));
            }
            msg.red_1_hero_hp     = rx_enemy_hp_msg_.enemy_1_robot_HP;
            msg.red_2_engineer_hp = rx_enemy_hp_msg_.enemy_2_robot_HP;
            msg.red_3_infantry_hp = rx_enemy_hp_msg_.enemy_3_robot_HP;
            msg.red_4_infantry_hp = rx_enemy_hp_msg_.enemy_4_robot_HP;
            msg.red_5_infantry_hp = rx_enemy_hp_msg_.enemy_5_robot_HP;
            msg.red_7_sentry_hp   = rx_enemy_hp_msg_.enemy_7_robot_HP;
            msg.red_outpost_hp    = rx_enemy_hp_msg_.enemy_outpost_HP;
            msg.red_base_hp       = rx_enemy_hp_msg_.enemy_base_HP;
        }

        _enemy_hp_pub_->publish(msg);

        if (verbose) {
            const char* enemy_side = enemy_is_red ? "red" : (enemy_is_blue ? "blue" : "unknown");
            RCLCPP_INFO(
                node.get_logger(),
                "[EnemyHP]\n"
                "  side=%s\n"
                "  1=%u 2=%u 3=%u 4=%u 5=%u 7=%u\n"
                "  outpost=%u base=%u",
                enemy_side,
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_1_robot_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_2_robot_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_3_robot_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_4_robot_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_5_robot_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_7_robot_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_outpost_HP),
                static_cast<unsigned int>(rx_enemy_hp_msg_.enemy_base_HP));
        }
    }

    void loadRxGameInfoMsgAndPub(RxGameInfoMsg::game_status_pub_t&  _game_status_pub_,
                                 RxGameInfoMsg::field_events_pub_t& _field_events_pub_,
                                 RxGameInfoMsg::game_result_pub_t&  _game_result_pub_,
                                 rclcpp::Node&                      node,
                                 bool                               verbose = true) const {
        RxGameInfoMsg::game_status_t status_msg;
        status_msg.game_type         = rx_game_info_msg_.game_type;
        status_msg.game_progress     = rx_game_info_msg_.game_progress;
        status_msg.stage_remain_time = rx_game_info_msg_.state_remain_time;
        status_msg.sync_time_stamp   = rx_game_info_msg_.sync_time_stamp;
        _game_status_pub_->publish(status_msg);

        if (_field_events_pub_) {
            RxGameInfoMsg::field_events_t field_msg;
            const uint32_t                fe  = rx_game_info_msg_.field_events;
            const auto                    bit = [fe](uint32_t n) -> bool { return (fe >> n) & 0x1u; };
            // TODO: verify bit positions against the referee protocol spec.
            field_msg.supplier_1_occupation                  = bit(0);
            field_msg.supplier_2_occupation                  = bit(1);
            field_msg.supplier_3_occupation                  = bit(2);
            field_msg.power_rune_activation_point_occupation = bit(3);
            field_msg.small_power_rune_activation_status     = bit(4);
            field_msg.big_power_rune_activation_status       = bit(5);
            field_msg.r2b2_ground_occupation                 = bit(6);
            field_msg.r3b3_ground_occupation                 = bit(7);
            field_msg.r4b4_ground_occupation                 = bit(8);
            field_msg.base_has_shield                        = bit(9);
            field_msg.outpost_alive                          = bit(10);
            _field_events_pub_->publish(field_msg);
        }

        if (_game_result_pub_) {
            RxGameInfoMsg::game_result_t result_msg;
            result_msg.winner = rx_game_info_msg_.winner;
            _game_result_pub_->publish(result_msg);
        }

        if (verbose) {
            RCLCPP_INFO(
                node.get_logger(),
                "[GameInfo]\n"
                "  type=%u progress=%u remain=%u\n"
                "  stamp=%llu winner=%u\n"
                "  field_events=0x%08x",
                static_cast<unsigned int>(rx_game_info_msg_.game_type),
                static_cast<unsigned int>(rx_game_info_msg_.game_progress),
                static_cast<unsigned int>(rx_game_info_msg_.state_remain_time),
                static_cast<unsigned long long>(rx_game_info_msg_.sync_time_stamp),
                static_cast<unsigned int>(rx_game_info_msg_.winner),
                static_cast<unsigned int>(rx_game_info_msg_.field_events));
        }
    }

    void loadRxBuffsMsgAndPub(RxBuffsMsg::robot_buff_pub_t& _buff_pub_, rclcpp::Node& node, bool verbose = true) const {
        RxBuffsMsg::robot_buff_t msg;
        msg.robot_replenishing_blood     = rx_buffs_msg_.recovery_buff != 0;
        msg.shooter_cooling_acceleration = rx_buffs_msg_.cooling_buff != 0;
        msg.robot_defense_bonus          = rx_buffs_msg_.defence_buff != 0;
        msg.robot_attack_bonus           = rx_buffs_msg_.attack_buff != 0;
        _buff_pub_->publish(msg);

        if (verbose) {
            RCLCPP_INFO(
                node.get_logger(),
                "[Buffs]\n"
                "  recovery=%u cooling=%u defence=%u\n"
                "  vulnerability=%u attack=%u",
                static_cast<unsigned int>(rx_buffs_msg_.recovery_buff),
                static_cast<unsigned int>(rx_buffs_msg_.cooling_buff),
                static_cast<unsigned int>(rx_buffs_msg_.defence_buff),
                static_cast<unsigned int>(rx_buffs_msg_.vulnerability_buff),
                static_cast<unsigned int>(rx_buffs_msg_.attack_buff));
        }
    }

    void loadRxPosMsgAndPub(RxPosMsg::robot_pos_pub_t& _pos_pub_, rclcpp::Node& node, bool verbose = true) const {
        RxPosMsg::robot_pos_t msg;
        msg.x   = rx_pos_msg_.x;
        msg.y   = rx_pos_msg_.y;
        msg.z   = 0.0f;
        msg.yaw = rx_pos_msg_.angle;
        _pos_pub_->publish(msg);

        if (verbose) {
            RCLCPP_INFO(node.get_logger(), "[Pos]\n  x=%.2f y=%.2f yaw=%.2f", rx_pos_msg_.x, rx_pos_msg_.y, rx_pos_msg_.angle);
        }
    }

    bool isInvalid() const {
        return this->rx_autoaim_msg_.imuPitchAbsAngle == 0.f &&
               this->rx_autoaim_msg_.imuYawAbsAngle == 0.f;
    }
};
