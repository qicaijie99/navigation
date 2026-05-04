// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/DualLoopPID.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/dual_loop_pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sentry_msgs__msg__DualLoopPID__init(sentry_msgs__msg__DualLoopPID * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sentry_msgs__msg__DualLoopPID__fini(msg);
    return false;
  }
  // inner_kp
  // inner_ki
  // inner_kd
  // outer_kp
  // outer_ki
  // outer_kd
  // inner_max_out
  // inner_max_iout
  // outer_max_out
  // outer_max_iout
  // inner_set
  // inner_feedback
  // inner_error
  // inner_error_sum
  // inner_last_error
  // outer_set
  // outer_feedback
  // outer_error
  // outer_error_sum
  // outer_last_error
  // inner_pout
  // inner_iout
  // inner_dout
  // inner_out
  // outer_pout
  // outer_iout
  // outer_dout
  // outer_out
  return true;
}

void
sentry_msgs__msg__DualLoopPID__fini(sentry_msgs__msg__DualLoopPID * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // inner_kp
  // inner_ki
  // inner_kd
  // outer_kp
  // outer_ki
  // outer_kd
  // inner_max_out
  // inner_max_iout
  // outer_max_out
  // outer_max_iout
  // inner_set
  // inner_feedback
  // inner_error
  // inner_error_sum
  // inner_last_error
  // outer_set
  // outer_feedback
  // outer_error
  // outer_error_sum
  // outer_last_error
  // inner_pout
  // inner_iout
  // inner_dout
  // inner_out
  // outer_pout
  // outer_iout
  // outer_dout
  // outer_out
}

bool
sentry_msgs__msg__DualLoopPID__are_equal(const sentry_msgs__msg__DualLoopPID * lhs, const sentry_msgs__msg__DualLoopPID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // inner_kp
  if (lhs->inner_kp != rhs->inner_kp) {
    return false;
  }
  // inner_ki
  if (lhs->inner_ki != rhs->inner_ki) {
    return false;
  }
  // inner_kd
  if (lhs->inner_kd != rhs->inner_kd) {
    return false;
  }
  // outer_kp
  if (lhs->outer_kp != rhs->outer_kp) {
    return false;
  }
  // outer_ki
  if (lhs->outer_ki != rhs->outer_ki) {
    return false;
  }
  // outer_kd
  if (lhs->outer_kd != rhs->outer_kd) {
    return false;
  }
  // inner_max_out
  if (lhs->inner_max_out != rhs->inner_max_out) {
    return false;
  }
  // inner_max_iout
  if (lhs->inner_max_iout != rhs->inner_max_iout) {
    return false;
  }
  // outer_max_out
  if (lhs->outer_max_out != rhs->outer_max_out) {
    return false;
  }
  // outer_max_iout
  if (lhs->outer_max_iout != rhs->outer_max_iout) {
    return false;
  }
  // inner_set
  if (lhs->inner_set != rhs->inner_set) {
    return false;
  }
  // inner_feedback
  if (lhs->inner_feedback != rhs->inner_feedback) {
    return false;
  }
  // inner_error
  if (lhs->inner_error != rhs->inner_error) {
    return false;
  }
  // inner_error_sum
  if (lhs->inner_error_sum != rhs->inner_error_sum) {
    return false;
  }
  // inner_last_error
  if (lhs->inner_last_error != rhs->inner_last_error) {
    return false;
  }
  // outer_set
  if (lhs->outer_set != rhs->outer_set) {
    return false;
  }
  // outer_feedback
  if (lhs->outer_feedback != rhs->outer_feedback) {
    return false;
  }
  // outer_error
  if (lhs->outer_error != rhs->outer_error) {
    return false;
  }
  // outer_error_sum
  if (lhs->outer_error_sum != rhs->outer_error_sum) {
    return false;
  }
  // outer_last_error
  if (lhs->outer_last_error != rhs->outer_last_error) {
    return false;
  }
  // inner_pout
  if (lhs->inner_pout != rhs->inner_pout) {
    return false;
  }
  // inner_iout
  if (lhs->inner_iout != rhs->inner_iout) {
    return false;
  }
  // inner_dout
  if (lhs->inner_dout != rhs->inner_dout) {
    return false;
  }
  // inner_out
  if (lhs->inner_out != rhs->inner_out) {
    return false;
  }
  // outer_pout
  if (lhs->outer_pout != rhs->outer_pout) {
    return false;
  }
  // outer_iout
  if (lhs->outer_iout != rhs->outer_iout) {
    return false;
  }
  // outer_dout
  if (lhs->outer_dout != rhs->outer_dout) {
    return false;
  }
  // outer_out
  if (lhs->outer_out != rhs->outer_out) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__DualLoopPID__copy(
  const sentry_msgs__msg__DualLoopPID * input,
  sentry_msgs__msg__DualLoopPID * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // inner_kp
  output->inner_kp = input->inner_kp;
  // inner_ki
  output->inner_ki = input->inner_ki;
  // inner_kd
  output->inner_kd = input->inner_kd;
  // outer_kp
  output->outer_kp = input->outer_kp;
  // outer_ki
  output->outer_ki = input->outer_ki;
  // outer_kd
  output->outer_kd = input->outer_kd;
  // inner_max_out
  output->inner_max_out = input->inner_max_out;
  // inner_max_iout
  output->inner_max_iout = input->inner_max_iout;
  // outer_max_out
  output->outer_max_out = input->outer_max_out;
  // outer_max_iout
  output->outer_max_iout = input->outer_max_iout;
  // inner_set
  output->inner_set = input->inner_set;
  // inner_feedback
  output->inner_feedback = input->inner_feedback;
  // inner_error
  output->inner_error = input->inner_error;
  // inner_error_sum
  output->inner_error_sum = input->inner_error_sum;
  // inner_last_error
  output->inner_last_error = input->inner_last_error;
  // outer_set
  output->outer_set = input->outer_set;
  // outer_feedback
  output->outer_feedback = input->outer_feedback;
  // outer_error
  output->outer_error = input->outer_error;
  // outer_error_sum
  output->outer_error_sum = input->outer_error_sum;
  // outer_last_error
  output->outer_last_error = input->outer_last_error;
  // inner_pout
  output->inner_pout = input->inner_pout;
  // inner_iout
  output->inner_iout = input->inner_iout;
  // inner_dout
  output->inner_dout = input->inner_dout;
  // inner_out
  output->inner_out = input->inner_out;
  // outer_pout
  output->outer_pout = input->outer_pout;
  // outer_iout
  output->outer_iout = input->outer_iout;
  // outer_dout
  output->outer_dout = input->outer_dout;
  // outer_out
  output->outer_out = input->outer_out;
  return true;
}

sentry_msgs__msg__DualLoopPID *
sentry_msgs__msg__DualLoopPID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__DualLoopPID * msg = (sentry_msgs__msg__DualLoopPID *)allocator.allocate(sizeof(sentry_msgs__msg__DualLoopPID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__DualLoopPID));
  bool success = sentry_msgs__msg__DualLoopPID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__DualLoopPID__destroy(sentry_msgs__msg__DualLoopPID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__DualLoopPID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__DualLoopPID__Sequence__init(sentry_msgs__msg__DualLoopPID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__DualLoopPID * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__DualLoopPID *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__DualLoopPID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__DualLoopPID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__DualLoopPID__fini(&data[i - 1]);
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
sentry_msgs__msg__DualLoopPID__Sequence__fini(sentry_msgs__msg__DualLoopPID__Sequence * array)
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
      sentry_msgs__msg__DualLoopPID__fini(&array->data[i]);
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

sentry_msgs__msg__DualLoopPID__Sequence *
sentry_msgs__msg__DualLoopPID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__DualLoopPID__Sequence * array = (sentry_msgs__msg__DualLoopPID__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__DualLoopPID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__DualLoopPID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__DualLoopPID__Sequence__destroy(sentry_msgs__msg__DualLoopPID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__DualLoopPID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__DualLoopPID__Sequence__are_equal(const sentry_msgs__msg__DualLoopPID__Sequence * lhs, const sentry_msgs__msg__DualLoopPID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__DualLoopPID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__DualLoopPID__Sequence__copy(
  const sentry_msgs__msg__DualLoopPID__Sequence * input,
  sentry_msgs__msg__DualLoopPID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__DualLoopPID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__DualLoopPID * data =
      (sentry_msgs__msg__DualLoopPID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__DualLoopPID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__DualLoopPID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__DualLoopPID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
