#pragma once

#include <unistd.h>

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <type_traits>
#include <gary_msgs/msg/robot_status.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/rclcpp.hpp>
// the ros msg lot
#include <gary_msgs/msg/auto_aim.hpp>
#include <gary_msgs/msg/shoot_data.hpp>
#include <gary_msgs/msg/field_events.hpp>
#include <gary_msgs/msg/game_result.hpp>
#include <gary_msgs/msg/game_status.hpp>
#include <gary_msgs/msg/robot_buff.hpp>
#include <gary_msgs/msg/robot_hp.hpp>
#include <gary_msgs/msg/robot_position.hpp>
#include <gary_msgs/msg/robot_status.hpp>
#include <gary_msgs/msg/shoot_data.hpp>
#include <geometry_msgs/msg/quaternion_stamped.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/int32.hpp>
#include <tf2_msgs/msg/tf_message.hpp>

struct __attribute__((packed)) RxAutoAimMsg
{
    using header_t                  = int;
    static constexpr uint8_t SOF    = 0x3A;
    uint8_t                  header = SOF; // 0x3A for Sentry

    // ====================================
    using autoaim_t     = gary_msgs::msg::AutoAIM;
    using autoaim_pub_t = rclcpp::Publisher<gary_msgs::msg::AutoAIM>::SharedPtr;
    float imuRollAbsAngle;
    float imuPitchAbsAngle;
    float imuYawAbsAngle;
    // 13

    // ====================================
    using quat_pub_t       = rclcpp::Publisher<geometry_msgs::msg::QuaternionStamped>::SharedPtr;
    using jointAngle_t     = sensor_msgs::msg::JointState;
    using quat_joint_pub_t = rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr;
    float upperGimbalImuQuad[4];
    float lowerYawConvertedQuat[4];
    float bulletSpeed;
    // 33
    uint8_t checksum;

    bool operator==(const RxAutoAimMsg& other) const {
        return std::memcmp(this, &other, sizeof(RxAutoAimMsg)) == 0;
    }
};

struct TxAutoaimNaviMsg
{
    using autoAim_t     = gary_msgs::msg::AutoAIM;
    using autoaim_sub_t = rclcpp::Subscription<gary_msgs::msg::AutoAIM>::SharedPtr;

    // ====================================
    static constexpr uint8_t SOF    = 0x3A;
    uint8_t                  header = SOF; // 0x3A for InfantryDL
    // ====================================
    using jointAngle_t = sensor_msgs::msg::JointState;
    float gimbalTargetImuAbsPitch;
    float gimbalTargetImuAbsYaw;
    using chasisTwist_t = geometry_msgs::msg::Twist;
    float chassisTargetTwistLinear[3];
    float chassisTargetTwistAngular[3];
    uint8_t hilly_mode = 0;
    uint8_t found = 1;
    uint8_t shoot_or_not;

    bool operator==(TxAutoaimNaviMsg const& other) {
        return std::memcmp(this, &other, sizeof(TxAutoaimNaviMsg)) == 0;
    }
} __attribute__((packed));

enum class QueryType : uint8_t
{
    SELF_INFO = 1,
    ENEMY_HP  = 2,
    GAME_INFO = 3,
    BUFFS     = 4,
    POS       = 5,
};

// for better reading only
using TxQueryMsgType    = QueryType;
using RxQueryRespHeader = QueryType;

/**
 * @class SelfInfoMsg
 * @brief 裁判系统提供的机器人自身信息
 *
 */
struct __attribute__((packed)) RxSelfInfoMsg
{
    static constexpr uint8_t SOF = static_cast<uint8_t>(QueryType::SELF_INFO);
    using robotStatus_t          = gary_msgs::msg::RobotStatus;
    using robotStatusPub_t       = rclcpp::Publisher<gary_msgs::msg::RobotStatus>::SharedPtr;

    uint8_t header = SOF;

    uint8_t  robot_id;
    uint8_t  robot_level;
    uint16_t current_HP;
    uint16_t maximum_HP;
    uint16_t available_heat;
    uint16_t chassis_power_output;
    uint16_t chassis_power_limit;

    uint8_t checksum;
    void    update();
};

/**
 * @class EnemyHpMsg
 * @brief 裁判系统提供的敌方血量信息
 *
 */
struct __attribute__((packed)) RxEnemyHpMsg
{
    static constexpr uint8_t SOF = static_cast<uint8_t>(QueryType::ENEMY_HP);

    using enemy_hp_t     = gary_msgs::msg::RobotHP;
    using enemy_hp_pub_t = rclcpp::Publisher<gary_msgs::msg::RobotHP>::SharedPtr;

    uint8_t  header;
    uint16_t enemy_1_robot_HP;
    uint16_t enemy_2_robot_HP;
    uint16_t enemy_3_robot_HP;
    uint16_t enemy_4_robot_HP;
    uint16_t enemy_5_robot_HP;
    uint16_t enemy_7_robot_HP;
    uint16_t enemy_outpost_HP;
    uint16_t enemy_base_HP;

    uint8_t checksum;
};

/**
 * @class GameInfoMsg
 * @brief 裁判系统提供的比赛信息
 *
 */
struct __attribute__((packed)) RxGameInfoMsg
{
    static constexpr uint8_t SOF = static_cast<uint8_t>(QueryType::GAME_INFO);

    using game_status_t      = gary_msgs::msg::GameStatus;
    using game_status_pub_t  = rclcpp::Publisher<gary_msgs::msg::GameStatus>::SharedPtr;
    using game_result_t      = gary_msgs::msg::GameResult;
    using game_result_pub_t  = rclcpp::Publisher<gary_msgs::msg::GameResult>::SharedPtr;
    using field_events_t     = gary_msgs::msg::FieldEvents;
    using field_events_pub_t = rclcpp::Publisher<gary_msgs::msg::FieldEvents>::SharedPtr;

    uint8_t  header;
    uint8_t  game_type;
    uint8_t  game_progress;
    uint16_t state_remain_time;
    uint64_t sync_time_stamp;
    uint32_t field_events;
    uint8_t  winner;

    uint8_t checksum;
};

/**
 * @class BuffsMsg
 * @brief 裁判系统提供的增益信息
 *
 */
struct __attribute__((packed)) RxBuffsMsg
{
    static constexpr uint8_t SOF = static_cast<uint8_t>(QueryType::BUFFS);

    using robot_buff_t     = gary_msgs::msg::RobotBuff;
    using robot_buff_pub_t = rclcpp::Publisher<gary_msgs::msg::RobotBuff>::SharedPtr;

    uint8_t  header;
    uint8_t  recovery_buff;
    uint8_t  cooling_buff;
    uint8_t  defence_buff;
    uint8_t  vulnerability_buff;
    uint16_t attack_buff;

    uint8_t checksum;
};

/**
 * @class PosMsg
 * @brief 裁判系统提供的位置消息
 *
 */
struct __attribute__((packed)) RxPosMsg
{
    static constexpr uint8_t SOF = static_cast<uint8_t>(QueryType::POS);

    using robot_pos_t     = gary_msgs::msg::RobotPosition;
    using robot_pos_pub_t = rclcpp::Publisher<gary_msgs::msg::RobotPosition>::SharedPtr;

    uint8_t header;
    float   x;
    float   y;
    float   angle;

    uint8_t checksum;
};

template <typename MsgT>
constexpr bool HasTrailingChecksumLayout() {
    return std::is_standard_layout_v<MsgT> &&
           offsetof(MsgT, header) == 0 &&
           offsetof(MsgT, checksum) == sizeof(MsgT) - sizeof(uint8_t);
}

static_assert(HasTrailingChecksumLayout<RxAutoAimMsg>(),
              "RxAutoAimMsg must keep header first and checksum last for CRC8 compatibility.");
static_assert(HasTrailingChecksumLayout<RxSelfInfoMsg>(),
              "RxSelfInfoMsg must keep header first and checksum last for CRC8 compatibility.");
static_assert(HasTrailingChecksumLayout<RxEnemyHpMsg>(),
              "RxEnemyHpMsg must keep header first and checksum last for CRC8 compatibility.");
static_assert(HasTrailingChecksumLayout<RxGameInfoMsg>(),
              "RxGameInfoMsg must keep header first and checksum last for CRC8 compatibility.");
static_assert(HasTrailingChecksumLayout<RxBuffsMsg>(),
              "RxBuffsMsg must keep header first and checksum last for CRC8 compatibility.");
static_assert(HasTrailingChecksumLayout<RxPosMsg>(),
              "RxPosMsg must keep header first and checksum last for CRC8 compatibility.");
