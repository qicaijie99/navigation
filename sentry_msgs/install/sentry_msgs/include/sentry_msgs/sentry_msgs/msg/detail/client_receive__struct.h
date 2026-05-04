// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/ClientReceive.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TARGET_ROBOT_ID_RED1_HERO'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED1_HERO = 1
};

/// Constant 'TARGET_ROBOT_ID_RED2_ENGINEER'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED2_ENGINEER = 2
};

/// Constant 'TARGET_ROBOT_ID_RED3_INFANTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED3_INFANTRY = 3
};

/// Constant 'TARGET_ROBOT_ID_RED4_INFANTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED4_INFANTRY = 4
};

/// Constant 'TARGET_ROBOT_ID_RED5_INFANTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED5_INFANTRY = 5
};

/// Constant 'TARGET_ROBOT_ID_RED6_AERIAL'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED6_AERIAL = 6
};

/// Constant 'TARGET_ROBOT_ID_RED7_SENTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED7_SENTRY = 7
};

/// Constant 'TARGET_ROBOT_ID_RED9_RADAR'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED9_RADAR = 9
};

/// Constant 'TARGET_ROBOT_ID_RED10_OUTPOST'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED10_OUTPOST = 10
};

/// Constant 'TARGET_ROBOT_ID_RED11_BASE'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_RED11_BASE = 11
};

/// Constant 'TARGET_ROBOT_ID_BLUE1_HERO'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE1_HERO = 101
};

/// Constant 'TARGET_ROBOT_ID_BLUE2_ENGINEER'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE2_ENGINEER = 102
};

/// Constant 'TARGET_ROBOT_ID_BLUE3_INFANTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE3_INFANTRY = 103
};

/// Constant 'TARGET_ROBOT_ID_BLUE4_INFANTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE4_INFANTRY = 104
};

/// Constant 'TARGET_ROBOT_ID_BLUE5_INFANTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE5_INFANTRY = 105
};

/// Constant 'TARGET_ROBOT_ID_BLUE6_AERIAL'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE6_AERIAL = 106
};

/// Constant 'TARGET_ROBOT_ID_BLUE7_SENTRY'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE7_SENTRY = 107
};

/// Constant 'TARGET_ROBOT_ID_BLUE9_RADAR'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE9_RADAR = 109
};

/// Constant 'TARGET_ROBOT_ID_BLUE10_OUTPOST'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE10_OUTPOST = 110
};

/// Constant 'TARGET_ROBOT_ID_BLUE11_BASE'.
enum
{
  sentry_msgs__msg__ClientReceive__TARGET_ROBOT_ID_BLUE11_BASE = 111
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ClientReceive in the package sentry_msgs.
/**
  * This message contains client data sent to the referee system
 */
typedef struct sentry_msgs__msg__ClientReceive
{
  std_msgs__msg__Header header;
  /// target position, in meter
  float target_position_x;
  float target_position_y;
  /// target robot id, see enum below
  uint16_t target_robot_id;
} sentry_msgs__msg__ClientReceive;

// Struct for a sequence of sentry_msgs__msg__ClientReceive.
typedef struct sentry_msgs__msg__ClientReceive__Sequence
{
  sentry_msgs__msg__ClientReceive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__ClientReceive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__STRUCT_H_
