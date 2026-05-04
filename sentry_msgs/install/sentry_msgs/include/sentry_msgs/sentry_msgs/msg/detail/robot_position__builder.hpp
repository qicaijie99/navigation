// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/RobotPosition.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_POSITION__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/robot_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotPosition_yaw
{
public:
  explicit Init_RobotPosition_yaw(::sentry_msgs::msg::RobotPosition & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::RobotPosition yaw(::sentry_msgs::msg::RobotPosition::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::RobotPosition msg_;
};

class Init_RobotPosition_z
{
public:
  explicit Init_RobotPosition_z(::sentry_msgs::msg::RobotPosition & msg)
  : msg_(msg)
  {}
  Init_RobotPosition_yaw z(::sentry_msgs::msg::RobotPosition::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RobotPosition_yaw(msg_);
  }

private:
  ::sentry_msgs::msg::RobotPosition msg_;
};

class Init_RobotPosition_y
{
public:
  explicit Init_RobotPosition_y(::sentry_msgs::msg::RobotPosition & msg)
  : msg_(msg)
  {}
  Init_RobotPosition_z y(::sentry_msgs::msg::RobotPosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotPosition_z(msg_);
  }

private:
  ::sentry_msgs::msg::RobotPosition msg_;
};

class Init_RobotPosition_x
{
public:
  explicit Init_RobotPosition_x(::sentry_msgs::msg::RobotPosition & msg)
  : msg_(msg)
  {}
  Init_RobotPosition_y x(::sentry_msgs::msg::RobotPosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotPosition_y(msg_);
  }

private:
  ::sentry_msgs::msg::RobotPosition msg_;
};

class Init_RobotPosition_header
{
public:
  Init_RobotPosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPosition_x header(::sentry_msgs::msg::RobotPosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotPosition_x(msg_);
  }

private:
  ::sentry_msgs::msg::RobotPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::RobotPosition>()
{
  return sentry_msgs::msg::builder::Init_RobotPosition_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_POSITION__BUILDER_HPP_
