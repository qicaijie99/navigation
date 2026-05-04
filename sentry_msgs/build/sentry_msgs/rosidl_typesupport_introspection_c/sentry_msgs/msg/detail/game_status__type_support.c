// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentry_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentry_msgs/msg/detail/game_status__rosidl_typesupport_introspection_c.h"
#include "sentry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentry_msgs/msg/detail/game_status__functions.h"
#include "sentry_msgs/msg/detail/game_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentry_msgs__msg__GameStatus__init(message_memory);
}

void sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_fini_function(void * message_memory)
{
  sentry_msgs__msg__GameStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__GameStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__GameStatus, game_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__GameStatus, game_progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stage_remain_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__GameStatus, stage_remain_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sync_time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__GameStatus, sync_time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_members = {
  "sentry_msgs__msg",  // message namespace
  "GameStatus",  // message name
  5,  // number of fields
  sizeof(sentry_msgs__msg__GameStatus),
  sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_member_array,  // message members
  sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle = {
  0,
  &sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentry_msgs, msg, GameStatus)() {
  sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle.typesupport_identifier) {
    sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentry_msgs__msg__GameStatus__rosidl_typesupport_introspection_c__GameStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
