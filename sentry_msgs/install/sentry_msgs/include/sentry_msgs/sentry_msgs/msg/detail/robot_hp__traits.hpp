// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_HP__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_HP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHP & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: red_1_hero_hp
  {
    out << "red_1_hero_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_hero_hp, out);
    out << ", ";
  }

  // member: red_2_engineer_hp
  {
    out << "red_2_engineer_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_engineer_hp, out);
    out << ", ";
  }

  // member: red_3_infantry_hp
  {
    out << "red_3_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_infantry_hp, out);
    out << ", ";
  }

  // member: red_4_infantry_hp
  {
    out << "red_4_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_infantry_hp, out);
    out << ", ";
  }

  // member: red_5_infantry_hp
  {
    out << "red_5_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_infantry_hp, out);
    out << ", ";
  }

  // member: red_7_sentry_hp
  {
    out << "red_7_sentry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_sentry_hp, out);
    out << ", ";
  }

  // member: red_outpost_hp
  {
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << ", ";
  }

  // member: red_base_hp
  {
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << ", ";
  }

  // member: blue_1_hero_hp
  {
    out << "blue_1_hero_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_hero_hp, out);
    out << ", ";
  }

  // member: blue_2_engineer_hp
  {
    out << "blue_2_engineer_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_engineer_hp, out);
    out << ", ";
  }

  // member: blue_3_infantry_hp
  {
    out << "blue_3_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_infantry_hp, out);
    out << ", ";
  }

  // member: blue_4_infantry_hp
  {
    out << "blue_4_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_infantry_hp, out);
    out << ", ";
  }

  // member: blue_5_infantry_hp
  {
    out << "blue_5_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_infantry_hp, out);
    out << ", ";
  }

  // member: blue_7_sentry_hp
  {
    out << "blue_7_sentry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_sentry_hp, out);
    out << ", ";
  }

  // member: blue_outpost_hp
  {
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << ", ";
  }

  // member: blue_base_hp
  {
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotHP & msg,
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

  // member: red_1_hero_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_1_hero_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_hero_hp, out);
    out << "\n";
  }

  // member: red_2_engineer_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_2_engineer_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_engineer_hp, out);
    out << "\n";
  }

  // member: red_3_infantry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_3_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_infantry_hp, out);
    out << "\n";
  }

  // member: red_4_infantry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_4_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_infantry_hp, out);
    out << "\n";
  }

  // member: red_5_infantry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_5_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_infantry_hp, out);
    out << "\n";
  }

  // member: red_7_sentry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_7_sentry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_sentry_hp, out);
    out << "\n";
  }

  // member: red_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << "\n";
  }

  // member: red_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << "\n";
  }

  // member: blue_1_hero_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_1_hero_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_hero_hp, out);
    out << "\n";
  }

  // member: blue_2_engineer_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_2_engineer_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_engineer_hp, out);
    out << "\n";
  }

  // member: blue_3_infantry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_3_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_infantry_hp, out);
    out << "\n";
  }

  // member: blue_4_infantry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_4_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_infantry_hp, out);
    out << "\n";
  }

  // member: blue_5_infantry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_5_infantry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_infantry_hp, out);
    out << "\n";
  }

  // member: blue_7_sentry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_7_sentry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_sentry_hp, out);
    out << "\n";
  }

  // member: blue_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << "\n";
  }

  // member: blue_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHP & msg, bool use_flow_style = false)
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
  const sentry_msgs::msg::RobotHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::RobotHP & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::RobotHP>()
{
  return "sentry_msgs::msg::RobotHP";
}

template<>
inline const char * name<sentry_msgs::msg::RobotHP>()
{
  return "sentry_msgs/msg/RobotHP";
}

template<>
struct has_fixed_size<sentry_msgs::msg::RobotHP>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sentry_msgs::msg::RobotHP>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sentry_msgs::msg::RobotHP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_HP__TRAITS_HPP_
