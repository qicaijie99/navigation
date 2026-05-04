// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GAME_TYPE_RMUC'.
enum
{
  sentry_msgs__msg__GameStatus__GAME_TYPE_RMUC = 1
};

/// Constant 'GAME_TYPE_RMUT'.
enum
{
  sentry_msgs__msg__GameStatus__GAME_TYPE_RMUT = 2
};

/// Constant 'GAME_TYPE_RMUA'.
enum
{
  sentry_msgs__msg__GameStatus__GAME_TYPE_RMUA = 3
};

/// Constant 'GAME_TYPE_RMUL3V3'.
enum
{
  sentry_msgs__msg__GameStatus__GAME_TYPE_RMUL3V3 = 4
};

/// Constant 'GAME_TYPE_RMUL1V1'.
enum
{
  sentry_msgs__msg__GameStatus__GAME_TYPE_RMUL1V1 = 5
};

/// Constant 'PROGRESS_UNSTART'.
enum
{
  sentry_msgs__msg__GameStatus__PROGRESS_UNSTART = 0
};

/// Constant 'PROGRESS_PREPARE'.
enum
{
  sentry_msgs__msg__GameStatus__PROGRESS_PREPARE = 1
};

/// Constant 'PROGRESS_SELFCHECK'.
enum
{
  sentry_msgs__msg__GameStatus__PROGRESS_SELFCHECK = 2
};

/// Constant 'PROGRESS_5SCOUNTDOWN'.
enum
{
  sentry_msgs__msg__GameStatus__PROGRESS_5SCOUNTDOWN = 3
};

/// Constant 'PROGRESS_BATTLE'.
enum
{
  sentry_msgs__msg__GameStatus__PROGRESS_BATTLE = 4
};

/// Constant 'PROGRESS_CALCULATING'.
enum
{
  sentry_msgs__msg__GameStatus__PROGRESS_CALCULATING = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GameStatus in the package sentry_msgs.
/**
  * This message contains game status data received from the referee system
 */
typedef struct sentry_msgs__msg__GameStatus
{
  std_msgs__msg__Header header;
  /// game type, see enum below
  uint8_t game_type;
  /// game progress, see enum below
  uint8_t game_progress;
  /// the remaining time of the current phase, in seconds
  uint16_t stage_remain_time;
  /// unix timestamp
  uint64_t sync_time_stamp;
} sentry_msgs__msg__GameStatus;

// Struct for a sequence of sentry_msgs__msg__GameStatus.
typedef struct sentry_msgs__msg__GameStatus__Sequence
{
  sentry_msgs__msg__GameStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__GameStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
