// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hello_world_msgs:msg/HelloWorld.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__BUILDER_HPP_
#define HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__BUILDER_HPP_

#include "hello_world_msgs/msg/detail/hello_world__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hello_world_msgs
{

namespace msg
{

namespace builder
{

class Init_HelloWorld_message
{
public:
  explicit Init_HelloWorld_message(::hello_world_msgs::msg::HelloWorld & msg)
  : msg_(msg)
  {}
  ::hello_world_msgs::msg::HelloWorld message(::hello_world_msgs::msg::HelloWorld::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hello_world_msgs::msg::HelloWorld msg_;
};

class Init_HelloWorld_userid
{
public:
  Init_HelloWorld_userid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HelloWorld_message userid(::hello_world_msgs::msg::HelloWorld::_userid_type arg)
  {
    msg_.userid = std::move(arg);
    return Init_HelloWorld_message(msg_);
  }

private:
  ::hello_world_msgs::msg::HelloWorld msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hello_world_msgs::msg::HelloWorld>()
{
  return hello_world_msgs::msg::builder::Init_HelloWorld_userid();
}

}  // namespace hello_world_msgs

#endif  // HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__BUILDER_HPP_
