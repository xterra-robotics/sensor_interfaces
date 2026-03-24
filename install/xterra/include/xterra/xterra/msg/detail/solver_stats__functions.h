// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SOLVER_STATS__FUNCTIONS_H_
#define XTERRA__MSG__DETAIL__SOLVER_STATS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xterra/msg/rosidl_generator_c__visibility_control.h"

#include "xterra/msg/detail/solver_stats__struct.h"

/// Initialize msg/SolverStats message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xterra__msg__SolverStats
 * )) before or use
 * xterra__msg__SolverStats__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__SolverStats__init(xterra__msg__SolverStats * msg);

/// Finalize msg/SolverStats message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__SolverStats__fini(xterra__msg__SolverStats * msg);

/// Create msg/SolverStats message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xterra__msg__SolverStats__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__SolverStats *
xterra__msg__SolverStats__create();

/// Destroy msg/SolverStats message.
/**
 * It calls
 * xterra__msg__SolverStats__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__SolverStats__destroy(xterra__msg__SolverStats * msg);

/// Check for msg/SolverStats message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__SolverStats__are_equal(const xterra__msg__SolverStats * lhs, const xterra__msg__SolverStats * rhs);

/// Copy a msg/SolverStats message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__SolverStats__copy(
  const xterra__msg__SolverStats * input,
  xterra__msg__SolverStats * output);

/// Initialize array of msg/SolverStats messages.
/**
 * It allocates the memory for the number of elements and calls
 * xterra__msg__SolverStats__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__SolverStats__Sequence__init(xterra__msg__SolverStats__Sequence * array, size_t size);

/// Finalize array of msg/SolverStats messages.
/**
 * It calls
 * xterra__msg__SolverStats__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__SolverStats__Sequence__fini(xterra__msg__SolverStats__Sequence * array);

/// Create array of msg/SolverStats messages.
/**
 * It allocates the memory for the array and calls
 * xterra__msg__SolverStats__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__SolverStats__Sequence *
xterra__msg__SolverStats__Sequence__create(size_t size);

/// Destroy array of msg/SolverStats messages.
/**
 * It calls
 * xterra__msg__SolverStats__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__SolverStats__Sequence__destroy(xterra__msg__SolverStats__Sequence * array);

/// Check for msg/SolverStats message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__SolverStats__Sequence__are_equal(const xterra__msg__SolverStats__Sequence * lhs, const xterra__msg__SolverStats__Sequence * rhs);

/// Copy an array of msg/SolverStats messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__SolverStats__Sequence__copy(
  const xterra__msg__SolverStats__Sequence * input,
  xterra__msg__SolverStats__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__SOLVER_STATS__FUNCTIONS_H_
