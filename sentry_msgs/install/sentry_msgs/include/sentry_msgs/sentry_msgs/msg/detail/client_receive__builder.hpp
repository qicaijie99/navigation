// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/ClientReceive.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/client_receive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_ClientReceive_target_robot_id
{
public:
  explicit Init_ClientReceive_target_robot_id(::sentry_msgs::msg::ClientReceive & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::ClientReceive target_robot_id(::sentry_msgs::msg::ClientReceive::_target_robot_id_type arg)
  {
    msg_.target_robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::ClientReceive msg_;
};

class Init_ClientReceive_target_position_y
{
public:
  explicit Init_ClientReceive_target_position_y(::sentry_msgs::msg::ClientReceive & msg)
  : msg_(msg)
  {}
  Init_ClientReceive_target_robot_id target_position_y(::sentry_msgs::msg::ClientReceive::_target_position_y_type arg)
  {
    msg_.target_position_y = std::move(arg);
    return Init_ClientReceive_target_robot_id(msg_);
  }

private:
  ::sentry_msgs::msg::ClientReceive msg_;
};

class Init_ClientReceive_target_position_x
{
public:
  explicit Init_ClientReceive_target_position_x(::sentry_msgs::msg::ClientReceive & msg)
  : msg_(msg)
  {}
  Init_ClientReceive_target_position_y target_position_x(::sentry_msgs::msg::ClientReceive::_target_position_x_type arg)
  {
    msg_.target_position_x = std::move(arg);
    return Init_ClientReceive_target_position_y(msg_);
  }

private:
  ::sentry_msgs::msg::ClientReceive msg_;
};

class Init_ClientReceive_header
{
public:
  Init_ClientReceive_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClientReceive_target_position_x header(::sentry_msgs::msg::ClientReceive::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClientReceive_target_position_x(msg_);
  }

private:
  ::sentry_msgs::msg::ClientReceive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::ClientReceive>()
{
  return sentry_msgs::msg::builder::Init_ClientReceive_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__BUILDER_HPP_
