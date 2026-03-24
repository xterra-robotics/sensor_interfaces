// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SOLVER_STATS__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__SOLVER_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__SolverStats __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__SolverStats __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolverStats_
{
  using Type = SolverStats_<ContainerAllocator>;

  explicit SolverStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iters = 0;
      this->max_iters = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->residual.begin(), this->residual.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->constraint_violation.begin(), this->constraint_violation.end(), 0.0f);
      this->time_ms = 0.0f;
    }
  }

  explicit SolverStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : residual(_alloc),
    constraint_violation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->iters = 0;
      this->max_iters = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->residual.begin(), this->residual.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->constraint_violation.begin(), this->constraint_violation.end(), 0.0f);
      this->time_ms = 0.0f;
    }
  }

  // field types and members
  using _iters_type =
    uint16_t;
  _iters_type iters;
  using _max_iters_type =
    uint16_t;
  _max_iters_type max_iters;
  using _residual_type =
    std::array<float, 6>;
  _residual_type residual;
  using _constraint_violation_type =
    std::array<float, 4>;
  _constraint_violation_type constraint_violation;
  using _time_ms_type =
    float;
  _time_ms_type time_ms;

  // setters for named parameter idiom
  Type & set__iters(
    const uint16_t & _arg)
  {
    this->iters = _arg;
    return *this;
  }
  Type & set__max_iters(
    const uint16_t & _arg)
  {
    this->max_iters = _arg;
    return *this;
  }
  Type & set__residual(
    const std::array<float, 6> & _arg)
  {
    this->residual = _arg;
    return *this;
  }
  Type & set__constraint_violation(
    const std::array<float, 4> & _arg)
  {
    this->constraint_violation = _arg;
    return *this;
  }
  Type & set__time_ms(
    const float & _arg)
  {
    this->time_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::SolverStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::SolverStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::SolverStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::SolverStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::SolverStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::SolverStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::SolverStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::SolverStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::SolverStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::SolverStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__SolverStats
    std::shared_ptr<xterra::msg::SolverStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__SolverStats
    std::shared_ptr<xterra::msg::SolverStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolverStats_ & other) const
  {
    if (this->iters != other.iters) {
      return false;
    }
    if (this->max_iters != other.max_iters) {
      return false;
    }
    if (this->residual != other.residual) {
      return false;
    }
    if (this->constraint_violation != other.constraint_violation) {
      return false;
    }
    if (this->time_ms != other.time_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolverStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolverStats_

// alias to use template instance with default allocator
using SolverStats =
  xterra::msg::SolverStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__SOLVER_STATS__STRUCT_HPP_
