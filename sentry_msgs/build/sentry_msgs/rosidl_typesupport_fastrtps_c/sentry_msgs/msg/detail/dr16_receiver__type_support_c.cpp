// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sentry_msgs:msg/DR16Receiver.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/dr16_receiver__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sentry_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sentry_msgs/msg/detail/dr16_receiver__struct.h"
#include "sentry_msgs/msg/detail/dr16_receiver__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sentry_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sentry_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sentry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DR16Receiver__ros_msg_type = sentry_msgs__msg__DR16Receiver;

static bool _DR16Receiver__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DR16Receiver__ros_msg_type * ros_message = static_cast<const _DR16Receiver__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: ch_left_x
  {
    cdr << ros_message->ch_left_x;
  }

  // Field name: ch_left_y
  {
    cdr << ros_message->ch_left_y;
  }

  // Field name: ch_right_x
  {
    cdr << ros_message->ch_right_x;
  }

  // Field name: ch_right_y
  {
    cdr << ros_message->ch_right_y;
  }

  // Field name: ch_wheel
  {
    cdr << ros_message->ch_wheel;
  }

  // Field name: sw_left
  {
    cdr << ros_message->sw_left;
  }

  // Field name: sw_right
  {
    cdr << ros_message->sw_right;
  }

  // Field name: mouse_x
  {
    cdr << ros_message->mouse_x;
  }

  // Field name: mouse_y
  {
    cdr << ros_message->mouse_y;
  }

  // Field name: mouse_z
  {
    cdr << ros_message->mouse_z;
  }

  // Field name: mouse_press_l
  {
    cdr << (ros_message->mouse_press_l ? true : false);
  }

  // Field name: mouse_press_r
  {
    cdr << (ros_message->mouse_press_r ? true : false);
  }

  // Field name: key_w
  {
    cdr << (ros_message->key_w ? true : false);
  }

  // Field name: key_s
  {
    cdr << (ros_message->key_s ? true : false);
  }

  // Field name: key_a
  {
    cdr << (ros_message->key_a ? true : false);
  }

  // Field name: key_d
  {
    cdr << (ros_message->key_d ? true : false);
  }

  // Field name: key_shift
  {
    cdr << (ros_message->key_shift ? true : false);
  }

  // Field name: key_ctrl
  {
    cdr << (ros_message->key_ctrl ? true : false);
  }

  // Field name: key_q
  {
    cdr << (ros_message->key_q ? true : false);
  }

  // Field name: key_e
  {
    cdr << (ros_message->key_e ? true : false);
  }

  // Field name: key_r
  {
    cdr << (ros_message->key_r ? true : false);
  }

  // Field name: key_f
  {
    cdr << (ros_message->key_f ? true : false);
  }

  // Field name: key_g
  {
    cdr << (ros_message->key_g ? true : false);
  }

  // Field name: key_z
  {
    cdr << (ros_message->key_z ? true : false);
  }

  // Field name: key_x
  {
    cdr << (ros_message->key_x ? true : false);
  }

  // Field name: key_c
  {
    cdr << (ros_message->key_c ? true : false);
  }

  // Field name: key_v
  {
    cdr << (ros_message->key_v ? true : false);
  }

  // Field name: key_b
  {
    cdr << (ros_message->key_b ? true : false);
  }

  return true;
}

static bool _DR16Receiver__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DR16Receiver__ros_msg_type * ros_message = static_cast<_DR16Receiver__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: ch_left_x
  {
    cdr >> ros_message->ch_left_x;
  }

  // Field name: ch_left_y
  {
    cdr >> ros_message->ch_left_y;
  }

  // Field name: ch_right_x
  {
    cdr >> ros_message->ch_right_x;
  }

  // Field name: ch_right_y
  {
    cdr >> ros_message->ch_right_y;
  }

  // Field name: ch_wheel
  {
    cdr >> ros_message->ch_wheel;
  }

  // Field name: sw_left
  {
    cdr >> ros_message->sw_left;
  }

  // Field name: sw_right
  {
    cdr >> ros_message->sw_right;
  }

  // Field name: mouse_x
  {
    cdr >> ros_message->mouse_x;
  }

  // Field name: mouse_y
  {
    cdr >> ros_message->mouse_y;
  }

  // Field name: mouse_z
  {
    cdr >> ros_message->mouse_z;
  }

  // Field name: mouse_press_l
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mouse_press_l = tmp ? true : false;
  }

  // Field name: mouse_press_r
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mouse_press_r = tmp ? true : false;
  }

  // Field name: key_w
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_w = tmp ? true : false;
  }

  // Field name: key_s
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_s = tmp ? true : false;
  }

  // Field name: key_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_a = tmp ? true : false;
  }

  // Field name: key_d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_d = tmp ? true : false;
  }

  // Field name: key_shift
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_shift = tmp ? true : false;
  }

  // Field name: key_ctrl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_ctrl = tmp ? true : false;
  }

  // Field name: key_q
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_q = tmp ? true : false;
  }

  // Field name: key_e
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_e = tmp ? true : false;
  }

  // Field name: key_r
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_r = tmp ? true : false;
  }

  // Field name: key_f
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_f = tmp ? true : false;
  }

  // Field name: key_g
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_g = tmp ? true : false;
  }

  // Field name: key_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_z = tmp ? true : false;
  }

  // Field name: key_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_x = tmp ? true : false;
  }

  // Field name: key_c
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_c = tmp ? true : false;
  }

  // Field name: key_v
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_v = tmp ? true : false;
  }

  // Field name: key_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_b = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentry_msgs
size_t get_serialized_size_sentry_msgs__msg__DR16Receiver(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DR16Receiver__ros_msg_type * ros_message = static_cast<const _DR16Receiver__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ch_left_x
  {
    size_t item_size = sizeof(ros_message->ch_left_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_left_y
  {
    size_t item_size = sizeof(ros_message->ch_left_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_right_x
  {
    size_t item_size = sizeof(ros_message->ch_right_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_right_y
  {
    size_t item_size = sizeof(ros_message->ch_right_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_wheel
  {
    size_t item_size = sizeof(ros_message->ch_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_left
  {
    size_t item_size = sizeof(ros_message->sw_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_right
  {
    size_t item_size = sizeof(ros_message->sw_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_x
  {
    size_t item_size = sizeof(ros_message->mouse_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_y
  {
    size_t item_size = sizeof(ros_message->mouse_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_z
  {
    size_t item_size = sizeof(ros_message->mouse_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_press_l
  {
    size_t item_size = sizeof(ros_message->mouse_press_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_press_r
  {
    size_t item_size = sizeof(ros_message->mouse_press_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_w
  {
    size_t item_size = sizeof(ros_message->key_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_s
  {
    size_t item_size = sizeof(ros_message->key_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_a
  {
    size_t item_size = sizeof(ros_message->key_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_d
  {
    size_t item_size = sizeof(ros_message->key_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_shift
  {
    size_t item_size = sizeof(ros_message->key_shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_ctrl
  {
    size_t item_size = sizeof(ros_message->key_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_q
  {
    size_t item_size = sizeof(ros_message->key_q);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_e
  {
    size_t item_size = sizeof(ros_message->key_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_r
  {
    size_t item_size = sizeof(ros_message->key_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_f
  {
    size_t item_size = sizeof(ros_message->key_f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_g
  {
    size_t item_size = sizeof(ros_message->key_g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_z
  {
    size_t item_size = sizeof(ros_message->key_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_x
  {
    size_t item_size = sizeof(ros_message->key_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_c
  {
    size_t item_size = sizeof(ros_message->key_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_v
  {
    size_t item_size = sizeof(ros_message->key_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_b
  {
    size_t item_size = sizeof(ros_message->key_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DR16Receiver__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sentry_msgs__msg__DR16Receiver(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentry_msgs
size_t max_serialized_size_sentry_msgs__msg__DR16Receiver(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ch_left_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ch_left_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ch_right_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ch_right_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ch_wheel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sw_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sw_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mouse_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mouse_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mouse_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mouse_press_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mouse_press_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_q
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_f
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_g
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentry_msgs__msg__DR16Receiver;
    is_plain =
      (
      offsetof(DataType, key_b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DR16Receiver__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sentry_msgs__msg__DR16Receiver(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DR16Receiver = {
  "sentry_msgs::msg",
  "DR16Receiver",
  _DR16Receiver__cdr_serialize,
  _DR16Receiver__cdr_deserialize,
  _DR16Receiver__get_serialized_size,
  _DR16Receiver__max_serialized_size
};

static rosidl_message_type_support_t _DR16Receiver__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DR16Receiver,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentry_msgs, msg, DR16Receiver)() {
  return &_DR16Receiver__type_support;
}

#if defined(__cplusplus)
}
#endif
