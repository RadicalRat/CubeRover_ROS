// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rover_interfaces:srv/RoverCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rover_interfaces/srv/detail/rover_command__functions.h"
#include "rover_interfaces/srv/detail/rover_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RoverCommand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RoverCommand_Request_type_support_ids_t;

static const _RoverCommand_Request_type_support_ids_t _RoverCommand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RoverCommand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RoverCommand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RoverCommand_Request_type_support_symbol_names_t _RoverCommand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_interfaces, srv, RoverCommand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_interfaces, srv, RoverCommand_Request)),
  }
};

typedef struct _RoverCommand_Request_type_support_data_t
{
  void * data[2];
} _RoverCommand_Request_type_support_data_t;

static _RoverCommand_Request_type_support_data_t _RoverCommand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RoverCommand_Request_message_typesupport_map = {
  2,
  "rover_interfaces",
  &_RoverCommand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RoverCommand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RoverCommand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RoverCommand_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RoverCommand_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Request__get_type_hash,
  &rover_interfaces__srv__RoverCommand_Request__get_type_description,
  &rover_interfaces__srv__RoverCommand_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Request>()
{
  return &::rover_interfaces::srv::rosidl_typesupport_cpp::RoverCommand_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_interfaces, srv, RoverCommand_Request)() {
  return get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__functions.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RoverCommand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RoverCommand_Response_type_support_ids_t;

static const _RoverCommand_Response_type_support_ids_t _RoverCommand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RoverCommand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RoverCommand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RoverCommand_Response_type_support_symbol_names_t _RoverCommand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_interfaces, srv, RoverCommand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_interfaces, srv, RoverCommand_Response)),
  }
};

typedef struct _RoverCommand_Response_type_support_data_t
{
  void * data[2];
} _RoverCommand_Response_type_support_data_t;

static _RoverCommand_Response_type_support_data_t _RoverCommand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RoverCommand_Response_message_typesupport_map = {
  2,
  "rover_interfaces",
  &_RoverCommand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RoverCommand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RoverCommand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RoverCommand_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RoverCommand_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Response__get_type_hash,
  &rover_interfaces__srv__RoverCommand_Response__get_type_description,
  &rover_interfaces__srv__RoverCommand_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Response>()
{
  return &::rover_interfaces::srv::rosidl_typesupport_cpp::RoverCommand_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_interfaces, srv, RoverCommand_Response)() {
  return get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__functions.h"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RoverCommand_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RoverCommand_Event_type_support_ids_t;

static const _RoverCommand_Event_type_support_ids_t _RoverCommand_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RoverCommand_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RoverCommand_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RoverCommand_Event_type_support_symbol_names_t _RoverCommand_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_interfaces, srv, RoverCommand_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_interfaces, srv, RoverCommand_Event)),
  }
};

typedef struct _RoverCommand_Event_type_support_data_t
{
  void * data[2];
} _RoverCommand_Event_type_support_data_t;

static _RoverCommand_Event_type_support_data_t _RoverCommand_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RoverCommand_Event_message_typesupport_map = {
  2,
  "rover_interfaces",
  &_RoverCommand_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RoverCommand_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RoverCommand_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RoverCommand_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RoverCommand_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rover_interfaces__srv__RoverCommand_Event__get_type_hash,
  &rover_interfaces__srv__RoverCommand_Event__get_type_description,
  &rover_interfaces__srv__RoverCommand_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Event>()
{
  return &::rover_interfaces::srv::rosidl_typesupport_cpp::RoverCommand_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_interfaces, srv, RoverCommand_Event)() {
  return get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rover_interfaces/srv/detail/rover_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rover_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RoverCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RoverCommand_type_support_ids_t;

static const _RoverCommand_type_support_ids_t _RoverCommand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RoverCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RoverCommand_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RoverCommand_type_support_symbol_names_t _RoverCommand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_interfaces, srv, RoverCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rover_interfaces, srv, RoverCommand)),
  }
};

typedef struct _RoverCommand_type_support_data_t
{
  void * data[2];
} _RoverCommand_type_support_data_t;

static _RoverCommand_type_support_data_t _RoverCommand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RoverCommand_service_typesupport_map = {
  2,
  "rover_interfaces",
  &_RoverCommand_service_typesupport_ids.typesupport_identifier[0],
  &_RoverCommand_service_typesupport_symbol_names.symbol_name[0],
  &_RoverCommand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RoverCommand_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RoverCommand_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rover_interfaces::srv::RoverCommand_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rover_interfaces::srv::RoverCommand>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rover_interfaces::srv::RoverCommand>,
  &rover_interfaces__srv__RoverCommand__get_type_hash,
  &rover_interfaces__srv__RoverCommand__get_type_description,
  &rover_interfaces__srv__RoverCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rover_interfaces::srv::RoverCommand>()
{
  return &::rover_interfaces::srv::rosidl_typesupport_cpp::RoverCommand_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, rover_interfaces, srv, RoverCommand)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<rover_interfaces::srv::RoverCommand>();
}

#ifdef __cplusplus
}
#endif
