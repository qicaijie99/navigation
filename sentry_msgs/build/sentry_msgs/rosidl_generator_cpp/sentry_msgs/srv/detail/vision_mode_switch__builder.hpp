// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__BUILDER_HPP_
#define SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/srv/detail/vision_mode_switch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace srv
{

namespace builder
{

class Init_VisionModeSwitch_Request_mode
{
public:
  Init_VisionModeSwitch_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sentry_msgs::srv::VisionModeSwitch_Request mode(::sentry_msgs::srv::VisionModeSwitch_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::srv::VisionModeSwitch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::srv::VisionModeSwitch_Request>()
{
  return sentry_msgs::srv::builder::Init_VisionModeSwitch_Request_mode();
}

}  // namespace sentry_msgs


namespace sentry_msgs
{

namespace srv
{

namespace builder
{

class Init_VisionModeSwitch_Response_succ
{
public:
  Init_VisionModeSwitch_Response_succ()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sentry_msgs::srv::VisionModeSwitch_Response succ(::sentry_msgs::srv::VisionModeSwitch_Response::_succ_type arg)
  {
    msg_.succ = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::srv::VisionModeSwitch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::srv::VisionModeSwitch_Response>()
{
  return sentry_msgs::srv::builder::Init_VisionModeSwitch_Response_succ();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__BUILDER_HPP_
