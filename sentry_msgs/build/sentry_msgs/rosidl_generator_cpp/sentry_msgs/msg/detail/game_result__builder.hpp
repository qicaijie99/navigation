// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_GameResult_winner
{
public:
  explicit Init_GameResult_winner(::sentry_msgs::msg::GameResult & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::GameResult winner(::sentry_msgs::msg::GameResult::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::GameResult msg_;
};

class Init_GameResult_header
{
public:
  Init_GameResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameResult_winner header(::sentry_msgs::msg::GameResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameResult_winner(msg_);
  }

private:
  ::sentry_msgs::msg::GameResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::GameResult>()
{
  return sentry_msgs::msg::builder::Init_GameResult_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
