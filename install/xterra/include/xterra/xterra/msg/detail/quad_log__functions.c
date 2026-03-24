// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/quad_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base_position`
// Member `linear_velocity`
// Member `angular_velocity`
// Member `plane_normal`
#include "xterra/msg/detail/point3_d__functions.h"
// Member `base_orientation`
#include "xterra/msg/detail/quaternion__functions.h"

bool
xterra__msg__QuadLog__init(xterra__msg__QuadLog * msg)
{
  if (!msg) {
    return false;
  }
  // contact_state
  // contact_prob
  // contact_force
  // base_position
  if (!xterra__msg__Point3D__init(&msg->base_position)) {
    xterra__msg__QuadLog__fini(msg);
    return false;
  }
  // base_orientation
  if (!xterra__msg__Quaternion__init(&msg->base_orientation)) {
    xterra__msg__QuadLog__fini(msg);
    return false;
  }
  // linear_velocity
  if (!xterra__msg__Point3D__init(&msg->linear_velocity)) {
    xterra__msg__QuadLog__fini(msg);
    return false;
  }
  // angular_velocity
  if (!xterra__msg__Point3D__init(&msg->angular_velocity)) {
    xterra__msg__QuadLog__fini(msg);
    return false;
  }
  // plane_normal
  if (!xterra__msg__Point3D__init(&msg->plane_normal)) {
    xterra__msg__QuadLog__fini(msg);
    return false;
  }
  // base_wrench
  // joint_position
  // joint_velocity
  // joint_torque
  // foot_position
  // foot_velocity
  return true;
}

void
xterra__msg__QuadLog__fini(xterra__msg__QuadLog * msg)
{
  if (!msg) {
    return;
  }
  // contact_state
  // contact_prob
  // contact_force
  // base_position
  xterra__msg__Point3D__fini(&msg->base_position);
  // base_orientation
  xterra__msg__Quaternion__fini(&msg->base_orientation);
  // linear_velocity
  xterra__msg__Point3D__fini(&msg->linear_velocity);
  // angular_velocity
  xterra__msg__Point3D__fini(&msg->angular_velocity);
  // plane_normal
  xterra__msg__Point3D__fini(&msg->plane_normal);
  // base_wrench
  // joint_position
  // joint_velocity
  // joint_torque
  // foot_position
  // foot_velocity
}

bool
xterra__msg__QuadLog__are_equal(const xterra__msg__QuadLog * lhs, const xterra__msg__QuadLog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // contact_state
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->contact_state[i] != rhs->contact_state[i]) {
      return false;
    }
  }
  // contact_prob
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->contact_prob[i] != rhs->contact_prob[i]) {
      return false;
    }
  }
  // contact_force
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->contact_force[i] != rhs->contact_force[i]) {
      return false;
    }
  }
  // base_position
  if (!xterra__msg__Point3D__are_equal(
      &(lhs->base_position), &(rhs->base_position)))
  {
    return false;
  }
  // base_orientation
  if (!xterra__msg__Quaternion__are_equal(
      &(lhs->base_orientation), &(rhs->base_orientation)))
  {
    return false;
  }
  // linear_velocity
  if (!xterra__msg__Point3D__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // angular_velocity
  if (!xterra__msg__Point3D__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // plane_normal
  if (!xterra__msg__Point3D__are_equal(
      &(lhs->plane_normal), &(rhs->plane_normal)))
  {
    return false;
  }
  // base_wrench
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->base_wrench[i] != rhs->base_wrench[i]) {
      return false;
    }
  }
  // joint_position
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->joint_position[i] != rhs->joint_position[i]) {
      return false;
    }
  }
  // joint_velocity
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->joint_velocity[i] != rhs->joint_velocity[i]) {
      return false;
    }
  }
  // joint_torque
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->joint_torque[i] != rhs->joint_torque[i]) {
      return false;
    }
  }
  // foot_position
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->foot_position[i] != rhs->foot_position[i]) {
      return false;
    }
  }
  // foot_velocity
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->foot_velocity[i] != rhs->foot_velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__QuadLog__copy(
  const xterra__msg__QuadLog * input,
  xterra__msg__QuadLog * output)
{
  if (!input || !output) {
    return false;
  }
  // contact_state
  for (size_t i = 0; i < 4; ++i) {
    output->contact_state[i] = input->contact_state[i];
  }
  // contact_prob
  for (size_t i = 0; i < 4; ++i) {
    output->contact_prob[i] = input->contact_prob[i];
  }
  // contact_force
  for (size_t i = 0; i < 12; ++i) {
    output->contact_force[i] = input->contact_force[i];
  }
  // base_position
  if (!xterra__msg__Point3D__copy(
      &(input->base_position), &(output->base_position)))
  {
    return false;
  }
  // base_orientation
  if (!xterra__msg__Quaternion__copy(
      &(input->base_orientation), &(output->base_orientation)))
  {
    return false;
  }
  // linear_velocity
  if (!xterra__msg__Point3D__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // angular_velocity
  if (!xterra__msg__Point3D__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // plane_normal
  if (!xterra__msg__Point3D__copy(
      &(input->plane_normal), &(output->plane_normal)))
  {
    return false;
  }
  // base_wrench
  for (size_t i = 0; i < 6; ++i) {
    output->base_wrench[i] = input->base_wrench[i];
  }
  // joint_position
  for (size_t i = 0; i < 12; ++i) {
    output->joint_position[i] = input->joint_position[i];
  }
  // joint_velocity
  for (size_t i = 0; i < 12; ++i) {
    output->joint_velocity[i] = input->joint_velocity[i];
  }
  // joint_torque
  for (size_t i = 0; i < 12; ++i) {
    output->joint_torque[i] = input->joint_torque[i];
  }
  // foot_position
  for (size_t i = 0; i < 12; ++i) {
    output->foot_position[i] = input->foot_position[i];
  }
  // foot_velocity
  for (size_t i = 0; i < 12; ++i) {
    output->foot_velocity[i] = input->foot_velocity[i];
  }
  return true;
}

xterra__msg__QuadLog *
xterra__msg__QuadLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__QuadLog * msg = (xterra__msg__QuadLog *)allocator.allocate(sizeof(xterra__msg__QuadLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xterra__msg__QuadLog));
  bool success = xterra__msg__QuadLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xterra__msg__QuadLog__destroy(xterra__msg__QuadLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xterra__msg__QuadLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xterra__msg__QuadLog__Sequence__init(xterra__msg__QuadLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__QuadLog * data = NULL;

  if (size) {
    data = (xterra__msg__QuadLog *)allocator.zero_allocate(size, sizeof(xterra__msg__QuadLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xterra__msg__QuadLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xterra__msg__QuadLog__fini(&data[i - 1]);
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
xterra__msg__QuadLog__Sequence__fini(xterra__msg__QuadLog__Sequence * array)
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
      xterra__msg__QuadLog__fini(&array->data[i]);
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

xterra__msg__QuadLog__Sequence *
xterra__msg__QuadLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xterra__msg__QuadLog__Sequence * array = (xterra__msg__QuadLog__Sequence *)allocator.allocate(sizeof(xterra__msg__QuadLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xterra__msg__QuadLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xterra__msg__QuadLog__Sequence__destroy(xterra__msg__QuadLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xterra__msg__QuadLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xterra__msg__QuadLog__Sequence__are_equal(const xterra__msg__QuadLog__Sequence * lhs, const xterra__msg__QuadLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xterra__msg__QuadLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xterra__msg__QuadLog__Sequence__copy(
  const xterra__msg__QuadLog__Sequence * input,
  xterra__msg__QuadLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xterra__msg__QuadLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xterra__msg__QuadLog * data =
      (xterra__msg__QuadLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xterra__msg__QuadLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xterra__msg__QuadLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xterra__msg__QuadLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
