// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hello_world_msgs:msg/HelloWorld.idl
// generated code does not contain a copyright notice

#ifndef HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__STRUCT_HPP_
#define HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hello_world_msgs__msg__HelloWorld __attribute__((deprecated))
#else
# define DEPRECATED__hello_world_msgs__msg__HelloWorld __declspec(deprecated)
#endif

namespace hello_world_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HelloWorld_
{
  using Type = HelloWorld_<ContainerAllocator>;

  explicit HelloWorld_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->userid = 0ll;
      this->message = "";
    }
  }

  explicit HelloWorld_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->userid = 0ll;
      this->message = "";
    }
  }

  // field types and members
  using _userid_type =
    int64_t;
  _userid_type userid;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__userid(
    const int64_t & _arg)
  {
    this->userid = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_world_msgs::msg::HelloWorld_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_world_msgs::msg::HelloWorld_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_world_msgs::msg::HelloWorld_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_world_msgs::msg::HelloWorld_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_world_msgs__msg__HelloWorld
    std::shared_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_world_msgs__msg__HelloWorld
    std::shared_ptr<hello_world_msgs::msg::HelloWorld_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HelloWorld_ & other) const
  {
    if (this->userid != other.userid) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const HelloWorld_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HelloWorld_

// alias to use template instance with default allocator
using HelloWorld =
  hello_world_msgs::msg::HelloWorld_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hello_world_msgs

#endif  // HELLO_WORLD_MSGS__MSG__DETAIL__HELLO_WORLD__STRUCT_HPP_
