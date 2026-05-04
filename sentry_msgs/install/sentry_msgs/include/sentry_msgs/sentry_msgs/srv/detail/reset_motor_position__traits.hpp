// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:srv/ResetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__TRAITS_HPP_
#define SENTRY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/srv/detail/reset_motor_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentry_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMotorPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_name
  {
    out << "motor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMotorPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMotorPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sentry_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sentry_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_msgs::srv::ResetMotorPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::srv::ResetMotorPosition_Request & msg)
{
  return sentry_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::srv::ResetMotorPosition_Request>()
{
  return "sentry_msgs::srv::ResetMotorPosition_Request";
}

template<>
inline const char * name<sentry_msgs::srv::ResetMotorPosition_Request>()
{
  return "sentry_msgs/srv/ResetMotorPosition_Request";
}

template<>
struct has_fixed_size<sentry_msgs::srv::ResetMotorPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sentry_msgs::srv::ResetMotorPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sentry_msgs::srv::ResetMotorPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sentry_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMotorPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: succ
  {
    out << "succ: ";
    rosidl_generator_traits::value_to_yaml(msg.succ, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMotorPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: succ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "succ: ";
    rosidl_generator_traits::value_to_yaml(msg.succ, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMotorPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sentry_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sentry_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_msgs::srv::ResetMotorPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::srv::ResetMotorPosition_Response & msg)
{
  return sentry_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::srv::ResetMotorPosition_Response>()
{
  return "sentry_msgs::srv::ResetMotorPosition_Response";
}

template<>
inline const char * name<sentry_msgs::srv::ResetMotorPosition_Response>()
{
  return "sentry_msgs/srv/ResetMotorPosition_Response";
}

template<>
struct has_fixed_size<sentry_msgs::srv::ResetMotorPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_msgs::srv::ResetMotorPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_msgs::srv::ResetMotorPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sentry_msgs::srv::ResetMotorPosition>()
{
  return "sentry_msgs::srv::ResetMotorPosition";
}

template<>
inline const char * name<sentry_msgs::srv::ResetMotorPosition>()
{
  return "sentry_msgs/srv/ResetMotorPosition";
}

template<>
struct has_fixed_size<sentry_msgs::srv::ResetMotorPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<sentry_msgs::srv::ResetMotorPosition_Request>::value &&
    has_fixed_size<sentry_msgs::srv::ResetMotorPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<sentry_msgs::srv::ResetMotorPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<sentry_msgs::srv::ResetMotorPosition_Request>::value &&
    has_bounded_size<sentry_msgs::srv::ResetMotorPosition_Response>::value
  >
{
};

template<>
struct is_service<sentry_msgs::srv::ResetMotorPosition>
  : std::true_type
{
};

template<>
struct is_service_request<sentry_msgs::srv::ResetMotorPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sentry_msgs::srv::ResetMotorPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__TRAITS_HPP_
