// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_

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

/// Struct defined in msg/BulletRemaining in the package sentry_msgs.
/**
  * This message contains bullet remaining data received from the referee system
 */
typedef struct sentry_msgs__msg__BulletRemaining
{
  std_msgs__msg__Header header;
  uint16_t remaining_17mm_num;
  uint16_t remaining_42mm_num;
  uint16_t remaining_coin_num;
} sentry_msgs__msg__BulletRemaining;

// Struct for a sequence of sentry_msgs__msg__BulletRemaining.
typedef struct sentry_msgs__msg__BulletRemaining__Sequence
{
  sentry_msgs__msg__BulletRemaining * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__BulletRemaining__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
