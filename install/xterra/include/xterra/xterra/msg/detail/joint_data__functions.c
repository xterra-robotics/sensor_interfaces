// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/JointData.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/joint_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__JointData__init(xterra__msg__JointData * msg)
{
  if (!msg) {
    return false;
  }
  // q
  // dq
  // kp
  // kd
  // tau
  return true;
}

void
xterra__msg__JointData__fini(xterra__msg__JointData * msg)
{
  if (!msg) {
    return;
  }
  // q
  // dq
  // kp
  // kd
  // tau
}

bool
xterra__msg__JointData__are_equal(const xterra__msg__JointData * lhs, const xterra__msg__JointData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // dq
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->dq[i] != rhs->dq[i]) {
      return false;
    }
  }
  // kp
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->kp[i] != rhs->kp[i]) {
      return false;
    }
  }
  // kd
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->kd[i] != rhs->kd[i]) {
      return false;
    }
  }
  // tau
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->tau[i] != rhs->tau[i]) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__JointData__copy(
  const xterra__msg__JointData * input,
  xterra__msg__JointData * output)
{
  if (!input || !output) {
    return false;
  }
  // q
  for (size_t i = 0; i < 12; ++i) {
    output->q[i] = input->q[i];
  }
  // dq
  for (size_t i = 0; i < 12; ++i) {
    output->dq[i] = input->dq[i];
  }
  // kp
  for (size_t i = 0; i < 12; ++i) {
    output->kp[i] = input->kp[i];
  }
  // kd
  for (size_t i = 0; i < 12; ++i) {
    output->kd[i] = input->kd[i];
  }
  // tau
  for (size_t i = 0; i < 12; ++i) {
    output->tau[i] = input->tau[i];
  }
  return true;
}

xterra__msg__JointData *
xterra__msg__JointData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__JointData * msg = (xterra__msg__JointData *)allocator.allocate(sizeof(xterra__msg__JointData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__JointData));
  bool success = xterra__msg__JointData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__JointData__destroy(xterra__msg__JointData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__JointData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__JointData__Sequence__init(xterra__msg__JointData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__JointData * data = NULL;

  if (size) {
    data = (xterra__msg__JointData *)allocator.zero_allocate(size, sizeof(xterra__msg__JointData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__JointData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__JointData__fini(&data[i - 1]);
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
xterra__msg__JointData__Sequence__fini(xterra__msg__JointData__Sequence * array)
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
      xterra__msg__JointData__fini(&array->data[i]);
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

xterra__msg__JointData__Sequence *
xterra__msg__JointData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__JointData__Sequence * array = (xterra__msg__JointData__Sequence *)allocator.allocate(sizeof(xterra__msg__JointData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__JointData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__JointData__Sequence__destroy(xterra__msg__JointData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__JointData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__JointData__Sequence__are_equal(const xterra__msg__JointData__Sequence * lhs, const xterra__msg__JointData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__JointData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__JointData__Sequence__copy(
  const xterra__msg__JointData__Sequence * input,
  xterra__msg__JointData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__JointData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__JointData * data =
      (xterra__msg__JointData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__JointData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__JointData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__JointData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
