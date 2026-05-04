// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/RobotBuff.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__STRUCT_H_

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

/// Struct defined in msg/RobotBuff in the package sentry_msgs.
/**
  * This message contains power and rune buff data received from the referee system
 */
typedef struct sentry_msgs__msg__RobotBuff
{
  std_msgs__msg__Header header;
  bool robot_replenishing_blood;
  bool shooter_cooling_acceleration;
  bool robot_defense_bonus;
  bool robot_attack_bonus;
} sentry_msgs__msg__RobotBuff;

// Struct for a sequence of sentry_msgs__msg__RobotBuff.
typedef struct sentry_msgs__msg__RobotBuff__Sequence
{
  sentry_msgs__msg__RobotBuff * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__RobotBuff__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_BUFF__STRUCT_H_
