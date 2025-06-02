// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rover_interfaces/msg/telem_data.hpp"


#ifndef ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__TRAITS_HPP_
#define ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rover_interfaces/msg/detail/telem_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rover_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TelemData & msg,
  std::ostream & out)
{
  out << "{";
  // member: enc1
  {
    out << "enc1: ";
    rosidl_generator_traits::value_to_yaml(msg.enc1, out);
    out << ", ";
  }

  // member: enc2
  {
    out << "enc2: ";
    rosidl_generator_traits::value_to_yaml(msg.enc2, out);
    out << ", ";
  }

  // member: enc3
  {
    out << "enc3: ";
    rosidl_generator_traits::value_to_yaml(msg.enc3, out);
    out << ", ";
  }

  // member: enc4
  {
    out << "enc4: ";
    rosidl_generator_traits::value_to_yaml(msg.enc4, out);
    out << ", ";
  }

  // member: vel1
  {
    out << "vel1: ";
    rosidl_generator_traits::value_to_yaml(msg.vel1, out);
    out << ", ";
  }

  // member: vel2
  {
    out << "vel2: ";
    rosidl_generator_traits::value_to_yaml(msg.vel2, out);
    out << ", ";
  }

  // member: vel3
  {
    out << "vel3: ";
    rosidl_generator_traits::value_to_yaml(msg.vel3, out);
    out << ", ";
  }

  // member: vel4
  {
    out << "vel4: ";
    rosidl_generator_traits::value_to_yaml(msg.vel4, out);
    out << ", ";
  }

  // member: m1current
  {
    out << "m1current: ";
    rosidl_generator_traits::value_to_yaml(msg.m1current, out);
    out << ", ";
  }

  // member: m2current
  {
    out << "m2current: ";
    rosidl_generator_traits::value_to_yaml(msg.m2current, out);
    out << ", ";
  }

  // member: m3current
  {
    out << "m3current: ";
    rosidl_generator_traits::value_to_yaml(msg.m3current, out);
    out << ", ";
  }

  // member: m4current
  {
    out << "m4current: ";
    rosidl_generator_traits::value_to_yaml(msg.m4current, out);
    out << ", ";
  }

  // member: heading_x
  {
    out << "heading_x: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_x, out);
    out << ", ";
  }

  // member: heading_y
  {
    out << "heading_y: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_y, out);
    out << ", ";
  }

  // member: heading_z
  {
    out << "heading_z: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_z, out);
    out << ", ";
  }

  // member: heading_pos
  {
    out << "heading_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_pos, out);
    out << ", ";
  }

  // member: heading_vel
  {
    out << "heading_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_vel, out);
    out << ", ";
  }

  // member: accel_x
  {
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << ", ";
  }

  // member: accel_y
  {
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << ", ";
  }

  // member: accel_z
  {
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << ", ";
  }

  // member: ang_accel_x
  {
    out << "ang_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_accel_x, out);
    out << ", ";
  }

  // member: ang_accel_y
  {
    out << "ang_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_accel_y, out);
    out << ", ";
  }

  // member: ang_accel_z
  {
    out << "ang_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_accel_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TelemData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enc1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc1: ";
    rosidl_generator_traits::value_to_yaml(msg.enc1, out);
    out << "\n";
  }

  // member: enc2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc2: ";
    rosidl_generator_traits::value_to_yaml(msg.enc2, out);
    out << "\n";
  }

  // member: enc3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc3: ";
    rosidl_generator_traits::value_to_yaml(msg.enc3, out);
    out << "\n";
  }

  // member: enc4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enc4: ";
    rosidl_generator_traits::value_to_yaml(msg.enc4, out);
    out << "\n";
  }

  // member: vel1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel1: ";
    rosidl_generator_traits::value_to_yaml(msg.vel1, out);
    out << "\n";
  }

  // member: vel2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel2: ";
    rosidl_generator_traits::value_to_yaml(msg.vel2, out);
    out << "\n";
  }

  // member: vel3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel3: ";
    rosidl_generator_traits::value_to_yaml(msg.vel3, out);
    out << "\n";
  }

  // member: vel4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel4: ";
    rosidl_generator_traits::value_to_yaml(msg.vel4, out);
    out << "\n";
  }

  // member: m1current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m1current: ";
    rosidl_generator_traits::value_to_yaml(msg.m1current, out);
    out << "\n";
  }

  // member: m2current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2current: ";
    rosidl_generator_traits::value_to_yaml(msg.m2current, out);
    out << "\n";
  }

  // member: m3current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m3current: ";
    rosidl_generator_traits::value_to_yaml(msg.m3current, out);
    out << "\n";
  }

  // member: m4current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m4current: ";
    rosidl_generator_traits::value_to_yaml(msg.m4current, out);
    out << "\n";
  }

  // member: heading_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_x: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_x, out);
    out << "\n";
  }

  // member: heading_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_y: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_y, out);
    out << "\n";
  }

  // member: heading_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_z: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_z, out);
    out << "\n";
  }

  // member: heading_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_pos, out);
    out << "\n";
  }

  // member: heading_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_vel, out);
    out << "\n";
  }

  // member: accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << "\n";
  }

  // member: accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << "\n";
  }

  // member: accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << "\n";
  }

  // member: ang_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_accel_x, out);
    out << "\n";
  }

  // member: ang_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_accel_y, out);
    out << "\n";
  }

  // member: ang_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_accel_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TelemData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rover_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rover_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rover_interfaces::msg::TelemData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rover_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rover_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rover_interfaces::msg::TelemData & msg)
{
  return rover_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rover_interfaces::msg::TelemData>()
{
  return "rover_interfaces::msg::TelemData";
}

template<>
inline const char * name<rover_interfaces::msg::TelemData>()
{
  return "rover_interfaces/msg/TelemData";
}

template<>
struct has_fixed_size<rover_interfaces::msg::TelemData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rover_interfaces::msg::TelemData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rover_interfaces::msg::TelemData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVER_INTERFACES__MSG__DETAIL__TELEM_DATA__TRAITS_HPP_
