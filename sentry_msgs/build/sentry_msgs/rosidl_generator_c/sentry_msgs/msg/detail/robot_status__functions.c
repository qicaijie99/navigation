// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sentry_msgs__msg__RobotStatus__init(sentry_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sentry_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_id
  // robot_level
  // remain_hp
  // max_hp
  // shooter_17mm_id1_cooling_rate
  // shooter_17mm_id1_cooling_limit
  // shooter_17mm_id1_speed_limit
  // shooter_17mm_id2_cooling_rate
  // shooter_17mm_id2_cooling_limit
  // shooter_17mm_id2_speed_limit
  // shooter_42mm_id1_cooling_rate
  // shooter_42mm_id1_cooling_limit
  // shooter_42mm_id1_speed_limit
  // chassis_power_limit
  // gimbal_power_output
  // chassis_power_output
  // shooter_power_output
  return true;
}

void
sentry_msgs__msg__RobotStatus__fini(sentry_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  // robot_level
  // remain_hp
  // max_hp
  // shooter_17mm_id1_cooling_rate
  // shooter_17mm_id1_cooling_limit
  // shooter_17mm_id1_speed_limit
  // shooter_17mm_id2_cooling_rate
  // shooter_17mm_id2_cooling_limit
  // shooter_17mm_id2_speed_limit
  // shooter_42mm_id1_cooling_rate
  // shooter_42mm_id1_cooling_limit
  // shooter_42mm_id1_speed_limit
  // chassis_power_limit
  // gimbal_power_output
  // chassis_power_output
  // shooter_power_output
}

bool
sentry_msgs__msg__RobotStatus__are_equal(const sentry_msgs__msg__RobotStatus * lhs, const sentry_msgs__msg__RobotStatus * rhs)
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
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // robot_level
  if (lhs->robot_level != rhs->robot_level) {
    return false;
  }
  // remain_hp
  if (lhs->remain_hp != rhs->remain_hp) {
    return false;
  }
  // max_hp
  if (lhs->max_hp != rhs->max_hp) {
    return false;
  }
  // shooter_17mm_id1_cooling_rate
  if (lhs->shooter_17mm_id1_cooling_rate != rhs->shooter_17mm_id1_cooling_rate) {
    return false;
  }
  // shooter_17mm_id1_cooling_limit
  if (lhs->shooter_17mm_id1_cooling_limit != rhs->shooter_17mm_id1_cooling_limit) {
    return false;
  }
  // shooter_17mm_id1_speed_limit
  if (lhs->shooter_17mm_id1_speed_limit != rhs->shooter_17mm_id1_speed_limit) {
    return false;
  }
  // shooter_17mm_id2_cooling_rate
  if (lhs->shooter_17mm_id2_cooling_rate != rhs->shooter_17mm_id2_cooling_rate) {
    return false;
  }
  // shooter_17mm_id2_cooling_limit
  if (lhs->shooter_17mm_id2_cooling_limit != rhs->shooter_17mm_id2_cooling_limit) {
    return false;
  }
  // shooter_17mm_id2_speed_limit
  if (lhs->shooter_17mm_id2_speed_limit != rhs->shooter_17mm_id2_speed_limit) {
    return false;
  }
  // shooter_42mm_id1_cooling_rate
  if (lhs->shooter_42mm_id1_cooling_rate != rhs->shooter_42mm_id1_cooling_rate) {
    return false;
  }
  // shooter_42mm_id1_cooling_limit
  if (lhs->shooter_42mm_id1_cooling_limit != rhs->shooter_42mm_id1_cooling_limit) {
    return false;
  }
  // shooter_42mm_id1_speed_limit
  if (lhs->shooter_42mm_id1_speed_limit != rhs->shooter_42mm_id1_speed_limit) {
    return false;
  }
  // chassis_power_limit
  if (lhs->chassis_power_limit != rhs->chassis_power_limit) {
    return false;
  }
  // gimbal_power_output
  if (lhs->gimbal_power_output != rhs->gimbal_power_output) {
    return false;
  }
  // chassis_power_output
  if (lhs->chassis_power_output != rhs->chassis_power_output) {
    return false;
  }
  // shooter_power_output
  if (lhs->shooter_power_output != rhs->shooter_power_output) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__RobotStatus__copy(
  const sentry_msgs__msg__RobotStatus * input,
  sentry_msgs__msg__RobotStatus * output)
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
  // robot_id
  output->robot_id = input->robot_id;
  // robot_level
  output->robot_level = input->robot_level;
  // remain_hp
  output->remain_hp = input->remain_hp;
  // max_hp
  output->max_hp = input->max_hp;
  // shooter_17mm_id1_cooling_rate
  output->shooter_17mm_id1_cooling_rate = input->shooter_17mm_id1_cooling_rate;
  // shooter_17mm_id1_cooling_limit
  output->shooter_17mm_id1_cooling_limit = input->shooter_17mm_id1_cooling_limit;
  // shooter_17mm_id1_speed_limit
  output->shooter_17mm_id1_speed_limit = input->shooter_17mm_id1_speed_limit;
  // shooter_17mm_id2_cooling_rate
  output->shooter_17mm_id2_cooling_rate = input->shooter_17mm_id2_cooling_rate;
  // shooter_17mm_id2_cooling_limit
  output->shooter_17mm_id2_cooling_limit = input->shooter_17mm_id2_cooling_limit;
  // shooter_17mm_id2_speed_limit
  output->shooter_17mm_id2_speed_limit = input->shooter_17mm_id2_speed_limit;
  // shooter_42mm_id1_cooling_rate
  output->shooter_42mm_id1_cooling_rate = input->shooter_42mm_id1_cooling_rate;
  // shooter_42mm_id1_cooling_limit
  output->shooter_42mm_id1_cooling_limit = input->shooter_42mm_id1_cooling_limit;
  // shooter_42mm_id1_speed_limit
  output->shooter_42mm_id1_speed_limit = input->shooter_42mm_id1_speed_limit;
  // chassis_power_limit
  output->chassis_power_limit = input->chassis_power_limit;
  // gimbal_power_output
  output->gimbal_power_output = input->gimbal_power_output;
  // chassis_power_output
  output->chassis_power_output = input->chassis_power_output;
  // shooter_power_output
  output->shooter_power_output = input->shooter_power_output;
  return true;
}

sentry_msgs__msg__RobotStatus *
sentry_msgs__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__RobotStatus * msg = (sentry_msgs__msg__RobotStatus *)allocator.allocate(sizeof(sentry_msgs__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__RobotStatus));
  bool success = sentry_msgs__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__RobotStatus__destroy(sentry_msgs__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__RobotStatus__Sequence__init(sentry_msgs__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__RobotStatus * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__RobotStatus__fini(&data[i - 1]);
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
sentry_msgs__msg__RobotStatus__Sequence__fini(sentry_msgs__msg__RobotStatus__Sequence * array)
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
      sentry_msgs__msg__RobotStatus__fini(&array->data[i]);
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

sentry_msgs__msg__RobotStatus__Sequence *
sentry_msgs__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__RobotStatus__Sequence * array = (sentry_msgs__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__RobotStatus__Sequence__destroy(sentry_msgs__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__RobotStatus__Sequence__are_equal(const sentry_msgs__msg__RobotStatus__Sequence * lhs, const sentry_msgs__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__RobotStatus__Sequence__copy(
  const sentry_msgs__msg__RobotStatus__Sequence * input,
  sentry_msgs__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__RobotStatus * data =
      (sentry_msgs__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
