// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/RGBFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__RGB_FRAME__STRUCT_H_
#define XTERRA__MSG__DETAIL__RGB_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RGBFrame in the package xterra.
typedef struct xterra__msg__RGBFrame
{
  uint8_t priority;
  float axes[6];
  uint8_t buttons[12];
} xterra__msg__RGBFrame;

// Struct for a sequence of xterra__msg__RGBFrame.
typedef struct xterra__msg__RGBFrame__Sequence
{
  xterra__msg__RGBFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__RGBFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__RGB_FRAME__STRUCT_H_
