// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/DR16Receiver.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/dr16_receiver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sentry_msgs__msg__DR16Receiver__init(sentry_msgs__msg__DR16Receiver * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sentry_msgs__msg__DR16Receiver__fini(msg);
    return false;
  }
  // ch_left_x
  // ch_left_y
  // ch_right_x
  // ch_right_y
  // ch_wheel
  // sw_left
  // sw_right
  // mouse_x
  // mouse_y
  // mouse_z
  // mouse_press_l
  // mouse_press_r
  // key_w
  // key_s
  // key_a
  // key_d
  // key_shift
  // key_ctrl
  // key_q
  // key_e
  // key_r
  // key_f
  // key_g
  // key_z
  // key_x
  // key_c
  // key_v
  // key_b
  return true;
}

void
sentry_msgs__msg__DR16Receiver__fini(sentry_msgs__msg__DR16Receiver * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ch_left_x
  // ch_left_y
  // ch_right_x
  // ch_right_y
  // ch_wheel
  // sw_left
  // sw_right
  // mouse_x
  // mouse_y
  // mouse_z
  // mouse_press_l
  // mouse_press_r
  // key_w
  // key_s
  // key_a
  // key_d
  // key_shift
  // key_ctrl
  // key_q
  // key_e
  // key_r
  // key_f
  // key_g
  // key_z
  // key_x
  // key_c
  // key_v
  // key_b
}

bool
sentry_msgs__msg__DR16Receiver__are_equal(const sentry_msgs__msg__DR16Receiver * lhs, const sentry_msgs__msg__DR16Receiver * rhs)
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
  // ch_left_x
  if (lhs->ch_left_x != rhs->ch_left_x) {
    return false;
  }
  // ch_left_y
  if (lhs->ch_left_y != rhs->ch_left_y) {
    return false;
  }
  // ch_right_x
  if (lhs->ch_right_x != rhs->ch_right_x) {
    return false;
  }
  // ch_right_y
  if (lhs->ch_right_y != rhs->ch_right_y) {
    return false;
  }
  // ch_wheel
  if (lhs->ch_wheel != rhs->ch_wheel) {
    return false;
  }
  // sw_left
  if (lhs->sw_left != rhs->sw_left) {
    return false;
  }
  // sw_right
  if (lhs->sw_right != rhs->sw_right) {
    return false;
  }
  // mouse_x
  if (lhs->mouse_x != rhs->mouse_x) {
    return false;
  }
  // mouse_y
  if (lhs->mouse_y != rhs->mouse_y) {
    return false;
  }
  // mouse_z
  if (lhs->mouse_z != rhs->mouse_z) {
    return false;
  }
  // mouse_press_l
  if (lhs->mouse_press_l != rhs->mouse_press_l) {
    return false;
  }
  // mouse_press_r
  if (lhs->mouse_press_r != rhs->mouse_press_r) {
    return false;
  }
  // key_w
  if (lhs->key_w != rhs->key_w) {
    return false;
  }
  // key_s
  if (lhs->key_s != rhs->key_s) {
    return false;
  }
  // key_a
  if (lhs->key_a != rhs->key_a) {
    return false;
  }
  // key_d
  if (lhs->key_d != rhs->key_d) {
    return false;
  }
  // key_shift
  if (lhs->key_shift != rhs->key_shift) {
    return false;
  }
  // key_ctrl
  if (lhs->key_ctrl != rhs->key_ctrl) {
    return false;
  }
  // key_q
  if (lhs->key_q != rhs->key_q) {
    return false;
  }
  // key_e
  if (lhs->key_e != rhs->key_e) {
    return false;
  }
  // key_r
  if (lhs->key_r != rhs->key_r) {
    return false;
  }
  // key_f
  if (lhs->key_f != rhs->key_f) {
    return false;
  }
  // key_g
  if (lhs->key_g != rhs->key_g) {
    return false;
  }
  // key_z
  if (lhs->key_z != rhs->key_z) {
    return false;
  }
  // key_x
  if (lhs->key_x != rhs->key_x) {
    return false;
  }
  // key_c
  if (lhs->key_c != rhs->key_c) {
    return false;
  }
  // key_v
  if (lhs->key_v != rhs->key_v) {
    return false;
  }
  // key_b
  if (lhs->key_b != rhs->key_b) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__DR16Receiver__copy(
  const sentry_msgs__msg__DR16Receiver * input,
  sentry_msgs__msg__DR16Receiver * output)
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
  // ch_left_x
  output->ch_left_x = input->ch_left_x;
  // ch_left_y
  output->ch_left_y = input->ch_left_y;
  // ch_right_x
  output->ch_right_x = input->ch_right_x;
  // ch_right_y
  output->ch_right_y = input->ch_right_y;
  // ch_wheel
  output->ch_wheel = input->ch_wheel;
  // sw_left
  output->sw_left = input->sw_left;
  // sw_right
  output->sw_right = input->sw_right;
  // mouse_x
  output->mouse_x = input->mouse_x;
  // mouse_y
  output->mouse_y = input->mouse_y;
  // mouse_z
  output->mouse_z = input->mouse_z;
  // mouse_press_l
  output->mouse_press_l = input->mouse_press_l;
  // mouse_press_r
  output->mouse_press_r = input->mouse_press_r;
  // key_w
  output->key_w = input->key_w;
  // key_s
  output->key_s = input->key_s;
  // key_a
  output->key_a = input->key_a;
  // key_d
  output->key_d = input->key_d;
  // key_shift
  output->key_shift = input->key_shift;
  // key_ctrl
  output->key_ctrl = input->key_ctrl;
  // key_q
  output->key_q = input->key_q;
  // key_e
  output->key_e = input->key_e;
  // key_r
  output->key_r = input->key_r;
  // key_f
  output->key_f = input->key_f;
  // key_g
  output->key_g = input->key_g;
  // key_z
  output->key_z = input->key_z;
  // key_x
  output->key_x = input->key_x;
  // key_c
  output->key_c = input->key_c;
  // key_v
  output->key_v = input->key_v;
  // key_b
  output->key_b = input->key_b;
  return true;
}

sentry_msgs__msg__DR16Receiver *
sentry_msgs__msg__DR16Receiver__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__DR16Receiver * msg = (sentry_msgs__msg__DR16Receiver *)allocator.allocate(sizeof(sentry_msgs__msg__DR16Receiver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__DR16Receiver));
  bool success = sentry_msgs__msg__DR16Receiver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__DR16Receiver__destroy(sentry_msgs__msg__DR16Receiver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__DR16Receiver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__DR16Receiver__Sequence__init(sentry_msgs__msg__DR16Receiver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__DR16Receiver * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__DR16Receiver *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__DR16Receiver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__DR16Receiver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__DR16Receiver__fini(&data[i - 1]);
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
sentry_msgs__msg__DR16Receiver__Sequence__fini(sentry_msgs__msg__DR16Receiver__Sequence * array)
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
      sentry_msgs__msg__DR16Receiver__fini(&array->data[i]);
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

sentry_msgs__msg__DR16Receiver__Sequence *
sentry_msgs__msg__DR16Receiver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__DR16Receiver__Sequence * array = (sentry_msgs__msg__DR16Receiver__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__DR16Receiver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__DR16Receiver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__DR16Receiver__Sequence__destroy(sentry_msgs__msg__DR16Receiver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__DR16Receiver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__DR16Receiver__Sequence__are_equal(const sentry_msgs__msg__DR16Receiver__Sequence * lhs, const sentry_msgs__msg__DR16Receiver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__DR16Receiver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__DR16Receiver__Sequence__copy(
  const sentry_msgs__msg__DR16Receiver__Sequence * input,
  sentry_msgs__msg__DR16Receiver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__DR16Receiver);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__DR16Receiver * data =
      (sentry_msgs__msg__DR16Receiver *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__DR16Receiver__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__DR16Receiver__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__DR16Receiver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
