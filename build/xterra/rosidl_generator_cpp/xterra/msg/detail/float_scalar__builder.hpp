// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/FloatScalar.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__FLOAT_SCALAR__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__FLOAT_SCALAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/float_scalar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_FloatScalar_data
{
public:
  Init_FloatScalar_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xterra::msg::FloatScalar data(::xterra::msg::FloatScalar::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::FloatScalar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::FloatScalar>()
{
  return xterra::msg::builder::Init_FloatScalar_data();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__FLOAT_SCALAR__BUILDER_HPP_
