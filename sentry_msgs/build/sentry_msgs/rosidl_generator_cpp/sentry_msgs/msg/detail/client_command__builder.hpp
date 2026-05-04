// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/ClientCommand.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__CLIENT_COMMAND__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__CLIENT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/client_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_ClientCommand_target_robot_id
{
public:
  explicit Init_ClientCommand_target_robot_id(::sentry_msgs::msg::ClientCommand & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::ClientCommand target_robot_id(::sentry_msgs::msg::ClientCommand::_target_robot_id_type arg)
  {
    msg_.target_robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::ClientCommand msg_;
};

class Init_ClientCommand_keyboard_key_pressed
{
public:
  explicit Init_ClientCommand_keyboard_key_pressed(::sentry_msgs::msg::ClientCommand & msg)
  : msg_(msg)
  {}
  Init_ClientCommand_target_robot_id keyboard_key_pressed(::sentry_msgs::msg::ClientCommand::_keyboard_key_pressed_type arg)
  {
    msg_.keyboard_key_pressed = std::move(arg);
    return Init_ClientCommand_target_robot_id(msg_);
  }

private:
  ::sentry_msgs::msg::ClientCommand msg_;
};

class Init_ClientCommand_target_position_z
{
public:
  explicit Init_ClientCommand_target_position_z(::sentry_msgs::msg::ClientCommand & msg)
  : msg_(msg)
  {}
  Init_ClientCommand_keyboard_key_pressed target_position_z(::sentry_msgs::msg::ClientCommand::_target_position_z_type arg)
  {
    msg_.target_position_z = std::move(arg);
    return Init_ClientCommand_keyboard_key_pressed(msg_);
  }

private:
  ::sentry_msgs::msg::ClientCommand msg_;
};

class Init_ClientCommand_target_position_y
{
public:
  explicit Init_ClientCommand_target_position_y(::sentry_msgs::msg::ClientCommand & msg)
  : msg_(msg)
  {}
  Init_ClientCommand_target_position_z target_position_y(::sentry_msgs::msg::ClientCommand::_target_position_y_type arg)
  {
    msg_.target_position_y = std::move(arg);
    return Init_ClientCommand_target_position_z(msg_);
  }

private:
  ::sentry_msgs::msg::ClientCommand msg_;
};

class Init_ClientCommand_target_position_x
{
public:
  explicit Init_ClientCommand_target_position_x(::sentry_msgs::msg::ClientCommand & msg)
  : msg_(msg)
  {}
  Init_ClientCommand_target_position_y target_position_x(::sentry_msgs::msg::ClientCommand::_target_position_x_type arg)
  {
    msg_.target_position_x = std::move(arg);
    return Init_ClientCommand_target_position_y(msg_);
  }

private:
  ::sentry_msgs::msg::ClientCommand msg_;
};

class Init_ClientCommand_header
{
public:
  Init_ClientCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClientCommand_target_position_x header(::sentry_msgs::msg::ClientCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClientCommand_target_position_x(msg_);
  }

private:
  ::sentry_msgs::msg::ClientCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::ClientCommand>()
{
  return sentry_msgs::msg::builder::Init_ClientCommand_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__CLIENT_COMMAND__BUILDER_HPP_
