// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_shooter_power_output
{
public:
  explicit Init_RobotStatus_shooter_power_output(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::RobotStatus shooter_power_output(::sentry_msgs::msg::RobotStatus::_shooter_power_output_type arg)
  {
    msg_.shooter_power_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_chassis_power_output
{
public:
  explicit Init_RobotStatus_chassis_power_output(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_power_output chassis_power_output(::sentry_msgs::msg::RobotStatus::_chassis_power_output_type arg)
  {
    msg_.chassis_power_output = std::move(arg);
    return Init_RobotStatus_shooter_power_output(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_gimbal_power_output
{
public:
  explicit Init_RobotStatus_gimbal_power_output(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_chassis_power_output gimbal_power_output(::sentry_msgs::msg::RobotStatus::_gimbal_power_output_type arg)
  {
    msg_.gimbal_power_output = std::move(arg);
    return Init_RobotStatus_chassis_power_output(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_chassis_power_limit
{
public:
  explicit Init_RobotStatus_chassis_power_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_gimbal_power_output chassis_power_limit(::sentry_msgs::msg::RobotStatus::_chassis_power_limit_type arg)
  {
    msg_.chassis_power_limit = std::move(arg);
    return Init_RobotStatus_gimbal_power_output(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_42mm_id1_speed_limit
{
public:
  explicit Init_RobotStatus_shooter_42mm_id1_speed_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_chassis_power_limit shooter_42mm_id1_speed_limit(::sentry_msgs::msg::RobotStatus::_shooter_42mm_id1_speed_limit_type arg)
  {
    msg_.shooter_42mm_id1_speed_limit = std::move(arg);
    return Init_RobotStatus_chassis_power_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_42mm_id1_cooling_limit
{
public:
  explicit Init_RobotStatus_shooter_42mm_id1_cooling_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_42mm_id1_speed_limit shooter_42mm_id1_cooling_limit(::sentry_msgs::msg::RobotStatus::_shooter_42mm_id1_cooling_limit_type arg)
  {
    msg_.shooter_42mm_id1_cooling_limit = std::move(arg);
    return Init_RobotStatus_shooter_42mm_id1_speed_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_42mm_id1_cooling_rate
{
public:
  explicit Init_RobotStatus_shooter_42mm_id1_cooling_rate(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_42mm_id1_cooling_limit shooter_42mm_id1_cooling_rate(::sentry_msgs::msg::RobotStatus::_shooter_42mm_id1_cooling_rate_type arg)
  {
    msg_.shooter_42mm_id1_cooling_rate = std::move(arg);
    return Init_RobotStatus_shooter_42mm_id1_cooling_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_17mm_id2_speed_limit
{
public:
  explicit Init_RobotStatus_shooter_17mm_id2_speed_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_42mm_id1_cooling_rate shooter_17mm_id2_speed_limit(::sentry_msgs::msg::RobotStatus::_shooter_17mm_id2_speed_limit_type arg)
  {
    msg_.shooter_17mm_id2_speed_limit = std::move(arg);
    return Init_RobotStatus_shooter_42mm_id1_cooling_rate(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_17mm_id2_cooling_limit
{
public:
  explicit Init_RobotStatus_shooter_17mm_id2_cooling_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_17mm_id2_speed_limit shooter_17mm_id2_cooling_limit(::sentry_msgs::msg::RobotStatus::_shooter_17mm_id2_cooling_limit_type arg)
  {
    msg_.shooter_17mm_id2_cooling_limit = std::move(arg);
    return Init_RobotStatus_shooter_17mm_id2_speed_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_17mm_id2_cooling_rate
{
public:
  explicit Init_RobotStatus_shooter_17mm_id2_cooling_rate(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_17mm_id2_cooling_limit shooter_17mm_id2_cooling_rate(::sentry_msgs::msg::RobotStatus::_shooter_17mm_id2_cooling_rate_type arg)
  {
    msg_.shooter_17mm_id2_cooling_rate = std::move(arg);
    return Init_RobotStatus_shooter_17mm_id2_cooling_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_17mm_id1_speed_limit
{
public:
  explicit Init_RobotStatus_shooter_17mm_id1_speed_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_17mm_id2_cooling_rate shooter_17mm_id1_speed_limit(::sentry_msgs::msg::RobotStatus::_shooter_17mm_id1_speed_limit_type arg)
  {
    msg_.shooter_17mm_id1_speed_limit = std::move(arg);
    return Init_RobotStatus_shooter_17mm_id2_cooling_rate(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_17mm_id1_cooling_limit
{
public:
  explicit Init_RobotStatus_shooter_17mm_id1_cooling_limit(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_17mm_id1_speed_limit shooter_17mm_id1_cooling_limit(::sentry_msgs::msg::RobotStatus::_shooter_17mm_id1_cooling_limit_type arg)
  {
    msg_.shooter_17mm_id1_cooling_limit = std::move(arg);
    return Init_RobotStatus_shooter_17mm_id1_speed_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_17mm_id1_cooling_rate
{
public:
  explicit Init_RobotStatus_shooter_17mm_id1_cooling_rate(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_17mm_id1_cooling_limit shooter_17mm_id1_cooling_rate(::sentry_msgs::msg::RobotStatus::_shooter_17mm_id1_cooling_rate_type arg)
  {
    msg_.shooter_17mm_id1_cooling_rate = std::move(arg);
    return Init_RobotStatus_shooter_17mm_id1_cooling_limit(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_max_hp
{
public:
  explicit Init_RobotStatus_max_hp(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_17mm_id1_cooling_rate max_hp(::sentry_msgs::msg::RobotStatus::_max_hp_type arg)
  {
    msg_.max_hp = std::move(arg);
    return Init_RobotStatus_shooter_17mm_id1_cooling_rate(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_remain_hp
{
public:
  explicit Init_RobotStatus_remain_hp(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_max_hp remain_hp(::sentry_msgs::msg::RobotStatus::_remain_hp_type arg)
  {
    msg_.remain_hp = std::move(arg);
    return Init_RobotStatus_max_hp(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_level
{
public:
  explicit Init_RobotStatus_robot_level(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_remain_hp robot_level(::sentry_msgs::msg::RobotStatus::_robot_level_type arg)
  {
    msg_.robot_level = std::move(arg);
    return Init_RobotStatus_remain_hp(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  explicit Init_RobotStatus_robot_id(::sentry_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_robot_level robot_id(::sentry_msgs::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_robot_level(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_robot_id header(::sentry_msgs::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_robot_id(msg_);
  }

private:
  ::sentry_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::RobotStatus>()
{
  return sentry_msgs::msg::builder::Init_RobotStatus_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
