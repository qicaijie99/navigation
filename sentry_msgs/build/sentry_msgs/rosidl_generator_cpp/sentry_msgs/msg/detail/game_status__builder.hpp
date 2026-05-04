// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_GameStatus_sync_time_stamp
{
public:
  explicit Init_GameStatus_sync_time_stamp(::sentry_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::GameStatus sync_time_stamp(::sentry_msgs::msg::GameStatus::_sync_time_stamp_type arg)
  {
    msg_.sync_time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::sentry_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_sync_time_stamp stage_remain_time(::sentry_msgs::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameStatus_sync_time_stamp(msg_);
  }

private:
  ::sentry_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::sentry_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::sentry_msgs::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::sentry_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  explicit Init_GameStatus_game_type(::sentry_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_game_progress game_type(::sentry_msgs::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::sentry_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_header
{
public:
  Init_GameStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_type header(::sentry_msgs::msg::GameStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameStatus_game_type(msg_);
  }

private:
  ::sentry_msgs::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::GameStatus>()
{
  return sentry_msgs::msg::builder::Init_GameStatus_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
