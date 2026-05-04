// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/RobotBuff.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/robot_buff__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotBuff & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: robot_replenishing_blood
  {
    out << "robot_replenishing_blood: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_replenishing_blood, out);
    out << ", ";
  }

  // member: shooter_cooling_acceleration
  {
    out << "shooter_cooling_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_cooling_acceleration, out);
    out << ", ";
  }

  // member: robot_defense_bonus
  {
    out << "robot_defense_bonus: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_defense_bonus, out);
    out << ", ";
  }

  // member: robot_attack_bonus
  {
    out << "robot_attack_bonus: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_attack_bonus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBuff & msg,
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

  // member: robot_replenishing_blood
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_replenishing_blood: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_replenishing_blood, out);
    out << "\n";
  }

  // member: shooter_cooling_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_cooling_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_cooling_acceleration, out);
    out << "\n";
  }

  // member: robot_defense_bonus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_defense_bonus: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_defense_bonus, out);
    out << "\n";
  }

  // member: robot_attack_bonus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_attack_bonus: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_attack_bonus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBuff & msg, bool use_flow_style = false)
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
  const sentry_msgs::msg::RobotBuff & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::RobotBuff & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::RobotBuff>()
{
  return "sentry_msgs::msg::RobotBuff";
}

template<>
inline const char * name<sentry_msgs::msg::RobotBuff>()
{
  return "sentry_msgs/msg/RobotBuff";
}

template<>
struct has_fixed_size<sentry_msgs::msg::RobotBuff>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sentry_msgs::msg::RobotBuff>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sentry_msgs::msg::RobotBuff>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__TRAITS_HPP_
