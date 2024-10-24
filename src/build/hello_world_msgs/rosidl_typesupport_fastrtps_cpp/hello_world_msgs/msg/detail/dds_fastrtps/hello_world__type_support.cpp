// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hello_world_msgs:msg/HelloWorld.idl
// generated code does not contain a copyright notice
#include "hello_world_msgs/msg/detail/hello_world__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hello_world_msgs/msg/detail/hello_world__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hello_world_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_world_msgs
cdr_serialize(
  const hello_world_msgs::msg::HelloWorld & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: userid
  cdr << ros_message.userid;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_world_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hello_world_msgs::msg::HelloWorld & ros_message)
{
  // Member: userid
  cdr >> ros_message.userid;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_world_msgs
get_serialized_size(
  const hello_world_msgs::msg::HelloWorld & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: userid
  {
    size_t item_size = sizeof(ros_message.userid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_world_msgs
max_serialized_size_HelloWorld(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: userid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _HelloWorld__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hello_world_msgs::msg::HelloWorld *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HelloWorld__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hello_world_msgs::msg::HelloWorld *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HelloWorld__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hello_world_msgs::msg::HelloWorld *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HelloWorld__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HelloWorld(full_bounded, 0);
}

static message_type_support_callbacks_t _HelloWorld__callbacks = {
  "hello_world_msgs::msg",
  "HelloWorld",
  _HelloWorld__cdr_serialize,
  _HelloWorld__cdr_deserialize,
  _HelloWorld__get_serialized_size,
  _HelloWorld__max_serialized_size
};

static rosidl_message_type_support_t _HelloWorld__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HelloWorld__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hello_world_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hello_world_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_world_msgs::msg::HelloWorld>()
{
  return &hello_world_msgs::msg::typesupport_fastrtps_cpp::_HelloWorld__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hello_world_msgs, msg, HelloWorld)() {
  return &hello_world_msgs::msg::typesupport_fastrtps_cpp::_HelloWorld__handle;
}

#ifdef __cplusplus
}
#endif
