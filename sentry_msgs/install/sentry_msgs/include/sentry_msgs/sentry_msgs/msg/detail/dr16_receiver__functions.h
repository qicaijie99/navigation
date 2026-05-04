// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sentry_msgs:msg/DR16Receiver.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__FUNCTIONS_H_
#define SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sentry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sentry_msgs/msg/detail/dr16_receiver__struct.h"

/// Initialize msg/DR16Receiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sentry_msgs__msg__DR16Receiver
 * )) before or use
 * sentry_msgs__msg__DR16Receiver__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DR16Receiver__init(sentry_msgs__msg__DR16Receiver * msg);

/// Finalize msg/DR16Receiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DR16Receiver__fini(sentry_msgs__msg__DR16Receiver * msg);

/// Create msg/DR16Receiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sentry_msgs__msg__DR16Receiver__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
sentry_msgs__msg__DR16Receiver *
sentry_msgs__msg__DR16Receiver__create();

/// Destroy msg/DR16Receiver message.
/**
 * It calls
 * sentry_msgs__msg__DR16Receiver__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DR16Receiver__destroy(sentry_msgs__msg__DR16Receiver * msg);

/// Check for msg/DR16Receiver message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DR16Receiver__are_equal(const sentry_msgs__msg__DR16Receiver * lhs, const sentry_msgs__msg__DR16Receiver * rhs);

/// Copy a msg/DR16Receiver message.
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
sentry_msgs__msg__DR16Receiver__copy(
  const sentry_msgs__msg__DR16Receiver * input,
  sentry_msgs__msg__DR16Receiver * output);

/// Initialize array of msg/DR16Receiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * sentry_msgs__msg__DR16Receiver__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DR16Receiver__Sequence__init(sentry_msgs__msg__DR16Receiver__Sequence * array, size_t size);

/// Finalize array of msg/DR16Receiver messages.
/**
 * It calls
 * sentry_msgs__msg__DR16Receiver__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DR16Receiver__Sequence__fini(sentry_msgs__msg__DR16Receiver__Sequence * array);

/// Create array of msg/DR16Receiver messages.
/**
 * It allocates the memory for the array and calls
 * sentry_msgs__msg__DR16Receiver__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
sentry_msgs__msg__DR16Receiver__Sequence *
sentry_msgs__msg__DR16Receiver__Sequence__create(size_t size);

/// Destroy array of msg/DR16Receiver messages.
/**
 * It calls
 * sentry_msgs__msg__DR16Receiver__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
void
sentry_msgs__msg__DR16Receiver__Sequence__destroy(sentry_msgs__msg__DR16Receiver__Sequence * array);

/// Check for msg/DR16Receiver message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_msgs
bool
sentry_msgs__msg__DR16Receiver__Sequence__are_equal(const sentry_msgs__msg__DR16Receiver__Sequence * lhs, const sentry_msgs__msg__DR16Receiver__Sequence * rhs);

/// Copy an array of msg/DR16Receiver messages.
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
sentry_msgs__msg__DR16Receiver__Sequence__copy(
  const sentry_msgs__msg__DR16Receiver__Sequence * input,
  sentry_msgs__msg__DR16Receiver__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__FUNCTIONS_H_
