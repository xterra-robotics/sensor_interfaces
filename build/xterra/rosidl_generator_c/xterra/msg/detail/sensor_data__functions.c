// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xterra__msg__SensorData__init(xterra__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // q
  // dq
  // ddq
  // q_current
  // d_current
  // tau_est
  // quat
  // gyro
  // accel
  // rpy
  return true;
}

void
xterra__msg__SensorData__fini(xterra__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // q
  // dq
  // ddq
  // q_current
  // d_current
  // tau_est
  // quat
  // gyro
  // accel
  // rpy
}

bool
xterra__msg__SensorData__are_equal(const xterra__msg__SensorData * lhs, const xterra__msg__SensorData * rhs)
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
  // ddq
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->ddq[i] != rhs->ddq[i]) {
      return false;
    }
  }
  // q_current
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->q_current[i] != rhs->q_current[i]) {
      return false;
    }
  }
  // d_current
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->d_current[i] != rhs->d_current[i]) {
      return false;
    }
  }
  // tau_est
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->tau_est[i] != rhs->tau_est[i]) {
      return false;
    }
  }
  // quat
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->quat[i] != rhs->quat[i]) {
      return false;
    }
  }
  // gyro
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro[i] != rhs->gyro[i]) {
      return false;
    }
  }
  // accel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel[i] != rhs->accel[i]) {
      return false;
    }
  }
  // rpy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rpy[i] != rhs->rpy[i]) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__SensorData__copy(
  const xterra__msg__SensorData * input,
  xterra__msg__SensorData * output)
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
  // ddq
  for (size_t i = 0; i < 12; ++i) {
    output->ddq[i] = input->ddq[i];
  }
  // q_current
  for (size_t i = 0; i < 12; ++i) {
    output->q_current[i] = input->q_current[i];
  }
  // d_current
  for (size_t i = 0; i < 12; ++i) {
    output->d_current[i] = input->d_current[i];
  }
  // tau_est
  for (size_t i = 0; i < 12; ++i) {
    output->tau_est[i] = input->tau_est[i];
  }
  // quat
  for (size_t i = 0; i < 4; ++i) {
    output->quat[i] = input->quat[i];
  }
  // gyro
  for (size_t i = 0; i < 3; ++i) {
    output->gyro[i] = input->gyro[i];
  }
  // accel
  for (size_t i = 0; i < 3; ++i) {
    output->accel[i] = input->accel[i];
  }
  // rpy
  for (size_t i = 0; i < 3; ++i) {
    output->rpy[i] = input->rpy[i];
  }
  return true;
}

xterra__msg__SensorData *
xterra__msg__SensorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__SensorData * msg = (xterra__msg__SensorData *)allocator.allocate(sizeof(xterra__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__SensorData));
  bool success = xterra__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__SensorData__destroy(xterra__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__SensorData__Sequence__init(xterra__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__SensorData * data = NULL;

  if (size) {
    data = (xterra__msg__SensorData *)allocator.zero_allocate(size, sizeof(xterra__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__SensorData__fini(&data[i - 1]);
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
xterra__msg__SensorData__Sequence__fini(xterra__msg__SensorData__Sequence * array)
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
      xterra__msg__SensorData__fini(&array->data[i]);
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

xterra__msg__SensorData__Sequence *
xterra__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__SensorData__Sequence * array = (xterra__msg__SensorData__Sequence *)allocator.allocate(sizeof(xterra__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__SensorData__Sequence__destroy(xterra__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__SensorData__Sequence__are_equal(const xterra__msg__SensorData__Sequence * lhs, const xterra__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__SensorData__Sequence__copy(
  const xterra__msg__SensorData__Sequence * input,
  xterra__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__SensorData * data =
      (xterra__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
