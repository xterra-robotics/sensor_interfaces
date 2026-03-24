// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SOLVER_STATS__STRUCT_H_
#define XTERRA__MSG__DETAIL__SOLVER_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SolverStats in the package xterra.
typedef struct xterra__msg__SolverStats
{
  uint16_t iters;
  uint16_t max_iters;
  float residual[6];
  float constraint_violation[4];
  float time_ms;
} xterra__msg__SolverStats;

// Struct for a sequence of xterra__msg__SolverStats.
typedef struct xterra__msg__SolverStats__Sequence
{
  xterra__msg__SolverStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__SolverStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__SOLVER_STATS__STRUCT_H_
