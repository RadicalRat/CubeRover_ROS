// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_interfaces:srv/RoverCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/srv/rover_command.h"


#ifndef ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__STRUCT_H_
#define ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/RoverCommand in the package rover_interfaces.
typedef struct rover_interfaces__srv__RoverCommand_Request
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__float__Sequence data;
} rover_interfaces__srv__RoverCommand_Request;

// Struct for a sequence of rover_interfaces__srv__RoverCommand_Request.
typedef struct rover_interfaces__srv__RoverCommand_Request__Sequence
{
  rover_interfaces__srv__RoverCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_interfaces__srv__RoverCommand_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/RoverCommand in the package rover_interfaces.
typedef struct rover_interfaces__srv__RoverCommand_Response
{
  bool success;
} rover_interfaces__srv__RoverCommand_Response;

// Struct for a sequence of rover_interfaces__srv__RoverCommand_Response.
typedef struct rover_interfaces__srv__RoverCommand_Response__Sequence
{
  rover_interfaces__srv__RoverCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_interfaces__srv__RoverCommand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rover_interfaces__srv__RoverCommand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rover_interfaces__srv__RoverCommand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RoverCommand in the package rover_interfaces.
typedef struct rover_interfaces__srv__RoverCommand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rover_interfaces__srv__RoverCommand_Request__Sequence request;
  rover_interfaces__srv__RoverCommand_Response__Sequence response;
} rover_interfaces__srv__RoverCommand_Event;

// Struct for a sequence of rover_interfaces__srv__RoverCommand_Event.
typedef struct rover_interfaces__srv__RoverCommand_Event__Sequence
{
  rover_interfaces__srv__RoverCommand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_interfaces__srv__RoverCommand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__STRUCT_H_
