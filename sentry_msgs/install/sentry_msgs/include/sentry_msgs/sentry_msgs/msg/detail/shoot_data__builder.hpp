// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_ShootData_bullet_speed
{
public:
  explicit Init_ShootData_bullet_speed(::sentry_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::ShootData bullet_speed(::sentry_msgs::msg::ShootData::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_freq
{
public:
  explicit Init_ShootData_bullet_freq(::sentry_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_speed bullet_freq(::sentry_msgs::msg::ShootData::_bullet_freq_type arg)
  {
    msg_.bullet_freq = std::move(arg);
    return Init_ShootData_bullet_speed(msg_);
  }

private:
  ::sentry_msgs::msg::ShootData msg_;
};

class Init_ShootData_shooter_id
{
public:
  explicit Init_ShootData_shooter_id(::sentry_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_freq shooter_id(::sentry_msgs::msg::ShootData::_shooter_id_type arg)
  {
    msg_.shooter_id = std::move(arg);
    return Init_ShootData_bullet_freq(msg_);
  }

private:
  ::sentry_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_type
{
public:
  explicit Init_ShootData_bullet_type(::sentry_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_shooter_id bullet_type(::sentry_msgs::msg::ShootData::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_ShootData_shooter_id(msg_);
  }

private:
  ::sentry_msgs::msg::ShootData msg_;
};

class Init_ShootData_header
{
public:
  Init_ShootData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootData_bullet_type header(::sentry_msgs::msg::ShootData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShootData_bullet_type(msg_);
  }

private:
  ::sentry_msgs::msg::ShootData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::ShootData>()
{
  return sentry_msgs::msg::builder::Init_ShootData_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
