// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/dual_loop_pid_with_filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DualLoopPIDWithFilter & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: inner_kp
  {
    out << "inner_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_kp, out);
    out << ", ";
  }

  // member: inner_ki
  {
    out << "inner_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_ki, out);
    out << ", ";
  }

  // member: inner_kd
  {
    out << "inner_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_kd, out);
    out << ", ";
  }

  // member: inner_p_filter_coefficient
  {
    out << "inner_p_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_p_filter_coefficient, out);
    out << ", ";
  }

  // member: inner_d_filter_coefficient
  {
    out << "inner_d_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_d_filter_coefficient, out);
    out << ", ";
  }

  // member: outer_kp
  {
    out << "outer_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_kp, out);
    out << ", ";
  }

  // member: outer_ki
  {
    out << "outer_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_ki, out);
    out << ", ";
  }

  // member: outer_kd
  {
    out << "outer_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_kd, out);
    out << ", ";
  }

  // member: outer_p_filter_coefficient
  {
    out << "outer_p_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_p_filter_coefficient, out);
    out << ", ";
  }

  // member: outer_d_filter_coefficient
  {
    out << "outer_d_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_d_filter_coefficient, out);
    out << ", ";
  }

  // member: inner_max_out
  {
    out << "inner_max_out: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_max_out, out);
    out << ", ";
  }

  // member: inner_max_iout
  {
    out << "inner_max_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_max_iout, out);
    out << ", ";
  }

  // member: outer_max_out
  {
    out << "outer_max_out: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_max_out, out);
    out << ", ";
  }

  // member: outer_max_iout
  {
    out << "outer_max_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_max_iout, out);
    out << ", ";
  }

  // member: inner_set
  {
    out << "inner_set: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_set, out);
    out << ", ";
  }

  // member: inner_feedback
  {
    out << "inner_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_feedback, out);
    out << ", ";
  }

  // member: inner_error
  {
    out << "inner_error: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_error, out);
    out << ", ";
  }

  // member: inner_error_sum
  {
    out << "inner_error_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_error_sum, out);
    out << ", ";
  }

  // member: inner_last_error
  {
    out << "inner_last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_last_error, out);
    out << ", ";
  }

  // member: outer_set
  {
    out << "outer_set: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_set, out);
    out << ", ";
  }

  // member: outer_feedback
  {
    out << "outer_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_feedback, out);
    out << ", ";
  }

  // member: outer_error
  {
    out << "outer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_error, out);
    out << ", ";
  }

  // member: outer_error_sum
  {
    out << "outer_error_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_error_sum, out);
    out << ", ";
  }

  // member: outer_last_error
  {
    out << "outer_last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_last_error, out);
    out << ", ";
  }

  // member: inner_pout
  {
    out << "inner_pout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_pout, out);
    out << ", ";
  }

  // member: inner_iout
  {
    out << "inner_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_iout, out);
    out << ", ";
  }

  // member: inner_dout
  {
    out << "inner_dout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_dout, out);
    out << ", ";
  }

  // member: inner_out
  {
    out << "inner_out: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_out, out);
    out << ", ";
  }

  // member: outer_pout
  {
    out << "outer_pout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_pout, out);
    out << ", ";
  }

  // member: outer_iout
  {
    out << "outer_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_iout, out);
    out << ", ";
  }

  // member: outer_dout
  {
    out << "outer_dout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_dout, out);
    out << ", ";
  }

  // member: outer_out
  {
    out << "outer_out: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_out, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DualLoopPIDWithFilter & msg,
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

  // member: inner_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_kp, out);
    out << "\n";
  }

  // member: inner_ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_ki, out);
    out << "\n";
  }

  // member: inner_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_kd, out);
    out << "\n";
  }

  // member: inner_p_filter_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_p_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_p_filter_coefficient, out);
    out << "\n";
  }

  // member: inner_d_filter_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_d_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_d_filter_coefficient, out);
    out << "\n";
  }

  // member: outer_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_kp, out);
    out << "\n";
  }

  // member: outer_ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_ki, out);
    out << "\n";
  }

  // member: outer_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_kd, out);
    out << "\n";
  }

  // member: outer_p_filter_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_p_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_p_filter_coefficient, out);
    out << "\n";
  }

  // member: outer_d_filter_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_d_filter_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_d_filter_coefficient, out);
    out << "\n";
  }

  // member: inner_max_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_max_out: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_max_out, out);
    out << "\n";
  }

  // member: inner_max_iout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_max_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_max_iout, out);
    out << "\n";
  }

  // member: outer_max_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_max_out: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_max_out, out);
    out << "\n";
  }

  // member: outer_max_iout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_max_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_max_iout, out);
    out << "\n";
  }

  // member: inner_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_set: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_set, out);
    out << "\n";
  }

  // member: inner_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_feedback, out);
    out << "\n";
  }

  // member: inner_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_error: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_error, out);
    out << "\n";
  }

  // member: inner_error_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_error_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_error_sum, out);
    out << "\n";
  }

  // member: inner_last_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_last_error, out);
    out << "\n";
  }

  // member: outer_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_set: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_set, out);
    out << "\n";
  }

  // member: outer_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_feedback, out);
    out << "\n";
  }

  // member: outer_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_error, out);
    out << "\n";
  }

  // member: outer_error_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_error_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_error_sum, out);
    out << "\n";
  }

  // member: outer_last_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_last_error: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_last_error, out);
    out << "\n";
  }

  // member: inner_pout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_pout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_pout, out);
    out << "\n";
  }

  // member: inner_iout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_iout, out);
    out << "\n";
  }

  // member: inner_dout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_dout: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_dout, out);
    out << "\n";
  }

  // member: inner_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_out: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_out, out);
    out << "\n";
  }

  // member: outer_pout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_pout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_pout, out);
    out << "\n";
  }

  // member: outer_iout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_iout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_iout, out);
    out << "\n";
  }

  // member: outer_dout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_dout: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_dout, out);
    out << "\n";
  }

  // member: outer_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outer_out: ";
    rosidl_generator_traits::value_to_yaml(msg.outer_out, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DualLoopPIDWithFilter & msg, bool use_flow_style = false)
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
  const sentry_msgs::msg::DualLoopPIDWithFilter & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::DualLoopPIDWithFilter & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::DualLoopPIDWithFilter>()
{
  return "sentry_msgs::msg::DualLoopPIDWithFilter";
}

template<>
inline const char * name<sentry_msgs::msg::DualLoopPIDWithFilter>()
{
  return "sentry_msgs/msg/DualLoopPIDWithFilter";
}

template<>
struct has_fixed_size<sentry_msgs::msg::DualLoopPIDWithFilter>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sentry_msgs::msg::DualLoopPIDWithFilter>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sentry_msgs::msg::DualLoopPIDWithFilter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__TRAITS_HPP_
