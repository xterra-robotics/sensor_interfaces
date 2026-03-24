// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/CameraFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__CAMERA_FRAME__STRUCT_H_
#define XTERRA__MSG__DETAIL__CAMERA_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraFrame in the package xterra.
typedef struct xterra__msg__CameraFrame
{
  uint8_t data[2764800];
  uint16_t width;
  uint16_t height;
  uint8_t channels;
} xterra__msg__CameraFrame;

// Struct for a sequence of xterra__msg__CameraFrame.
typedef struct xterra__msg__CameraFrame__Sequence
{
  xterra__msg__CameraFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__CameraFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__CAMERA_FRAME__STRUCT_H_
