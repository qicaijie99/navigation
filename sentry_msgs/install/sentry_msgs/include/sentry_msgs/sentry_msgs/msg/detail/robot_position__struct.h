// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/RobotPosition.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_POSITION__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_POSITION__STRUCT_H_

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

/// Struct defined in msg/RobotPosition in the package sentry_msgs.
/**
  * This message contains robot position data received from the referee system
 */
typedef struct sentry_msgs__msg__RobotPosition
{
  std_msgs__msg__Header header;
  /// position, in meters
  float x;
  float y;
  float z;
  /// yaw angle in radius
  float yaw;
} sentry_msgs__msg__RobotPosition;

// Struct for a sequence of sentry_msgs__msg__RobotPosition.
typedef struct sentry_msgs__msg__RobotPosition__Sequence
{
  sentry_msgs__msg__RobotPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__RobotPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_POSITION__STRUCT_H_
