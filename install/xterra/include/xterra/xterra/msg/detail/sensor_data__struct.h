// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define XTERRA__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorData in the package xterra.
typedef struct xterra__msg__SensorData
{
  float q[12];
  float dq[12];
  float ddq[12];
  float q_current[12];
  float d_current[12];
  float tau_est[12];
  float quat[4];
  float gyro[3];
  float accel[3];
  float rpy[3];
} xterra__msg__SensorData;

// Struct for a sequence of xterra__msg__SensorData.
typedef struct xterra__msg__SensorData__Sequence
{
  xterra__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
