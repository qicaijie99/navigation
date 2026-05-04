// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/RobotBuff.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/robot_buff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotBuff_robot_attack_bonus
{
public:
  explicit Init_RobotBuff_robot_attack_bonus(::sentry_msgs::msg::RobotBuff & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::RobotBuff robot_attack_bonus(::sentry_msgs::msg::RobotBuff::_robot_attack_bonus_type arg)
  {
    msg_.robot_attack_bonus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::RobotBuff msg_;
};

class Init_RobotBuff_robot_defense_bonus
{
public:
  explicit Init_RobotBuff_robot_defense_bonus(::sentry_msgs::msg::RobotBuff & msg)
  : msg_(msg)
  {}
  Init_RobotBuff_robot_attack_bonus robot_defense_bonus(::sentry_msgs::msg::RobotBuff::_robot_defense_bonus_type arg)
  {
    msg_.robot_defense_bonus = std::move(arg);
    return Init_RobotBuff_robot_attack_bonus(msg_);
  }

private:
  ::sentry_msgs::msg::RobotBuff msg_;
};

class Init_RobotBuff_shooter_cooling_acceleration
{
public:
  explicit Init_RobotBuff_shooter_cooling_acceleration(::sentry_msgs::msg::RobotBuff & msg)
  : msg_(msg)
  {}
  Init_RobotBuff_robot_defense_bonus shooter_cooling_acceleration(::sentry_msgs::msg::RobotBuff::_shooter_cooling_acceleration_type arg)
  {
    msg_.shooter_cooling_acceleration = std::move(arg);
    return Init_RobotBuff_robot_defense_bonus(msg_);
  }

private:
  ::sentry_msgs::msg::RobotBuff msg_;
};

class Init_RobotBuff_robot_replenishing_blood
{
public:
  explicit Init_RobotBuff_robot_replenishing_blood(::sentry_msgs::msg::RobotBuff & msg)
  : msg_(msg)
  {}
  Init_RobotBuff_shooter_cooling_acceleration robot_replenishing_blood(::sentry_msgs::msg::RobotBuff::_robot_replenishing_blood_type arg)
  {
    msg_.robot_replenishing_blood = std::move(arg);
    return Init_RobotBuff_shooter_cooling_acceleration(msg_);
  }

private:
  ::sentry_msgs::msg::RobotBuff msg_;
};

class Init_RobotBuff_header
{
public:
  Init_RobotBuff_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBuff_robot_replenishing_blood header(::sentry_msgs::msg::RobotBuff::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotBuff_robot_replenishing_blood(msg_);
  }

private:
  ::sentry_msgs::msg::RobotBuff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::RobotBuff>()
{
  return sentry_msgs::msg::builder::Init_RobotBuff_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__BUILDER_HPP_
