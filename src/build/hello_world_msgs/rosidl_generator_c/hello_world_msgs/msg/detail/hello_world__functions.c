// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hello_world_msgs:msg/HelloWorld.idl
// generated code does not contain a copyright notice
#include "hello_world_msgs/msg/detail/hello_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
hello_world_msgs__msg__HelloWorld__init(hello_world_msgs__msg__HelloWorld * msg)
{
  if (!msg) {
    return false;
  }
  // userid
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hello_world_msgs__msg__HelloWorld__fini(msg);
    return false;
  }
  return true;
}

void
hello_world_msgs__msg__HelloWorld__fini(hello_world_msgs__msg__HelloWorld * msg)
{
  if (!msg) {
    return;
  }
  // userid
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hello_world_msgs__msg__HelloWorld__are_equal(const hello_world_msgs__msg__HelloWorld * lhs, const hello_world_msgs__msg__HelloWorld * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // userid
  if (lhs->userid != rhs->userid) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
hello_world_msgs__msg__HelloWorld__copy(
  const hello_world_msgs__msg__HelloWorld * input,
  hello_world_msgs__msg__HelloWorld * output)
{
  if (!input || !output) {
    return false;
  }
  // userid
  output->userid = input->userid;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

hello_world_msgs__msg__HelloWorld *
hello_world_msgs__msg__HelloWorld__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_world_msgs__msg__HelloWorld * msg = (hello_world_msgs__msg__HelloWorld *)allocator.allocate(sizeof(hello_world_msgs__msg__HelloWorld), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hello_world_msgs__msg__HelloWorld));
  bool success = hello_world_msgs__msg__HelloWorld__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hello_world_msgs__msg__HelloWorld__destroy(hello_world_msgs__msg__HelloWorld * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hello_world_msgs__msg__HelloWorld__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hello_world_msgs__msg__HelloWorld__Sequence__init(hello_world_msgs__msg__HelloWorld__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_world_msgs__msg__HelloWorld * data = NULL;

  if (size) {
    data = (hello_world_msgs__msg__HelloWorld *)allocator.zero_allocate(size, sizeof(hello_world_msgs__msg__HelloWorld), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hello_world_msgs__msg__HelloWorld__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hello_world_msgs__msg__HelloWorld__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hello_world_msgs__msg__HelloWorld__Sequence__fini(hello_world_msgs__msg__HelloWorld__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hello_world_msgs__msg__HelloWorld__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hello_world_msgs__msg__HelloWorld__Sequence *
hello_world_msgs__msg__HelloWorld__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_world_msgs__msg__HelloWorld__Sequence * array = (hello_world_msgs__msg__HelloWorld__Sequence *)allocator.allocate(sizeof(hello_world_msgs__msg__HelloWorld__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hello_world_msgs__msg__HelloWorld__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hello_world_msgs__msg__HelloWorld__Sequence__destroy(hello_world_msgs__msg__HelloWorld__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hello_world_msgs__msg__HelloWorld__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hello_world_msgs__msg__HelloWorld__Sequence__are_equal(const hello_world_msgs__msg__HelloWorld__Sequence * lhs, const hello_world_msgs__msg__HelloWorld__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hello_world_msgs__msg__HelloWorld__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hello_world_msgs__msg__HelloWorld__Sequence__copy(
  const hello_world_msgs__msg__HelloWorld__Sequence * input,
  hello_world_msgs__msg__HelloWorld__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hello_world_msgs__msg__HelloWorld);
    hello_world_msgs__msg__HelloWorld * data =
      (hello_world_msgs__msg__HelloWorld *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hello_world_msgs__msg__HelloWorld__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hello_world_msgs__msg__HelloWorld__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hello_world_msgs__msg__HelloWorld__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
