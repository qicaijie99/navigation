// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BULLET_TYPE_17MM'.
enum
{
  sentry_msgs__msg__ShootData__BULLET_TYPE_17MM = 1
};

/// Constant 'BULLET_TYPE_42MM'.
enum
{
  sentry_msgs__msg__ShootData__BULLET_TYPE_42MM = 2
};

/// Constant 'SHOOTER_ID_17MM_ID1'.
enum
{
  sentry_msgs__msg__ShootData__SHOOTER_ID_17MM_ID1 = 1
};

/// Constant 'SHOOTER_ID_17MM_ID2'.
enum
{
  sentry_msgs__msg__ShootData__SHOOTER_ID_17MM_ID2 = 2
};

/// Constant 'SHOOTER_ID_42MM_ID1'.
enum
{
  sentry_msgs__msg__ShootData__SHOOTER_ID_42MM_ID1 = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ShootData in the package sentry_msgs.
/**
  * This message contains shoot data received from the referee system
 */
typedef struct sentry_msgs__msg__ShootData
{
  std_msgs__msg__Header header;
  /// bullet type, see enum below
  uint8_t bullet_type;
  /// shooter id, see enum below
  uint8_t shooter_id;
  /// bullet freq, in hz
  uint8_t bullet_freq;
  /// bullet speed, in m/s
  float bullet_speed;
} sentry_msgs__msg__ShootData;

// Struct for a sequence of sentry_msgs__msg__ShootData.
typedef struct sentry_msgs__msg__ShootData__Sequence
{
  sentry_msgs__msg__ShootData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__ShootData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_H_
