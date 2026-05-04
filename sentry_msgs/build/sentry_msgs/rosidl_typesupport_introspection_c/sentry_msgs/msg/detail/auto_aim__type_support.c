// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentry_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentry_msgs/msg/detail/auto_aim__rosidl_typesupport_introspection_c.h"
#include "sentry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentry_msgs/msg/detail/auto_aim__functions.h"
#include "sentry_msgs/msg/detail/auto_aim__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentry_msgs__msg__AutoAIM__init(message_memory);
}

void sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_fini_function(void * message_memory)
{
  sentry_msgs__msg__AutoAIM__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__AutoAIM, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__AutoAIM, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__AutoAIM, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__AutoAIM, target_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__AutoAIM, target_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vision_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_msgs__msg__AutoAIM, vision_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_members = {
  "sentry_msgs__msg",  // message namespace
  "AutoAIM",  // message name
  6,  // number of fields
  sizeof(sentry_msgs__msg__AutoAIM),
  sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_member_array,  // message members
  sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_init_function,  // function to initialize message memory (memory has to be allocated)
  sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_type_support_handle = {
  0,
  &sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentry_msgs, msg, AutoAIM)() {
  sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_type_support_handle.typesupport_identifier) {
    sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentry_msgs__msg__AutoAIM__rosidl_typesupport_introspection_c__AutoAIM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
