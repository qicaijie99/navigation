// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/FieldEvents in the package sentry_msgs.
/**
  * This message contains field events data received from the referee system
 */
typedef struct sentry_msgs__msg__FieldEvents
{
  std_msgs__msg__Header header;
  /// supply station occupation status
  bool supplier_1_occupation;
  bool supplier_2_occupation;
  bool supplier_3_occupation;
  /// power rune status
  bool power_rune_activation_point_occupation;
  bool small_power_rune_activation_status;
  bool big_power_rune_activation_status;
  /// trapezoid-shaped elevated ground status
  bool r2b2_ground_occupation;
  bool r3b3_ground_occupation;
  bool r4b4_ground_occupation;
  /// shield status of base
  bool base_has_shield;
  /// outpost status
  bool outpost_alive;
} sentry_msgs__msg__FieldEvents;

// Struct for a sequence of sentry_msgs__msg__FieldEvents.
typedef struct sentry_msgs__msg__FieldEvents__Sequence
{
  sentry_msgs__msg__FieldEvents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__FieldEvents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__FIELD_EVENTS__STRUCT_H_
