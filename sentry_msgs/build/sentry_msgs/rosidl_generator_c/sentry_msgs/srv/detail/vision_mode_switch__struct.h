// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_H_
#define SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_ARMOR'.
enum
{
  sentry_msgs__srv__VisionModeSwitch_Request__MODE_ARMOR = 1
};

/// Constant 'MODE_SMALL'.
enum
{
  sentry_msgs__srv__VisionModeSwitch_Request__MODE_SMALL = 2
};

/// Constant 'MODE_BIG'.
enum
{
  sentry_msgs__srv__VisionModeSwitch_Request__MODE_BIG = 3
};

/// Constant 'MODE_TAG'.
enum
{
  sentry_msgs__srv__VisionModeSwitch_Request__MODE_TAG = 4
};

/// Struct defined in srv/VisionModeSwitch in the package sentry_msgs.
typedef struct sentry_msgs__srv__VisionModeSwitch_Request
{
  uint8_t mode;
} sentry_msgs__srv__VisionModeSwitch_Request;

// Struct for a sequence of sentry_msgs__srv__VisionModeSwitch_Request.
typedef struct sentry_msgs__srv__VisionModeSwitch_Request__Sequence
{
  sentry_msgs__srv__VisionModeSwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__srv__VisionModeSwitch_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/VisionModeSwitch in the package sentry_msgs.
typedef struct sentry_msgs__srv__VisionModeSwitch_Response
{
  bool succ;
} sentry_msgs__srv__VisionModeSwitch_Response;

// Struct for a sequence of sentry_msgs__srv__VisionModeSwitch_Response.
typedef struct sentry_msgs__srv__VisionModeSwitch_Response__Sequence
{
  sentry_msgs__srv__VisionModeSwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__srv__VisionModeSwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_H_
