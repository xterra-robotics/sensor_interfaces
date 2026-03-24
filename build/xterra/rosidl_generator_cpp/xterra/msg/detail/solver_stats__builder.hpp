// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SOLVER_STATS__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__SOLVER_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/solver_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_SolverStats_time_ms
{
public:
  explicit Init_SolverStats_time_ms(::xterra::msg::SolverStats & msg)
  : msg_(msg)
  {}
  ::xterra::msg::SolverStats time_ms(::xterra::msg::SolverStats::_time_ms_type arg)
  {
    msg_.time_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::SolverStats msg_;
};

class Init_SolverStats_constraint_violation
{
public:
  explicit Init_SolverStats_constraint_violation(::xterra::msg::SolverStats & msg)
  : msg_(msg)
  {}
  Init_SolverStats_time_ms constraint_violation(::xterra::msg::SolverStats::_constraint_violation_type arg)
  {
    msg_.constraint_violation = std::move(arg);
    return Init_SolverStats_time_ms(msg_);
  }

private:
  ::xterra::msg::SolverStats msg_;
};

class Init_SolverStats_residual
{
public:
  explicit Init_SolverStats_residual(::xterra::msg::SolverStats & msg)
  : msg_(msg)
  {}
  Init_SolverStats_constraint_violation residual(::xterra::msg::SolverStats::_residual_type arg)
  {
    msg_.residual = std::move(arg);
    return Init_SolverStats_constraint_violation(msg_);
  }

private:
  ::xterra::msg::SolverStats msg_;
};

class Init_SolverStats_max_iters
{
public:
  explicit Init_SolverStats_max_iters(::xterra::msg::SolverStats & msg)
  : msg_(msg)
  {}
  Init_SolverStats_residual max_iters(::xterra::msg::SolverStats::_max_iters_type arg)
  {
    msg_.max_iters = std::move(arg);
    return Init_SolverStats_residual(msg_);
  }

private:
  ::xterra::msg::SolverStats msg_;
};

class Init_SolverStats_iters
{
public:
  Init_SolverStats_iters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolverStats_max_iters iters(::xterra::msg::SolverStats::_iters_type arg)
  {
    msg_.iters = std::move(arg);
    return Init_SolverStats_max_iters(msg_);
  }

private:
  ::xterra::msg::SolverStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::SolverStats>()
{
  return xterra::msg::builder::Init_SolverStats_iters();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__SOLVER_STATS__BUILDER_HPP_
