// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__GAME_RESULT__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__GAME_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WINNER_DRAW'.
enum
{
  sentry_msgs__msg__GameResult__WINNER_DRAW = 0
};

/// Constant 'WINNER_RED'.
enum
{
  sentry_msgs__msg__GameResult__WINNER_RED = 1
};

/// Constant 'WINNER_BLUE'.
enum
{
  sentry_msgs__msg__GameResult__WINNER_BLUE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GameResult in the package sentry_msgs.
/**
  * This message contains game result data received from the referee system
 */
typedef struct sentry_msgs__msg__GameResult
{
  std_msgs__msg__Header header;
  /// winner, see enum below
  uint8_t winner;
} sentry_msgs__msg__GameResult;

// Struct for a sequence of sentry_msgs__msg__GameResult.
typedef struct sentry_msgs__msg__GameResult__Sequence
{
  sentry_msgs__msg__GameResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__GameResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__GAME_RESULT__STRUCT_H_
