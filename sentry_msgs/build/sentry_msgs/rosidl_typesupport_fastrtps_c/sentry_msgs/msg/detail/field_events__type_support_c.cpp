// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sentry_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/field_events__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sentry_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sentry_msgs/msg/detail/field_events__struct.h"
#include "sentry_msgs/msg/detail/field_events__functions.h"
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


using _FieldEvents__ros_msg_type = sentry_msgs__msg__FieldEvents;

static bool _FieldEvents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FieldEvents__ros_msg_type * ros_message = static_cast<const _FieldEvents__ros_msg_type *>(untyped_ros_message);
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

  // Field name: supplier_1_occupation
  {
    cdr << (ros_message->supplier_1_occupation ? true : false);
  }

  // Field name: supplier_2_occupation
  {
    cdr << (ros_message->supplier_2_occupation ? true : false);
  }

  // Field name: supplier_3_occupation
  {
    cdr << (ros_message->supplier_3_occupation ? true : false);
  }

  // Field name: power_rune_activation_point_occupation
  {
    cdr << (ros_message->power_rune_activation_point_occupation ? true : false);
  }

  // Field name: small_power_rune_activation_status
  {
    cdr << (ros_message->small_power_rune_activation_status ? true : false);
  }

  // Field name: big_power_rune_activation_status
  {
    cdr << (ros_message->big_power_rune_activation_status ? true : false);
  }

  // Field name: r2b2_ground_occupation
  {
    cdr << (ros_message->r2b2_ground_occupation ? true : false);
  }

  // Field name: r3b3_ground_occupation
  {
    cdr << (ros_message->r3b3_ground_occupation ? true : false);
  }

  // Field name: r4b4_ground_occupation
  {
    cdr << (ros_message->r4b4_ground_occupation ? true : false);
  }

  // Field name: base_has_shield
  {
    cdr << (ros_message->base_has_shield ? true : false);
  }

  // Field name: outpost_alive
  {
    cdr << (ros_message->outpost_alive ? true : false);
  }

  return true;
}

static bool _FieldEvents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FieldEvents__ros_msg_type * ros_message = static_cast<_FieldEvents__ros_msg_type *>(untyped_ros_message);
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

  // Field name: supplier_1_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->supplier_1_occupation = tmp ? true : false;
  }

  // Field name: supplier_2_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->supplier_2_occupation = tmp ? true : false;
  }

  // Field name: supplier_3_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->supplier_3_occupation = tmp ? true : false;
  }

  // Field name: power_rune_activation_point_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_rune_activation_point_occupation = tmp ? true : false;
  }

  // Field name: small_power_rune_activation_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->small_power_rune_activation_status = tmp ? true : false;
  }

  // Field name: big_power_rune_activation_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->big_power_rune_activation_status = tmp ? true : false;
  }

  // Field name: r2b2_ground_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->r2b2_ground_occupation = tmp ? true : false;
  }

  // Field name: r3b3_ground_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->r3b3_ground_occupation = tmp ? true : false;
  }

  // Field name: r4b4_ground_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->r4b4_ground_occupation = tmp ? true : false;
  }

  // Field name: base_has_shield
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->base_has_shield = tmp ? true : false;
  }

  // Field name: outpost_alive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->outpost_alive = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentry_msgs
size_t get_serialized_size_sentry_msgs__msg__FieldEvents(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldEvents__ros_msg_type * ros_message = static_cast<const _FieldEvents__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name supplier_1_occupation
  {
    size_t item_size = sizeof(ros_message->supplier_1_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supplier_2_occupation
  {
    size_t item_size = sizeof(ros_message->supplier_2_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supplier_3_occupation
  {
    size_t item_size = sizeof(ros_message->supplier_3_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_rune_activation_point_occupation
  {
    size_t item_size = sizeof(ros_message->power_rune_activation_point_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name small_power_rune_activation_status
  {
    size_t item_size = sizeof(ros_message->small_power_rune_activation_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name big_power_rune_activation_status
  {
    size_t item_size = sizeof(ros_message->big_power_rune_activation_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r2b2_ground_occupation
  {
    size_t item_size = sizeof(ros_message->r2b2_ground_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r3b3_ground_occupation
  {
    size_t item_size = sizeof(ros_message->r3b3_ground_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r4b4_ground_occupation
  {
    size_t item_size = sizeof(ros_message->r4b4_ground_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_has_shield
  {
    size_t item_size = sizeof(ros_message->base_has_shield);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outpost_alive
  {
    size_t item_size = sizeof(ros_message->outpost_alive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FieldEvents__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sentry_msgs__msg__FieldEvents(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sentry_msgs
size_t max_serialized_size_sentry_msgs__msg__FieldEvents(
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
  // member: supplier_1_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supplier_2_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supplier_3_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_rune_activation_point_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: small_power_rune_activation_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: big_power_rune_activation_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r2b2_ground_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r3b3_ground_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r4b4_ground_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: base_has_shield
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: outpost_alive
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
    using DataType = sentry_msgs__msg__FieldEvents;
    is_plain =
      (
      offsetof(DataType, outpost_alive) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FieldEvents__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sentry_msgs__msg__FieldEvents(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FieldEvents = {
  "sentry_msgs::msg",
  "FieldEvents",
  _FieldEvents__cdr_serialize,
  _FieldEvents__cdr_deserialize,
  _FieldEvents__get_serialized_size,
  _FieldEvents__max_serialized_size
};

static rosidl_message_type_support_t _FieldEvents__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FieldEvents,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sentry_msgs, msg, FieldEvents)() {
  return &_FieldEvents__type_support;
}

#if defined(__cplusplus)
}
#endif
