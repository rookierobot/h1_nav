// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hello_world_msgs:msg/HelloWorld.idl
// generated code does not contain a copyright notice
#include "hello_world_msgs/msg/detail/hello_world__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hello_world_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hello_world_msgs/msg/detail/hello_world__struct.h"
#include "hello_world_msgs/msg/detail/hello_world__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _HelloWorld__ros_msg_type = hello_world_msgs__msg__HelloWorld;

static bool _HelloWorld__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HelloWorld__ros_msg_type * ros_message = static_cast<const _HelloWorld__ros_msg_type *>(untyped_ros_message);
  // Field name: userid
  {
    cdr << ros_message->userid;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _HelloWorld__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HelloWorld__ros_msg_type * ros_message = static_cast<_HelloWorld__ros_msg_type *>(untyped_ros_message);
  // Field name: userid
  {
    cdr >> ros_message->userid;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_world_msgs
size_t get_serialized_size_hello_world_msgs__msg__HelloWorld(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HelloWorld__ros_msg_type * ros_message = static_cast<const _HelloWorld__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name userid
  {
    size_t item_size = sizeof(ros_message->userid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _HelloWorld__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hello_world_msgs__msg__HelloWorld(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_world_msgs
size_t max_serialized_size_hello_world_msgs__msg__HelloWorld(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: userid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: message
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

static size_t _HelloWorld__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hello_world_msgs__msg__HelloWorld(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HelloWorld = {
  "hello_world_msgs::msg",
  "HelloWorld",
  _HelloWorld__cdr_serialize,
  _HelloWorld__cdr_deserialize,
  _HelloWorld__get_serialized_size,
  _HelloWorld__max_serialized_size
};

static rosidl_message_type_support_t _HelloWorld__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HelloWorld,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_world_msgs, msg, HelloWorld)() {
  return &_HelloWorld__type_support;
}

#if defined(__cplusplus)
}
#endif
