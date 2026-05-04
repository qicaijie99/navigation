// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/RobotHP.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_H_

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

/// Struct defined in msg/RobotHP in the package sentry_msgs.
/**
  * This message contains robot HP data received from the referee system
 */
typedef struct sentry_msgs__msg__RobotHP
{
  std_msgs__msg__Header header;
  /// red team
  uint16_t red_1_hero_hp;
  uint16_t red_2_engineer_hp;
  uint16_t red_3_infantry_hp;
  uint16_t red_4_infantry_hp;
  uint16_t red_5_infantry_hp;
  uint16_t red_7_sentry_hp;
  uint16_t red_outpost_hp;
  uint16_t red_base_hp;
  /// blue team
  uint16_t blue_1_hero_hp;
  uint16_t blue_2_engineer_hp;
  uint16_t blue_3_infantry_hp;
  uint16_t blue_4_infantry_hp;
  uint16_t blue_5_infantry_hp;
  uint16_t blue_7_sentry_hp;
  uint16_t blue_outpost_hp;
  uint16_t blue_base_hp;
} sentry_msgs__msg__RobotHP;

// Struct for a sequence of sentry_msgs__msg__RobotHP.
typedef struct sentry_msgs__msg__RobotHP__Sequence
{
  sentry_msgs__msg__RobotHP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__RobotHP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_HP__STRUCT_H_
