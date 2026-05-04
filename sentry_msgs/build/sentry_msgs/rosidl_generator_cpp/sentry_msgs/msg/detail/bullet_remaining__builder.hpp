// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_BulletRemaining_remaining_coin_num
{
public:
  explicit Init_BulletRemaining_remaining_coin_num(::sentry_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::BulletRemaining remaining_coin_num(::sentry_msgs::msg::BulletRemaining::_remaining_coin_num_type arg)
  {
    msg_.remaining_coin_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_remaining_42mm_num
{
public:
  explicit Init_BulletRemaining_remaining_42mm_num(::sentry_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_remaining_coin_num remaining_42mm_num(::sentry_msgs::msg::BulletRemaining::_remaining_42mm_num_type arg)
  {
    msg_.remaining_42mm_num = std::move(arg);
    return Init_BulletRemaining_remaining_coin_num(msg_);
  }

private:
  ::sentry_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_remaining_17mm_num
{
public:
  explicit Init_BulletRemaining_remaining_17mm_num(::sentry_msgs::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_remaining_42mm_num remaining_17mm_num(::sentry_msgs::msg::BulletRemaining::_remaining_17mm_num_type arg)
  {
    msg_.remaining_17mm_num = std::move(arg);
    return Init_BulletRemaining_remaining_42mm_num(msg_);
  }

private:
  ::sentry_msgs::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_header
{
public:
  Init_BulletRemaining_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulletRemaining_remaining_17mm_num header(::sentry_msgs::msg::BulletRemaining::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BulletRemaining_remaining_17mm_num(msg_);
  }

private:
  ::sentry_msgs::msg::BulletRemaining msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::BulletRemaining>()
{
  return sentry_msgs::msg::builder::Init_BulletRemaining_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
