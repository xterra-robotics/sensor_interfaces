// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/IndicatorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__INDICATOR_DATA__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__INDICATOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/indicator_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_IndicatorData_buzzer
{
public:
  explicit Init_IndicatorData_buzzer(::xterra::msg::IndicatorData & msg)
  : msg_(msg)
  {}
  ::xterra::msg::IndicatorData buzzer(::xterra::msg::IndicatorData::_buzzer_type arg)
  {
    msg_.buzzer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::IndicatorData msg_;
};

class Init_IndicatorData_led3
{
public:
  explicit Init_IndicatorData_led3(::xterra::msg::IndicatorData & msg)
  : msg_(msg)
  {}
  Init_IndicatorData_buzzer led3(::xterra::msg::IndicatorData::_led3_type arg)
  {
    msg_.led3 = std::move(arg);
    return Init_IndicatorData_buzzer(msg_);
  }

private:
  ::xterra::msg::IndicatorData msg_;
};

class Init_IndicatorData_led2
{
public:
  explicit Init_IndicatorData_led2(::xterra::msg::IndicatorData & msg)
  : msg_(msg)
  {}
  Init_IndicatorData_led3 led2(::xterra::msg::IndicatorData::_led2_type arg)
  {
    msg_.led2 = std::move(arg);
    return Init_IndicatorData_led3(msg_);
  }

private:
  ::xterra::msg::IndicatorData msg_;
};

class Init_IndicatorData_led1
{
public:
  Init_IndicatorData_led1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IndicatorData_led2 led1(::xterra::msg::IndicatorData::_led1_type arg)
  {
    msg_.led1 = std::move(arg);
    return Init_IndicatorData_led2(msg_);
  }

private:
  ::xterra::msg::IndicatorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::IndicatorData>()
{
  return xterra::msg::builder::Init_IndicatorData_led1();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__INDICATOR_DATA__BUILDER_HPP_
