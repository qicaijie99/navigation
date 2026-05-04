// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/DR16Receiver.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SW_UP'.
/**
  * switch state definition
 */
enum
{
  sentry_msgs__msg__DR16Receiver__SW_UP = 1
};

/// Constant 'SW_DOWN'.
enum
{
  sentry_msgs__msg__DR16Receiver__SW_DOWN = 2
};

/// Constant 'SW_MID'.
enum
{
  sentry_msgs__msg__DR16Receiver__SW_MID = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DR16Receiver in the package sentry_msgs.
/**
  * This message contains data received by the DJI DR16 receiver
 */
typedef struct sentry_msgs__msg__DR16Receiver
{
  std_msgs__msg__Header header;
  /// joysticks
  float ch_left_x;
  float ch_left_y;
  float ch_right_x;
  float ch_right_y;
  float ch_wheel;
  /// switch
  uint8_t sw_left;
  uint8_t sw_right;
  /// mouse
  float mouse_x;
  float mouse_y;
  float mouse_z;
  bool mouse_press_l;
  bool mouse_press_r;
  /// key board
  bool key_w;
  bool key_s;
  bool key_a;
  bool key_d;
  bool key_shift;
  bool key_ctrl;
  bool key_q;
  bool key_e;
  bool key_r;
  bool key_f;
  bool key_g;
  bool key_z;
  bool key_x;
  bool key_c;
  bool key_v;
  bool key_b;
} sentry_msgs__msg__DR16Receiver;

// Struct for a sequence of sentry_msgs__msg__DR16Receiver.
typedef struct sentry_msgs__msg__DR16Receiver__Sequence
{
  sentry_msgs__msg__DR16Receiver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__DR16Receiver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__STRUCT_H_
