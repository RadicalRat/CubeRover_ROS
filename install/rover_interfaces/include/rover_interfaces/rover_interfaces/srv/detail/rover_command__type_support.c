// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rover_interfaces:srv/RoverCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rover_interfaces/srv/detail/rover_command__rosidl_typesupport_introspection_c.h"
#include "rover_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rover_interfaces/srv/detail/rover_command__functions.h"
#include "rover_interfaces/srv/detail/rover_command__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_interfaces__srv__RoverCommand_Request__init(message_memory);
}

void rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_fini_function(void * message_memory)
{
  rover_interfaces__srv__RoverCommand_Request__fini(message_memory);
}

size_t rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__size_function__RoverCommand_Request__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Request__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__get_function__RoverCommand_Request__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__fetch_function__RoverCommand_Request__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Request__data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__assign_function__RoverCommand_Request__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__get_function__RoverCommand_Request__data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__resize_function__RoverCommand_Request__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_interfaces__srv__RoverCommand_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_interfaces__srv__RoverCommand_Request, data),  // bytes offset in struct
    NULL,  // default value
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__size_function__RoverCommand_Request__data,  // size() function pointer
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Request__data,  // get_const(index) function pointer
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__get_function__RoverCommand_Request__data,  // get(index) function pointer
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__fetch_function__RoverCommand_Request__data,  // fetch(index, &value) function pointer
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__assign_function__RoverCommand_Request__data,  // assign(index, value) function pointer
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__resize_function__RoverCommand_Request__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_members = {
  "rover_interfaces__srv",  // message namespace
  "RoverCommand_Request",  // message name
  2,  // number of fields
  sizeof(rover_interfaces__srv__RoverCommand_Request),
  false,  // has_any_key_member_
  rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_member_array,  // message members
  rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_type_support_handle = {
  0,
  &rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_members,
  get_message_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Request__get_type_hash,
  &rover_interfaces__srv__RoverCommand_Request__get_type_description,
  &rover_interfaces__srv__RoverCommand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Request)() {
  if (!rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_type_support_handle.typesupport_identifier) {
    rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_interfaces/srv/detail/rover_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__functions.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_interfaces__srv__RoverCommand_Response__init(message_memory);
}

void rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_fini_function(void * message_memory)
{
  rover_interfaces__srv__RoverCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_interfaces__srv__RoverCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_members = {
  "rover_interfaces__srv",  // message namespace
  "RoverCommand_Response",  // message name
  1,  // number of fields
  sizeof(rover_interfaces__srv__RoverCommand_Response),
  false,  // has_any_key_member_
  rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_member_array,  // message members
  rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle = {
  0,
  &rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_members,
  get_message_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Response__get_type_hash,
  &rover_interfaces__srv__RoverCommand_Response__get_type_description,
  &rover_interfaces__srv__RoverCommand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Response)() {
  if (!rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle.typesupport_identifier) {
    rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rover_interfaces/srv/detail/rover_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rover_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__functions.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "rover_interfaces/srv/rover_command.h"
// Member `request`
// Member `response`
// already included above
// #include "rover_interfaces/srv/detail/rover_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_interfaces__srv__RoverCommand_Event__init(message_memory);
}

void rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_fini_function(void * message_memory)
{
  rover_interfaces__srv__RoverCommand_Event__fini(message_memory);
}

size_t rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__size_function__RoverCommand_Event__request(
  const void * untyped_member)
{
  const rover_interfaces__srv__RoverCommand_Request__Sequence * member =
    (const rover_interfaces__srv__RoverCommand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Event__request(
  const void * untyped_member, size_t index)
{
  const rover_interfaces__srv__RoverCommand_Request__Sequence * member =
    (const rover_interfaces__srv__RoverCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_function__RoverCommand_Event__request(
  void * untyped_member, size_t index)
{
  rover_interfaces__srv__RoverCommand_Request__Sequence * member =
    (rover_interfaces__srv__RoverCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RoverCommand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_interfaces__srv__RoverCommand_Request * item =
    ((const rover_interfaces__srv__RoverCommand_Request *)
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Event__request(untyped_member, index));
  rover_interfaces__srv__RoverCommand_Request * value =
    (rover_interfaces__srv__RoverCommand_Request *)(untyped_value);
  *value = *item;
}

void rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__assign_function__RoverCommand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_interfaces__srv__RoverCommand_Request * item =
    ((rover_interfaces__srv__RoverCommand_Request *)
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_function__RoverCommand_Event__request(untyped_member, index));
  const rover_interfaces__srv__RoverCommand_Request * value =
    (const rover_interfaces__srv__RoverCommand_Request *)(untyped_value);
  *item = *value;
}

bool rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__resize_function__RoverCommand_Event__request(
  void * untyped_member, size_t size)
{
  rover_interfaces__srv__RoverCommand_Request__Sequence * member =
    (rover_interfaces__srv__RoverCommand_Request__Sequence *)(untyped_member);
  rover_interfaces__srv__RoverCommand_Request__Sequence__fini(member);
  return rover_interfaces__srv__RoverCommand_Request__Sequence__init(member, size);
}

size_t rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__size_function__RoverCommand_Event__response(
  const void * untyped_member)
{
  const rover_interfaces__srv__RoverCommand_Response__Sequence * member =
    (const rover_interfaces__srv__RoverCommand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Event__response(
  const void * untyped_member, size_t index)
{
  const rover_interfaces__srv__RoverCommand_Response__Sequence * member =
    (const rover_interfaces__srv__RoverCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_function__RoverCommand_Event__response(
  void * untyped_member, size_t index)
{
  rover_interfaces__srv__RoverCommand_Response__Sequence * member =
    (rover_interfaces__srv__RoverCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RoverCommand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_interfaces__srv__RoverCommand_Response * item =
    ((const rover_interfaces__srv__RoverCommand_Response *)
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Event__response(untyped_member, index));
  rover_interfaces__srv__RoverCommand_Response * value =
    (rover_interfaces__srv__RoverCommand_Response *)(untyped_value);
  *value = *item;
}

void rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__assign_function__RoverCommand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_interfaces__srv__RoverCommand_Response * item =
    ((rover_interfaces__srv__RoverCommand_Response *)
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_function__RoverCommand_Event__response(untyped_member, index));
  const rover_interfaces__srv__RoverCommand_Response * value =
    (const rover_interfaces__srv__RoverCommand_Response *)(untyped_value);
  *item = *value;
}

bool rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__resize_function__RoverCommand_Event__response(
  void * untyped_member, size_t size)
{
  rover_interfaces__srv__RoverCommand_Response__Sequence * member =
    (rover_interfaces__srv__RoverCommand_Response__Sequence *)(untyped_member);
  rover_interfaces__srv__RoverCommand_Response__Sequence__fini(member);
  return rover_interfaces__srv__RoverCommand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_interfaces__srv__RoverCommand_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rover_interfaces__srv__RoverCommand_Event, request),  // bytes offset in struct
    NULL,  // default value
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__size_function__RoverCommand_Event__request,  // size() function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Event__request,  // get_const(index) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_function__RoverCommand_Event__request,  // get(index) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RoverCommand_Event__request,  // fetch(index, &value) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__assign_function__RoverCommand_Event__request,  // assign(index, value) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__resize_function__RoverCommand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(rover_interfaces__srv__RoverCommand_Event, response),  // bytes offset in struct
    NULL,  // default value
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__size_function__RoverCommand_Event__response,  // size() function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RoverCommand_Event__response,  // get_const(index) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__get_function__RoverCommand_Event__response,  // get(index) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RoverCommand_Event__response,  // fetch(index, &value) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__assign_function__RoverCommand_Event__response,  // assign(index, value) function pointer
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__resize_function__RoverCommand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_members = {
  "rover_interfaces__srv",  // message namespace
  "RoverCommand_Event",  // message name
  3,  // number of fields
  sizeof(rover_interfaces__srv__RoverCommand_Event),
  false,  // has_any_key_member_
  rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_member_array,  // message members
  rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_type_support_handle = {
  0,
  &rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_members,
  get_message_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Event__get_type_hash,
  &rover_interfaces__srv__RoverCommand_Event__get_type_description,
  &rover_interfaces__srv__RoverCommand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Event)() {
  rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Request)();
  rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Response)();
  if (!rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_type_support_handle.typesupport_identifier) {
    rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rover_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_members = {
  "rover_interfaces__srv",  // service namespace
  "RoverCommand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_Request_message_type_support_handle,
  NULL,  // response message
  // rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle
  NULL  // event_message
  // rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle
};


static rosidl_service_type_support_t rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_type_support_handle = {
  0,
  &rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_members,
  get_service_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Request__rosidl_typesupport_introspection_c__RoverCommand_Request_message_type_support_handle,
  &rover_interfaces__srv__RoverCommand_Response__rosidl_typesupport_introspection_c__RoverCommand_Response_message_type_support_handle,
  &rover_interfaces__srv__RoverCommand_Event__rosidl_typesupport_introspection_c__RoverCommand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rover_interfaces,
    srv,
    RoverCommand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rover_interfaces,
    srv,
    RoverCommand
  ),
  &rover_interfaces__srv__RoverCommand__get_type_hash,
  &rover_interfaces__srv__RoverCommand__get_type_description,
  &rover_interfaces__srv__RoverCommand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand)(void) {
  if (!rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_type_support_handle.typesupport_identifier) {
    rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_interfaces, srv, RoverCommand_Event)()->data;
  }

  return &rover_interfaces__srv__detail__rover_command__rosidl_typesupport_introspection_c__RoverCommand_service_type_support_handle;
}
