// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: remaining_17mm_num
  {
    out << "remaining_17mm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_17mm_num, out);
    out << ", ";
  }

  // member: remaining_42mm_num
  {
    out << "remaining_42mm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_42mm_num, out);
    out << ", ";
  }

  // member: remaining_coin_num
  {
    out << "remaining_coin_num: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_coin_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: remaining_17mm_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_17mm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_17mm_num, out);
    out << "\n";
  }

  // member: remaining_42mm_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_42mm_num: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_42mm_num, out);
    out << "\n";
  }

  // member: remaining_coin_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_coin_num: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_coin_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BulletRemaining & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sentry_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sentry_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_msgs::msg::BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::BulletRemaining & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::BulletRemaining>()
{
  return "sentry_msgs::msg::BulletRemaining";
}

template<>
inline const char * name<sentry_msgs::msg::BulletRemaining>()
{
  return "sentry_msgs/msg/BulletRemaining";
}

template<>
struct has_fixed_size<sentry_msgs::msg::BulletRemaining>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sentry_msgs::msg::BulletRemaining>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sentry_msgs::msg::BulletRemaining>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
