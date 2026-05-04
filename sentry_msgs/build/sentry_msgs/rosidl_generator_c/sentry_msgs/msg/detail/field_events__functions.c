// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/FieldEvents.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/field_events__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sentry_msgs__msg__FieldEvents__init(sentry_msgs__msg__FieldEvents * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sentry_msgs__msg__FieldEvents__fini(msg);
    return false;
  }
  // supplier_1_occupation
  // supplier_2_occupation
  // supplier_3_occupation
  // power_rune_activation_point_occupation
  // small_power_rune_activation_status
  // big_power_rune_activation_status
  // r2b2_ground_occupation
  // r3b3_ground_occupation
  // r4b4_ground_occupation
  // base_has_shield
  // outpost_alive
  return true;
}

void
sentry_msgs__msg__FieldEvents__fini(sentry_msgs__msg__FieldEvents * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // supplier_1_occupation
  // supplier_2_occupation
  // supplier_3_occupation
  // power_rune_activation_point_occupation
  // small_power_rune_activation_status
  // big_power_rune_activation_status
  // r2b2_ground_occupation
  // r3b3_ground_occupation
  // r4b4_ground_occupation
  // base_has_shield
  // outpost_alive
}

bool
sentry_msgs__msg__FieldEvents__are_equal(const sentry_msgs__msg__FieldEvents * lhs, const sentry_msgs__msg__FieldEvents * rhs)
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
  // supplier_1_occupation
  if (lhs->supplier_1_occupation != rhs->supplier_1_occupation) {
    return false;
  }
  // supplier_2_occupation
  if (lhs->supplier_2_occupation != rhs->supplier_2_occupation) {
    return false;
  }
  // supplier_3_occupation
  if (lhs->supplier_3_occupation != rhs->supplier_3_occupation) {
    return false;
  }
  // power_rune_activation_point_occupation
  if (lhs->power_rune_activation_point_occupation != rhs->power_rune_activation_point_occupation) {
    return false;
  }
  // small_power_rune_activation_status
  if (lhs->small_power_rune_activation_status != rhs->small_power_rune_activation_status) {
    return false;
  }
  // big_power_rune_activation_status
  if (lhs->big_power_rune_activation_status != rhs->big_power_rune_activation_status) {
    return false;
  }
  // r2b2_ground_occupation
  if (lhs->r2b2_ground_occupation != rhs->r2b2_ground_occupation) {
    return false;
  }
  // r3b3_ground_occupation
  if (lhs->r3b3_ground_occupation != rhs->r3b3_ground_occupation) {
    return false;
  }
  // r4b4_ground_occupation
  if (lhs->r4b4_ground_occupation != rhs->r4b4_ground_occupation) {
    return false;
  }
  // base_has_shield
  if (lhs->base_has_shield != rhs->base_has_shield) {
    return false;
  }
  // outpost_alive
  if (lhs->outpost_alive != rhs->outpost_alive) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__FieldEvents__copy(
  const sentry_msgs__msg__FieldEvents * input,
  sentry_msgs__msg__FieldEvents * output)
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
  // supplier_1_occupation
  output->supplier_1_occupation = input->supplier_1_occupation;
  // supplier_2_occupation
  output->supplier_2_occupation = input->supplier_2_occupation;
  // supplier_3_occupation
  output->supplier_3_occupation = input->supplier_3_occupation;
  // power_rune_activation_point_occupation
  output->power_rune_activation_point_occupation = input->power_rune_activation_point_occupation;
  // small_power_rune_activation_status
  output->small_power_rune_activation_status = input->small_power_rune_activation_status;
  // big_power_rune_activation_status
  output->big_power_rune_activation_status = input->big_power_rune_activation_status;
  // r2b2_ground_occupation
  output->r2b2_ground_occupation = input->r2b2_ground_occupation;
  // r3b3_ground_occupation
  output->r3b3_ground_occupation = input->r3b3_ground_occupation;
  // r4b4_ground_occupation
  output->r4b4_ground_occupation = input->r4b4_ground_occupation;
  // base_has_shield
  output->base_has_shield = input->base_has_shield;
  // outpost_alive
  output->outpost_alive = input->outpost_alive;
  return true;
}

sentry_msgs__msg__FieldEvents *
sentry_msgs__msg__FieldEvents__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__FieldEvents * msg = (sentry_msgs__msg__FieldEvents *)allocator.allocate(sizeof(sentry_msgs__msg__FieldEvents), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__FieldEvents));
  bool success = sentry_msgs__msg__FieldEvents__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__FieldEvents__destroy(sentry_msgs__msg__FieldEvents * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__FieldEvents__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__FieldEvents__Sequence__init(sentry_msgs__msg__FieldEvents__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__FieldEvents * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__FieldEvents *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__FieldEvents), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__FieldEvents__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__FieldEvents__fini(&data[i - 1]);
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
sentry_msgs__msg__FieldEvents__Sequence__fini(sentry_msgs__msg__FieldEvents__Sequence * array)
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
      sentry_msgs__msg__FieldEvents__fini(&array->data[i]);
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

sentry_msgs__msg__FieldEvents__Sequence *
sentry_msgs__msg__FieldEvents__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__FieldEvents__Sequence * array = (sentry_msgs__msg__FieldEvents__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__FieldEvents__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__FieldEvents__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__FieldEvents__Sequence__destroy(sentry_msgs__msg__FieldEvents__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__FieldEvents__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__FieldEvents__Sequence__are_equal(const sentry_msgs__msg__FieldEvents__Sequence * lhs, const sentry_msgs__msg__FieldEvents__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__FieldEvents__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__FieldEvents__Sequence__copy(
  const sentry_msgs__msg__FieldEvents__Sequence * input,
  sentry_msgs__msg__FieldEvents__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__FieldEvents);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__FieldEvents * data =
      (sentry_msgs__msg__FieldEvents *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__FieldEvents__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__FieldEvents__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__FieldEvents__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
