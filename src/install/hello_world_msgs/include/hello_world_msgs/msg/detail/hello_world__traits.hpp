// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hello_world_msgs:msg/HelloWorld.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__TRAITS_HPP_
#define HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__TRAITS_HPP_

#include "hello_world_msgs/msg/detail/hello_world__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_world_msgs::msg::HelloWorld>()
{
  return "hello_world_msgs::msg::HelloWorld";
}

template<>
inline const char * name<hello_world_msgs::msg::HelloWorld>()
{
  return "hello_world_msgs/msg/HelloWorld";
}

template<>
struct has_fixed_size<hello_world_msgs::msg::HelloWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_world_msgs::msg::HelloWorld>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hello_world_msgs::msg::HelloWorld>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__TRAITS_HPP_
