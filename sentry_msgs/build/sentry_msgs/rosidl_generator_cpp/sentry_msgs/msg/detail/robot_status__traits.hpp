// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: robot_level
  {
    out << "robot_level: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_level, out);
    out << ", ";
  }

  // member: remain_hp
  {
    out << "remain_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_hp, out);
    out << ", ";
  }

  // member: max_hp
  {
    out << "max_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_hp, out);
    out << ", ";
  }

  // member: shooter_17mm_id1_cooling_rate
  {
    out << "shooter_17mm_id1_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_cooling_rate, out);
    out << ", ";
  }

  // member: shooter_17mm_id1_cooling_limit
  {
    out << "shooter_17mm_id1_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_cooling_limit, out);
    out << ", ";
  }

  // member: shooter_17mm_id1_speed_limit
  {
    out << "shooter_17mm_id1_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_speed_limit, out);
    out << ", ";
  }

  // member: shooter_17mm_id2_cooling_rate
  {
    out << "shooter_17mm_id2_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_cooling_rate, out);
    out << ", ";
  }

  // member: shooter_17mm_id2_cooling_limit
  {
    out << "shooter_17mm_id2_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_cooling_limit, out);
    out << ", ";
  }

  // member: shooter_17mm_id2_speed_limit
  {
    out << "shooter_17mm_id2_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_speed_limit, out);
    out << ", ";
  }

  // member: shooter_42mm_id1_cooling_rate
  {
    out << "shooter_42mm_id1_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_cooling_rate, out);
    out << ", ";
  }

  // member: shooter_42mm_id1_cooling_limit
  {
    out << "shooter_42mm_id1_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_cooling_limit, out);
    out << ", ";
  }

  // member: shooter_42mm_id1_speed_limit
  {
    out << "shooter_42mm_id1_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_speed_limit, out);
    out << ", ";
  }

  // member: chassis_power_limit
  {
    out << "chassis_power_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_limit, out);
    out << ", ";
  }

  // member: gimbal_power_output
  {
    out << "gimbal_power_output: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_power_output, out);
    out << ", ";
  }

  // member: chassis_power_output
  {
    out << "chassis_power_output: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_output, out);
    out << ", ";
  }

  // member: shooter_power_output
  {
    out << "shooter_power_output: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_power_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
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

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: robot_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_level: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_level, out);
    out << "\n";
  }

  // member: remain_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_hp, out);
    out << "\n";
  }

  // member: max_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_hp, out);
    out << "\n";
  }

  // member: shooter_17mm_id1_cooling_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id1_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_cooling_rate, out);
    out << "\n";
  }

  // member: shooter_17mm_id1_cooling_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id1_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_cooling_limit, out);
    out << "\n";
  }

  // member: shooter_17mm_id1_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id1_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id1_speed_limit, out);
    out << "\n";
  }

  // member: shooter_17mm_id2_cooling_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id2_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_cooling_rate, out);
    out << "\n";
  }

  // member: shooter_17mm_id2_cooling_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id2_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_cooling_limit, out);
    out << "\n";
  }

  // member: shooter_17mm_id2_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_id2_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_id2_speed_limit, out);
    out << "\n";
  }

  // member: shooter_42mm_id1_cooling_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_42mm_id1_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_cooling_rate, out);
    out << "\n";
  }

  // member: shooter_42mm_id1_cooling_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_42mm_id1_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_cooling_limit, out);
    out << "\n";
  }

  // member: shooter_42mm_id1_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_42mm_id1_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_id1_speed_limit, out);
    out << "\n";
  }

  // member: chassis_power_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_power_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_limit, out);
    out << "\n";
  }

  // member: gimbal_power_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_power_output: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_power_output, out);
    out << "\n";
  }

  // member: chassis_power_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_power_output: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_output, out);
    out << "\n";
  }

  // member: shooter_power_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_power_output: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_power_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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
  const sentry_msgs::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::RobotStatus & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::RobotStatus>()
{
  return "sentry_msgs::msg::RobotStatus";
}

template<>
inline const char * name<sentry_msgs::msg::RobotStatus>()
{
  return "sentry_msgs/msg/RobotStatus";
}

template<>
struct has_fixed_size<sentry_msgs::msg::RobotStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sentry_msgs::msg::RobotStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sentry_msgs::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
