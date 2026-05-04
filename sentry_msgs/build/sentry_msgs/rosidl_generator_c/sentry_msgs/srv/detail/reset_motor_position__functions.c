// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:srv/ResetMotorPosition.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/srv/detail/reset_motor_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `motor_name`
#include "rosidl_runtime_c/string_functions.h"

bool
sentry_msgs__srv__ResetMotorPosition_Request__init(sentry_msgs__srv__ResetMotorPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__init(&msg->motor_name)) {
    sentry_msgs__srv__ResetMotorPosition_Request__fini(msg);
    return false;
  }
  return true;
}

void
sentry_msgs__srv__ResetMotorPosition_Request__fini(sentry_msgs__srv__ResetMotorPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_name
  rosidl_runtime_c__String__fini(&msg->motor_name);
}

bool
sentry_msgs__srv__ResetMotorPosition_Request__are_equal(const sentry_msgs__srv__ResetMotorPosition_Request * lhs, const sentry_msgs__srv__ResetMotorPosition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor_name), &(rhs->motor_name)))
  {
    return false;
  }
  return true;
}

bool
sentry_msgs__srv__ResetMotorPosition_Request__copy(
  const sentry_msgs__srv__ResetMotorPosition_Request * input,
  sentry_msgs__srv__ResetMotorPosition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->motor_name), &(output->motor_name)))
  {
    return false;
  }
  return true;
}

sentry_msgs__srv__ResetMotorPosition_Request *
sentry_msgs__srv__ResetMotorPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__srv__ResetMotorPosition_Request * msg = (sentry_msgs__srv__ResetMotorPosition_Request *)allocator.allocate(sizeof(sentry_msgs__srv__ResetMotorPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__srv__ResetMotorPosition_Request));
  bool success = sentry_msgs__srv__ResetMotorPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__srv__ResetMotorPosition_Request__destroy(sentry_msgs__srv__ResetMotorPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__srv__ResetMotorPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__srv__ResetMotorPosition_Request__Sequence__init(sentry_msgs__srv__ResetMotorPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__srv__ResetMotorPosition_Request * data = NULL;

  if (size) {
    data = (sentry_msgs__srv__ResetMotorPosition_Request *)allocator.zero_allocate(size, sizeof(sentry_msgs__srv__ResetMotorPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__srv__ResetMotorPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__srv__ResetMotorPosition_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sentry_msgs__srv__ResetMotorPosition_Request__Sequence__fini(sentry_msgs__srv__ResetMotorPosition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sentry_msgs__srv__ResetMotorPosition_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sentry_msgs__srv__ResetMotorPosition_Request__Sequence *
sentry_msgs__srv__ResetMotorPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__srv__ResetMotorPosition_Request__Sequence * array = (sentry_msgs__srv__ResetMotorPosition_Request__Sequence *)allocator.allocate(sizeof(sentry_msgs__srv__ResetMotorPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__srv__ResetMotorPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__srv__ResetMotorPosition_Request__Sequence__destroy(sentry_msgs__srv__ResetMotorPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__srv__ResetMotorPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__srv__ResetMotorPosition_Request__Sequence__are_equal(const sentry_msgs__srv__ResetMotorPosition_Request__Sequence * lhs, const sentry_msgs__srv__ResetMotorPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__srv__ResetMotorPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__srv__ResetMotorPosition_Request__Sequence__copy(
  const sentry_msgs__srv__ResetMotorPosition_Request__Sequence * input,
  sentry_msgs__srv__ResetMotorPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__srv__ResetMotorPosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__srv__ResetMotorPosition_Request * data =
      (sentry_msgs__srv__ResetMotorPosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__srv__ResetMotorPosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__srv__ResetMotorPosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__srv__ResetMotorPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sentry_msgs__srv__ResetMotorPosition_Response__init(sentry_msgs__srv__ResetMotorPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // succ
  return true;
}

void
sentry_msgs__srv__ResetMotorPosition_Response__fini(sentry_msgs__srv__ResetMotorPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // succ
}

bool
sentry_msgs__srv__ResetMotorPosition_Response__are_equal(const sentry_msgs__srv__ResetMotorPosition_Response * lhs, const sentry_msgs__srv__ResetMotorPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // succ
  if (lhs->succ != rhs->succ) {
    return false;
  }
  return true;
}

bool
sentry_msgs__srv__ResetMotorPosition_Response__copy(
  const sentry_msgs__srv__ResetMotorPosition_Response * input,
  sentry_msgs__srv__ResetMotorPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // succ
  output->succ = input->succ;
  return true;
}

sentry_msgs__srv__ResetMotorPosition_Response *
sentry_msgs__srv__ResetMotorPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__srv__ResetMotorPosition_Response * msg = (sentry_msgs__srv__ResetMotorPosition_Response *)allocator.allocate(sizeof(sentry_msgs__srv__ResetMotorPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__srv__ResetMotorPosition_Response));
  bool success = sentry_msgs__srv__ResetMotorPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__srv__ResetMotorPosition_Response__destroy(sentry_msgs__srv__ResetMotorPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__srv__ResetMotorPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__srv__ResetMotorPosition_Response__Sequence__init(sentry_msgs__srv__ResetMotorPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__srv__ResetMotorPosition_Response * data = NULL;

  if (size) {
    data = (sentry_msgs__srv__ResetMotorPosition_Response *)allocator.zero_allocate(size, sizeof(sentry_msgs__srv__ResetMotorPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__srv__ResetMotorPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__srv__ResetMotorPosition_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sentry_msgs__srv__ResetMotorPosition_Response__Sequence__fini(sentry_msgs__srv__ResetMotorPosition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sentry_msgs__srv__ResetMotorPosition_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sentry_msgs__srv__ResetMotorPosition_Response__Sequence *
sentry_msgs__srv__ResetMotorPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__srv__ResetMotorPosition_Response__Sequence * array = (sentry_msgs__srv__ResetMotorPosition_Response__Sequence *)allocator.allocate(sizeof(sentry_msgs__srv__ResetMotorPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__srv__ResetMotorPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__srv__ResetMotorPosition_Response__Sequence__destroy(sentry_msgs__srv__ResetMotorPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__srv__ResetMotorPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__srv__ResetMotorPosition_Response__Sequence__are_equal(const sentry_msgs__srv__ResetMotorPosition_Response__Sequence * lhs, const sentry_msgs__srv__ResetMotorPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__srv__ResetMotorPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__srv__ResetMotorPosition_Response__Sequence__copy(
  const sentry_msgs__srv__ResetMotorPosition_Response__Sequence * input,
  sentry_msgs__srv__ResetMotorPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__srv__ResetMotorPosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__srv__ResetMotorPosition_Response * data =
      (sentry_msgs__srv__ResetMotorPosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__srv__ResetMotorPosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__srv__ResetMotorPosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__srv__ResetMotorPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
