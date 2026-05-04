// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sentry_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/dual_loop_pid_with_filter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sentry_msgs/msg/detail/dual_loop_pid_with_filter__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace sentry_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
cdr_serialize(
  const sentry_msgs::msg::DualLoopPIDWithFilter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: inner_kp
  cdr << ros_message.inner_kp;
  // Member: inner_ki
  cdr << ros_message.inner_ki;
  // Member: inner_kd
  cdr << ros_message.inner_kd;
  // Member: inner_p_filter_coefficient
  cdr << ros_message.inner_p_filter_coefficient;
  // Member: inner_d_filter_coefficient
  cdr << ros_message.inner_d_filter_coefficient;
  // Member: outer_kp
  cdr << ros_message.outer_kp;
  // Member: outer_ki
  cdr << ros_message.outer_ki;
  // Member: outer_kd
  cdr << ros_message.outer_kd;
  // Member: outer_p_filter_coefficient
  cdr << ros_message.outer_p_filter_coefficient;
  // Member: outer_d_filter_coefficient
  cdr << ros_message.outer_d_filter_coefficient;
  // Member: inner_max_out
  cdr << ros_message.inner_max_out;
  // Member: inner_max_iout
  cdr << ros_message.inner_max_iout;
  // Member: outer_max_out
  cdr << ros_message.outer_max_out;
  // Member: outer_max_iout
  cdr << ros_message.outer_max_iout;
  // Member: inner_set
  cdr << ros_message.inner_set;
  // Member: inner_feedback
  cdr << ros_message.inner_feedback;
  // Member: inner_error
  cdr << ros_message.inner_error;
  // Member: inner_error_sum
  cdr << ros_message.inner_error_sum;
  // Member: inner_last_error
  cdr << ros_message.inner_last_error;
  // Member: outer_set
  cdr << ros_message.outer_set;
  // Member: outer_feedback
  cdr << ros_message.outer_feedback;
  // Member: outer_error
  cdr << ros_message.outer_error;
  // Member: outer_error_sum
  cdr << ros_message.outer_error_sum;
  // Member: outer_last_error
  cdr << ros_message.outer_last_error;
  // Member: inner_pout
  cdr << ros_message.inner_pout;
  // Member: inner_iout
  cdr << ros_message.inner_iout;
  // Member: inner_dout
  cdr << ros_message.inner_dout;
  // Member: inner_out
  cdr << ros_message.inner_out;
  // Member: outer_pout
  cdr << ros_message.outer_pout;
  // Member: outer_iout
  cdr << ros_message.outer_iout;
  // Member: outer_dout
  cdr << ros_message.outer_dout;
  // Member: outer_out
  cdr << ros_message.outer_out;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sentry_msgs::msg::DualLoopPIDWithFilter & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: inner_kp
  cdr >> ros_message.inner_kp;

  // Member: inner_ki
  cdr >> ros_message.inner_ki;

  // Member: inner_kd
  cdr >> ros_message.inner_kd;

  // Member: inner_p_filter_coefficient
  cdr >> ros_message.inner_p_filter_coefficient;

  // Member: inner_d_filter_coefficient
  cdr >> ros_message.inner_d_filter_coefficient;

  // Member: outer_kp
  cdr >> ros_message.outer_kp;

  // Member: outer_ki
  cdr >> ros_message.outer_ki;

  // Member: outer_kd
  cdr >> ros_message.outer_kd;

  // Member: outer_p_filter_coefficient
  cdr >> ros_message.outer_p_filter_coefficient;

  // Member: outer_d_filter_coefficient
  cdr >> ros_message.outer_d_filter_coefficient;

  // Member: inner_max_out
  cdr >> ros_message.inner_max_out;

  // Member: inner_max_iout
  cdr >> ros_message.inner_max_iout;

  // Member: outer_max_out
  cdr >> ros_message.outer_max_out;

  // Member: outer_max_iout
  cdr >> ros_message.outer_max_iout;

  // Member: inner_set
  cdr >> ros_message.inner_set;

  // Member: inner_feedback
  cdr >> ros_message.inner_feedback;

  // Member: inner_error
  cdr >> ros_message.inner_error;

  // Member: inner_error_sum
  cdr >> ros_message.inner_error_sum;

  // Member: inner_last_error
  cdr >> ros_message.inner_last_error;

  // Member: outer_set
  cdr >> ros_message.outer_set;

  // Member: outer_feedback
  cdr >> ros_message.outer_feedback;

  // Member: outer_error
  cdr >> ros_message.outer_error;

  // Member: outer_error_sum
  cdr >> ros_message.outer_error_sum;

  // Member: outer_last_error
  cdr >> ros_message.outer_last_error;

  // Member: inner_pout
  cdr >> ros_message.inner_pout;

  // Member: inner_iout
  cdr >> ros_message.inner_iout;

  // Member: inner_dout
  cdr >> ros_message.inner_dout;

  // Member: inner_out
  cdr >> ros_message.inner_out;

  // Member: outer_pout
  cdr >> ros_message.outer_pout;

  // Member: outer_iout
  cdr >> ros_message.outer_iout;

  // Member: outer_dout
  cdr >> ros_message.outer_dout;

  // Member: outer_out
  cdr >> ros_message.outer_out;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
get_serialized_size(
  const sentry_msgs::msg::DualLoopPIDWithFilter & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: inner_kp
  {
    size_t item_size = sizeof(ros_message.inner_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_ki
  {
    size_t item_size = sizeof(ros_message.inner_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_kd
  {
    size_t item_size = sizeof(ros_message.inner_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_p_filter_coefficient
  {
    size_t item_size = sizeof(ros_message.inner_p_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_d_filter_coefficient
  {
    size_t item_size = sizeof(ros_message.inner_d_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_kp
  {
    size_t item_size = sizeof(ros_message.outer_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_ki
  {
    size_t item_size = sizeof(ros_message.outer_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_kd
  {
    size_t item_size = sizeof(ros_message.outer_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_p_filter_coefficient
  {
    size_t item_size = sizeof(ros_message.outer_p_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_d_filter_coefficient
  {
    size_t item_size = sizeof(ros_message.outer_d_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_max_out
  {
    size_t item_size = sizeof(ros_message.inner_max_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_max_iout
  {
    size_t item_size = sizeof(ros_message.inner_max_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_max_out
  {
    size_t item_size = sizeof(ros_message.outer_max_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_max_iout
  {
    size_t item_size = sizeof(ros_message.outer_max_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_set
  {
    size_t item_size = sizeof(ros_message.inner_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_feedback
  {
    size_t item_size = sizeof(ros_message.inner_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_error
  {
    size_t item_size = sizeof(ros_message.inner_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_error_sum
  {
    size_t item_size = sizeof(ros_message.inner_error_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_last_error
  {
    size_t item_size = sizeof(ros_message.inner_last_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_set
  {
    size_t item_size = sizeof(ros_message.outer_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_feedback
  {
    size_t item_size = sizeof(ros_message.outer_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_error
  {
    size_t item_size = sizeof(ros_message.outer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_error_sum
  {
    size_t item_size = sizeof(ros_message.outer_error_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_last_error
  {
    size_t item_size = sizeof(ros_message.outer_last_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_pout
  {
    size_t item_size = sizeof(ros_message.inner_pout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_iout
  {
    size_t item_size = sizeof(ros_message.inner_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_dout
  {
    size_t item_size = sizeof(ros_message.inner_dout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inner_out
  {
    size_t item_size = sizeof(ros_message.inner_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_pout
  {
    size_t item_size = sizeof(ros_message.outer_pout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_iout
  {
    size_t item_size = sizeof(ros_message.outer_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_dout
  {
    size_t item_size = sizeof(ros_message.outer_dout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outer_out
  {
    size_t item_size = sizeof(ros_message.outer_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
max_serialized_size_DualLoopPIDWithFilter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: inner_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_p_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_d_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_p_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_d_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_max_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_max_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_max_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_max_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_error_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_last_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_error_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_last_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_pout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_dout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: inner_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_pout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_dout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outer_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentry_msgs::msg::DualLoopPIDWithFilter;
    is_plain =
      (
      offsetof(DataType, outer_out) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DualLoopPIDWithFilter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sentry_msgs::msg::DualLoopPIDWithFilter *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DualLoopPIDWithFilter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sentry_msgs::msg::DualLoopPIDWithFilter *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DualLoopPIDWithFilter__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sentry_msgs::msg::DualLoopPIDWithFilter *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DualLoopPIDWithFilter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DualLoopPIDWithFilter(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DualLoopPIDWithFilter__callbacks = {
  "sentry_msgs::msg",
  "DualLoopPIDWithFilter",
  _DualLoopPIDWithFilter__cdr_serialize,
  _DualLoopPIDWithFilter__cdr_deserialize,
  _DualLoopPIDWithFilter__get_serialized_size,
  _DualLoopPIDWithFilter__max_serialized_size
};

static rosidl_message_type_support_t _DualLoopPIDWithFilter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DualLoopPIDWithFilter__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sentry_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sentry_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sentry_msgs::msg::DualLoopPIDWithFilter>()
{
  return &sentry_msgs::msg::typesupport_fastrtps_cpp::_DualLoopPIDWithFilter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentry_msgs, msg, DualLoopPIDWithFilter)() {
  return &sentry_msgs::msg::typesupport_fastrtps_cpp::_DualLoopPIDWithFilter__handle;
}

#ifdef __cplusplus
}
#endif
