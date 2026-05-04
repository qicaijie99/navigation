// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sentry_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__FUNCTIONS_H_
#define SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sentry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sentry_msgs/msg/detail/dual_loop_pid_with_filter__struct.h"

/// Initialize msg/DualLoopPIDWithFilter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sentry_msgs__msg__DualLoopPIDWithFilter
 * )) before or use
 * sentry_msgs__msg__DualLoopPIDWithFilter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DualLoopPIDWithFilter__init(sentry_msgs__msg__DualLoopPIDWithFilter * msg);

/// Finalize msg/DualLoopPIDWithFilter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DualLoopPIDWithFilter__fini(sentry_msgs__msg__DualLoopPIDWithFilter * msg);

/// Create msg/DualLoopPIDWithFilter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sentry_msgs__msg__DualLoopPIDWithFilter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
sentry_msgs__msg__DualLoopPIDWithFilter *
sentry_msgs__msg__DualLoopPIDWithFilter__create();

/// Destroy msg/DualLoopPIDWithFilter message.
/**
 * It calls
 * sentry_msgs__msg__DualLoopPIDWithFilter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DualLoopPIDWithFilter__destroy(sentry_msgs__msg__DualLoopPIDWithFilter * msg);

/// Check for msg/DualLoopPIDWithFilter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DualLoopPIDWithFilter__are_equal(const sentry_msgs__msg__DualLoopPIDWithFilter * lhs, const sentry_msgs__msg__DualLoopPIDWithFilter * rhs);

/// Copy a msg/DualLoopPIDWithFilter message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DualLoopPIDWithFilter__copy(
  const sentry_msgs__msg__DualLoopPIDWithFilter * input,
  sentry_msgs__msg__DualLoopPIDWithFilter * output);

/// Initialize array of msg/DualLoopPIDWithFilter messages.
/**
 * It allocates the memory for the number of elements and calls
 * sentry_msgs__msg__DualLoopPIDWithFilter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__init(sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * array, size_t size);

/// Finalize array of msg/DualLoopPIDWithFilter messages.
/**
 * It calls
 * sentry_msgs__msg__DualLoopPIDWithFilter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__fini(sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * array);

/// Create array of msg/DualLoopPIDWithFilter messages.
/**
 * It allocates the memory for the array and calls
 * sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence *
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__create(size_t size);

/// Destroy array of msg/DualLoopPIDWithFilter messages.
/**
 * It calls
 * sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__destroy(sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * array);

/// Check for msg/DualLoopPIDWithFilter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__are_equal(const sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * lhs, const sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * rhs);

/// Copy an array of msg/DualLoopPIDWithFilter messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DualLoopPIDWithFilter__Sequence__copy(
  const sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * input,
  sentry_msgs__msg__DualLoopPIDWithFilter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__FUNCTIONS_H_
