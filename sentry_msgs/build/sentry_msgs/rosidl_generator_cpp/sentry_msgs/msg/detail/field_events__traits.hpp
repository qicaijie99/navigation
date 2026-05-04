// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/field_events__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FieldEvents & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: supplier_1_occupation
  {
    out << "supplier_1_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.supplier_1_occupation, out);
    out << ", ";
  }

  // member: supplier_2_occupation
  {
    out << "supplier_2_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.supplier_2_occupation, out);
    out << ", ";
  }

  // member: supplier_3_occupation
  {
    out << "supplier_3_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.supplier_3_occupation, out);
    out << ", ";
  }

  // member: power_rune_activation_point_occupation
  {
    out << "power_rune_activation_point_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.power_rune_activation_point_occupation, out);
    out << ", ";
  }

  // member: small_power_rune_activation_status
  {
    out << "small_power_rune_activation_status: ";
    rosidl_generator_traits::value_to_yaml(msg.small_power_rune_activation_status, out);
    out << ", ";
  }

  // member: big_power_rune_activation_status
  {
    out << "big_power_rune_activation_status: ";
    rosidl_generator_traits::value_to_yaml(msg.big_power_rune_activation_status, out);
    out << ", ";
  }

  // member: r2b2_ground_occupation
  {
    out << "r2b2_ground_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.r2b2_ground_occupation, out);
    out << ", ";
  }

  // member: r3b3_ground_occupation
  {
    out << "r3b3_ground_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.r3b3_ground_occupation, out);
    out << ", ";
  }

  // member: r4b4_ground_occupation
  {
    out << "r4b4_ground_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.r4b4_ground_occupation, out);
    out << ", ";
  }

  // member: base_has_shield
  {
    out << "base_has_shield: ";
    rosidl_generator_traits::value_to_yaml(msg.base_has_shield, out);
    out << ", ";
  }

  // member: outpost_alive
  {
    out << "outpost_alive: ";
    rosidl_generator_traits::value_to_yaml(msg.outpost_alive, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FieldEvents & msg,
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

  // member: supplier_1_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supplier_1_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.supplier_1_occupation, out);
    out << "\n";
  }

  // member: supplier_2_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supplier_2_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.supplier_2_occupation, out);
    out << "\n";
  }

  // member: supplier_3_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supplier_3_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.supplier_3_occupation, out);
    out << "\n";
  }

  // member: power_rune_activation_point_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_rune_activation_point_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.power_rune_activation_point_occupation, out);
    out << "\n";
  }

  // member: small_power_rune_activation_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "small_power_rune_activation_status: ";
    rosidl_generator_traits::value_to_yaml(msg.small_power_rune_activation_status, out);
    out << "\n";
  }

  // member: big_power_rune_activation_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "big_power_rune_activation_status: ";
    rosidl_generator_traits::value_to_yaml(msg.big_power_rune_activation_status, out);
    out << "\n";
  }

  // member: r2b2_ground_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r2b2_ground_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.r2b2_ground_occupation, out);
    out << "\n";
  }

  // member: r3b3_ground_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r3b3_ground_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.r3b3_ground_occupation, out);
    out << "\n";
  }

  // member: r4b4_ground_occupation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r4b4_ground_occupation: ";
    rosidl_generator_traits::value_to_yaml(msg.r4b4_ground_occupation, out);
    out << "\n";
  }

  // member: base_has_shield
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_has_shield: ";
    rosidl_generator_traits::value_to_yaml(msg.base_has_shield, out);
    out << "\n";
  }

  // member: outpost_alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outpost_alive: ";
    rosidl_generator_traits::value_to_yaml(msg.outpost_alive, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FieldEvents & msg, bool use_flow_style = false)
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
  const sentry_msgs::msg::FieldEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::FieldEvents & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::FieldEvents>()
{
  return "sentry_msgs::msg::FieldEvents";
}

template<>
inline const char * name<sentry_msgs::msg::FieldEvents>()
{
  return "sentry_msgs/msg/FieldEvents";
}

template<>
struct has_fixed_size<sentry_msgs::msg::FieldEvents>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sentry_msgs::msg::FieldEvents>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sentry_msgs::msg::FieldEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__TRAITS_HPP_
