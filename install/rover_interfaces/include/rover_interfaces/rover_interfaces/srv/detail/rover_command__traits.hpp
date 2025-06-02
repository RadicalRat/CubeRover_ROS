// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rover_interfaces:srv/RoverCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/srv/rover_command.hpp"


#ifndef ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__TRAITS_HPP_
#define ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rover_interfaces/srv/detail/rover_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rover_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RoverCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rover_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rover_interfaces::srv::RoverCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rover_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rover_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rover_interfaces::srv::RoverCommand_Request & msg)
{
  return rover_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rover_interfaces::srv::RoverCommand_Request>()
{
  return "rover_interfaces::srv::RoverCommand_Request";
}

template<>
inline const char * name<rover_interfaces::srv::RoverCommand_Request>()
{
  return "rover_interfaces/srv/RoverCommand_Request";
}

template<>
struct has_fixed_size<rover_interfaces::srv::RoverCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rover_interfaces::srv::RoverCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rover_interfaces::srv::RoverCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rover_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RoverCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rover_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rover_interfaces::srv::RoverCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rover_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rover_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rover_interfaces::srv::RoverCommand_Response & msg)
{
  return rover_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rover_interfaces::srv::RoverCommand_Response>()
{
  return "rover_interfaces::srv::RoverCommand_Response";
}

template<>
inline const char * name<rover_interfaces::srv::RoverCommand_Response>()
{
  return "rover_interfaces/srv/RoverCommand_Response";
}

template<>
struct has_fixed_size<rover_interfaces::srv::RoverCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rover_interfaces::srv::RoverCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rover_interfaces::srv::RoverCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rover_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RoverCommand_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverCommand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverCommand_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rover_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rover_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rover_interfaces::srv::RoverCommand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rover_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rover_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rover_interfaces::srv::RoverCommand_Event & msg)
{
  return rover_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rover_interfaces::srv::RoverCommand_Event>()
{
  return "rover_interfaces::srv::RoverCommand_Event";
}

template<>
inline const char * name<rover_interfaces::srv::RoverCommand_Event>()
{
  return "rover_interfaces/srv/RoverCommand_Event";
}

template<>
struct has_fixed_size<rover_interfaces::srv::RoverCommand_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rover_interfaces::srv::RoverCommand_Event>
  : std::integral_constant<bool, has_bounded_size<rover_interfaces::srv::RoverCommand_Request>::value && has_bounded_size<rover_interfaces::srv::RoverCommand_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rover_interfaces::srv::RoverCommand_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rover_interfaces::srv::RoverCommand>()
{
  return "rover_interfaces::srv::RoverCommand";
}

template<>
inline const char * name<rover_interfaces::srv::RoverCommand>()
{
  return "rover_interfaces/srv/RoverCommand";
}

template<>
struct has_fixed_size<rover_interfaces::srv::RoverCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<rover_interfaces::srv::RoverCommand_Request>::value &&
    has_fixed_size<rover_interfaces::srv::RoverCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<rover_interfaces::srv::RoverCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<rover_interfaces::srv::RoverCommand_Request>::value &&
    has_bounded_size<rover_interfaces::srv::RoverCommand_Response>::value
  >
{
};

template<>
struct is_service<rover_interfaces::srv::RoverCommand>
  : std::true_type
{
};

template<>
struct is_service_request<rover_interfaces::srv::RoverCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rover_interfaces::srv::RoverCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROVER_INTERFACES__SRV__DETAIL__ROVER_COMMAND__TRAITS_HPP_
