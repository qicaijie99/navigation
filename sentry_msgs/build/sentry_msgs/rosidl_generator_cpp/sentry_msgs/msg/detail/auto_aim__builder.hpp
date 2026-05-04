// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/auto_aim__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoAIM_vision_mode
{
public:
  explicit Init_AutoAIM_vision_mode(::sentry_msgs::msg::AutoAIM & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::AutoAIM vision_mode(::sentry_msgs::msg::AutoAIM::_vision_mode_type arg)
  {
    msg_.vision_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::AutoAIM msg_;
};

class Init_AutoAIM_target_distance
{
public:
  explicit Init_AutoAIM_target_distance(::sentry_msgs::msg::AutoAIM & msg)
  : msg_(msg)
  {}
  Init_AutoAIM_vision_mode target_distance(::sentry_msgs::msg::AutoAIM::_target_distance_type arg)
  {
    msg_.target_distance = std::move(arg);
    return Init_AutoAIM_vision_mode(msg_);
  }

private:
  ::sentry_msgs::msg::AutoAIM msg_;
};

class Init_AutoAIM_target_id
{
public:
  explicit Init_AutoAIM_target_id(::sentry_msgs::msg::AutoAIM & msg)
  : msg_(msg)
  {}
  Init_AutoAIM_target_distance target_id(::sentry_msgs::msg::AutoAIM::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_AutoAIM_target_distance(msg_);
  }

private:
  ::sentry_msgs::msg::AutoAIM msg_;
};

class Init_AutoAIM_yaw
{
public:
  explicit Init_AutoAIM_yaw(::sentry_msgs::msg::AutoAIM & msg)
  : msg_(msg)
  {}
  Init_AutoAIM_target_id yaw(::sentry_msgs::msg::AutoAIM::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_AutoAIM_target_id(msg_);
  }

private:
  ::sentry_msgs::msg::AutoAIM msg_;
};

class Init_AutoAIM_pitch
{
public:
  explicit Init_AutoAIM_pitch(::sentry_msgs::msg::AutoAIM & msg)
  : msg_(msg)
  {}
  Init_AutoAIM_yaw pitch(::sentry_msgs::msg::AutoAIM::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AutoAIM_yaw(msg_);
  }

private:
  ::sentry_msgs::msg::AutoAIM msg_;
};

class Init_AutoAIM_header
{
public:
  Init_AutoAIM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoAIM_pitch header(::sentry_msgs::msg::AutoAIM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoAIM_pitch(msg_);
  }

private:
  ::sentry_msgs::msg::AutoAIM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::AutoAIM>()
{
  return sentry_msgs::msg::builder::Init_AutoAIM_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__BUILDER_HPP_
