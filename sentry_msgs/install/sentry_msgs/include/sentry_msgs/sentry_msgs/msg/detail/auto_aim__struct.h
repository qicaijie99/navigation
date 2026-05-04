// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TARGET_ID0_NONE'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID0_NONE = 0
};

/// Constant 'TARGET_ID1_HERO'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID1_HERO = 1
};

/// Constant 'TARGET_ID2_ENGINEER'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID2_ENGINEER = 2
};

/// Constant 'TARGET_ID3_INFANTRY'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID3_INFANTRY = 3
};

/// Constant 'TARGET_ID4_INFANTRY'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID4_INFANTRY = 4
};

/// Constant 'TARGET_ID5_INFANTRY'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID5_INFANTRY = 5
};

/// Constant 'TARGET_ID6_OUTPOST'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID6_OUTPOST = 6
};

/// Constant 'TARGET_ID7_SENTRY'.
enum
{
  sentry_msgs__msg__AutoAIM__TARGET_ID7_SENTRY = 7
};

/// Constant 'VISION_MODE_ARMOR'.
enum
{
  sentry_msgs__msg__AutoAIM__VISION_MODE_ARMOR = 1
};

/// Constant 'VISION_MODE_SMALL'.
enum
{
  sentry_msgs__msg__AutoAIM__VISION_MODE_SMALL = 2
};

/// Constant 'VISION_MODE_BIG'.
enum
{
  sentry_msgs__msg__AutoAIM__VISION_MODE_BIG = 3
};

/// Constant 'VISION_MODE_TAG'.
enum
{
  sentry_msgs__msg__AutoAIM__VISION_MODE_TAG = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AutoAIM in the package sentry_msgs.
/**
  * This message contains auto aiming data
 */
typedef struct sentry_msgs__msg__AutoAIM
{
  std_msgs__msg__Header header;
  float pitch;
  float yaw;
  /// auto aiming target, see enum below
  uint8_t target_id;
  /// auto aiming target distance
  float target_distance;
  /// auto aiming mode, see enum below
  uint8_t vision_mode;
} sentry_msgs__msg__AutoAIM;

// Struct for a sequence of sentry_msgs__msg__AutoAIM.
typedef struct sentry_msgs__msg__AutoAIM__Sequence
{
  sentry_msgs__msg__AutoAIM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__AutoAIM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_
