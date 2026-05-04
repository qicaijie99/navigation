// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sentry_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/field_events__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sentry_msgs/msg/detail/field_events__struct.hpp"

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
  const sentry_msgs::msg::FieldEvents & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: supplier_1_occupation
  cdr << (ros_message.supplier_1_occupation ? true : false);
  // Member: supplier_2_occupation
  cdr << (ros_message.supplier_2_occupation ? true : false);
  // Member: supplier_3_occupation
  cdr << (ros_message.supplier_3_occupation ? true : false);
  // Member: power_rune_activation_point_occupation
  cdr << (ros_message.power_rune_activation_point_occupation ? true : false);
  // Member: small_power_rune_activation_status
  cdr << (ros_message.small_power_rune_activation_status ? true : false);
  // Member: big_power_rune_activation_status
  cdr << (ros_message.big_power_rune_activation_status ? true : false);
  // Member: r2b2_ground_occupation
  cdr << (ros_message.r2b2_ground_occupation ? true : false);
  // Member: r3b3_ground_occupation
  cdr << (ros_message.r3b3_ground_occupation ? true : false);
  // Member: r4b4_ground_occupation
  cdr << (ros_message.r4b4_ground_occupation ? true : false);
  // Member: base_has_shield
  cdr << (ros_message.base_has_shield ? true : false);
  // Member: outpost_alive
  cdr << (ros_message.outpost_alive ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sentry_msgs::msg::FieldEvents & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: supplier_1_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.supplier_1_occupation = tmp ? true : false;
  }

  // Member: supplier_2_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.supplier_2_occupation = tmp ? true : false;
  }

  // Member: supplier_3_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.supplier_3_occupation = tmp ? true : false;
  }

  // Member: power_rune_activation_point_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_rune_activation_point_occupation = tmp ? true : false;
  }

  // Member: small_power_rune_activation_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.small_power_rune_activation_status = tmp ? true : false;
  }

  // Member: big_power_rune_activation_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.big_power_rune_activation_status = tmp ? true : false;
  }

  // Member: r2b2_ground_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.r2b2_ground_occupation = tmp ? true : false;
  }

  // Member: r3b3_ground_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.r3b3_ground_occupation = tmp ? true : false;
  }

  // Member: r4b4_ground_occupation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.r4b4_ground_occupation = tmp ? true : false;
  }

  // Member: base_has_shield
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.base_has_shield = tmp ? true : false;
  }

  // Member: outpost_alive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.outpost_alive = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
get_serialized_size(
  const sentry_msgs::msg::FieldEvents & ros_message,
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
  // Member: supplier_1_occupation
  {
    size_t item_size = sizeof(ros_message.supplier_1_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supplier_2_occupation
  {
    size_t item_size = sizeof(ros_message.supplier_2_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supplier_3_occupation
  {
    size_t item_size = sizeof(ros_message.supplier_3_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_rune_activation_point_occupation
  {
    size_t item_size = sizeof(ros_message.power_rune_activation_point_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: small_power_rune_activation_status
  {
    size_t item_size = sizeof(ros_message.small_power_rune_activation_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: big_power_rune_activation_status
  {
    size_t item_size = sizeof(ros_message.big_power_rune_activation_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r2b2_ground_occupation
  {
    size_t item_size = sizeof(ros_message.r2b2_ground_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r3b3_ground_occupation
  {
    size_t item_size = sizeof(ros_message.r3b3_ground_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r4b4_ground_occupation
  {
    size_t item_size = sizeof(ros_message.r4b4_ground_occupation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_has_shield
  {
    size_t item_size = sizeof(ros_message.base_has_shield);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outpost_alive
  {
    size_t item_size = sizeof(ros_message.outpost_alive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_msgs
max_serialized_size_FieldEvents(
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

  // Member: supplier_1_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supplier_2_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supplier_3_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_rune_activation_point_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: small_power_rune_activation_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: big_power_rune_activation_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: r2b2_ground_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: r3b3_ground_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: r4b4_ground_occupation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: base_has_shield
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: outpost_alive
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
    using DataType = sentry_msgs::msg::FieldEvents;
    is_plain =
      (
      offsetof(DataType, outpost_alive) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FieldEvents__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sentry_msgs::msg::FieldEvents *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FieldEvents__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sentry_msgs::msg::FieldEvents *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FieldEvents__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sentry_msgs::msg::FieldEvents *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FieldEvents__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FieldEvents(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FieldEvents__callbacks = {
  "sentry_msgs::msg",
  "FieldEvents",
  _FieldEvents__cdr_serialize,
  _FieldEvents__cdr_deserialize,
  _FieldEvents__get_serialized_size,
  _FieldEvents__max_serialized_size
};

static rosidl_message_type_support_t _FieldEvents__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FieldEvents__callbacks,
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
get_message_type_support_handle<sentry_msgs::msg::FieldEvents>()
{
  return &sentry_msgs::msg::typesupport_fastrtps_cpp::_FieldEvents__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentry_msgs, msg, FieldEvents)() {
  return &sentry_msgs::msg::typesupport_fastrtps_cpp::_FieldEvents__handle;
}

#ifdef __cplusplus
}
#endif
