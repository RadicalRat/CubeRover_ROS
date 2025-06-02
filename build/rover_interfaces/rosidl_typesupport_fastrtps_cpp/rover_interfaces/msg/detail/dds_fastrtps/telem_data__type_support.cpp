// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice
#include "rover_interfaces/msg/detail/telem_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rover_interfaces/msg/detail/telem_data__functions.h"
#include "rover_interfaces/msg/detail/telem_data__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rover_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
cdr_serialize(
  const rover_interfaces::msg::TelemData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enc1
  cdr << ros_message.enc1;

  // Member: enc2
  cdr << ros_message.enc2;

  // Member: enc3
  cdr << ros_message.enc3;

  // Member: enc4
  cdr << ros_message.enc4;

  // Member: vel1
  cdr << ros_message.vel1;

  // Member: vel2
  cdr << ros_message.vel2;

  // Member: vel3
  cdr << ros_message.vel3;

  // Member: vel4
  cdr << ros_message.vel4;

  // Member: m1current
  cdr << ros_message.m1current;

  // Member: m2current
  cdr << ros_message.m2current;

  // Member: m3current
  cdr << ros_message.m3current;

  // Member: m4current
  cdr << ros_message.m4current;

  // Member: heading_x
  cdr << ros_message.heading_x;

  // Member: heading_y
  cdr << ros_message.heading_y;

  // Member: heading_z
  cdr << ros_message.heading_z;

  // Member: heading_pos
  cdr << ros_message.heading_pos;

  // Member: heading_vel
  cdr << ros_message.heading_vel;

  // Member: accel_x
  cdr << ros_message.accel_x;

  // Member: accel_y
  cdr << ros_message.accel_y;

  // Member: accel_z
  cdr << ros_message.accel_z;

  // Member: ang_accel_x
  cdr << ros_message.ang_accel_x;

  // Member: ang_accel_y
  cdr << ros_message.ang_accel_y;

  // Member: ang_accel_z
  cdr << ros_message.ang_accel_z;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rover_interfaces::msg::TelemData & ros_message)
{
  // Member: enc1
  cdr >> ros_message.enc1;

  // Member: enc2
  cdr >> ros_message.enc2;

  // Member: enc3
  cdr >> ros_message.enc3;

  // Member: enc4
  cdr >> ros_message.enc4;

  // Member: vel1
  cdr >> ros_message.vel1;

  // Member: vel2
  cdr >> ros_message.vel2;

  // Member: vel3
  cdr >> ros_message.vel3;

  // Member: vel4
  cdr >> ros_message.vel4;

  // Member: m1current
  cdr >> ros_message.m1current;

  // Member: m2current
  cdr >> ros_message.m2current;

  // Member: m3current
  cdr >> ros_message.m3current;

  // Member: m4current
  cdr >> ros_message.m4current;

  // Member: heading_x
  cdr >> ros_message.heading_x;

  // Member: heading_y
  cdr >> ros_message.heading_y;

  // Member: heading_z
  cdr >> ros_message.heading_z;

  // Member: heading_pos
  cdr >> ros_message.heading_pos;

  // Member: heading_vel
  cdr >> ros_message.heading_vel;

  // Member: accel_x
  cdr >> ros_message.accel_x;

  // Member: accel_y
  cdr >> ros_message.accel_y;

  // Member: accel_z
  cdr >> ros_message.accel_z;

  // Member: ang_accel_x
  cdr >> ros_message.ang_accel_x;

  // Member: ang_accel_y
  cdr >> ros_message.ang_accel_y;

  // Member: ang_accel_z
  cdr >> ros_message.ang_accel_z;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
get_serialized_size(
  const rover_interfaces::msg::TelemData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enc1
  {
    size_t item_size = sizeof(ros_message.enc1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enc2
  {
    size_t item_size = sizeof(ros_message.enc2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enc3
  {
    size_t item_size = sizeof(ros_message.enc3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enc4
  {
    size_t item_size = sizeof(ros_message.enc4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel1
  {
    size_t item_size = sizeof(ros_message.vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel2
  {
    size_t item_size = sizeof(ros_message.vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel3
  {
    size_t item_size = sizeof(ros_message.vel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel4
  {
    size_t item_size = sizeof(ros_message.vel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m1current
  {
    size_t item_size = sizeof(ros_message.m1current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2current
  {
    size_t item_size = sizeof(ros_message.m2current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m3current
  {
    size_t item_size = sizeof(ros_message.m3current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m4current
  {
    size_t item_size = sizeof(ros_message.m4current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_x
  {
    size_t item_size = sizeof(ros_message.heading_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_y
  {
    size_t item_size = sizeof(ros_message.heading_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_z
  {
    size_t item_size = sizeof(ros_message.heading_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_pos
  {
    size_t item_size = sizeof(ros_message.heading_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_vel
  {
    size_t item_size = sizeof(ros_message.heading_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_x
  {
    size_t item_size = sizeof(ros_message.accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_y
  {
    size_t item_size = sizeof(ros_message.accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_z
  {
    size_t item_size = sizeof(ros_message.accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ang_accel_x
  {
    size_t item_size = sizeof(ros_message.ang_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ang_accel_y
  {
    size_t item_size = sizeof(ros_message.ang_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ang_accel_z
  {
    size_t item_size = sizeof(ros_message.ang_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
max_serialized_size_TelemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: enc1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: enc2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: enc3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: enc4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: vel1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: vel2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: vel3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: vel4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: m1current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: m2current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: m3current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: m4current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: heading_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: heading_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: heading_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: heading_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: heading_vel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: accel_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ang_accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ang_accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ang_accel_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rover_interfaces::msg::TelemData;
    is_plain =
      (
      offsetof(DataType, ang_accel_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
cdr_serialize_key(
  const rover_interfaces::msg::TelemData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enc1
  cdr << ros_message.enc1;

  // Member: enc2
  cdr << ros_message.enc2;

  // Member: enc3
  cdr << ros_message.enc3;

  // Member: enc4
  cdr << ros_message.enc4;

  // Member: vel1
  cdr << ros_message.vel1;

  // Member: vel2
  cdr << ros_message.vel2;

  // Member: vel3
  cdr << ros_message.vel3;

  // Member: vel4
  cdr << ros_message.vel4;

  // Member: m1current
  cdr << ros_message.m1current;

  // Member: m2current
  cdr << ros_message.m2current;

  // Member: m3current
  cdr << ros_message.m3current;

  // Member: m4current
  cdr << ros_message.m4current;

  // Member: heading_x
  cdr << ros_message.heading_x;

  // Member: heading_y
  cdr << ros_message.heading_y;

  // Member: heading_z
  cdr << ros_message.heading_z;

  // Member: heading_pos
  cdr << ros_message.heading_pos;

  // Member: heading_vel
  cdr << ros_message.heading_vel;

  // Member: accel_x
  cdr << ros_message.accel_x;

  // Member: accel_y
  cdr << ros_message.accel_y;

  // Member: accel_z
  cdr << ros_message.accel_z;

  // Member: ang_accel_x
  cdr << ros_message.ang_accel_x;

  // Member: ang_accel_y
  cdr << ros_message.ang_accel_y;

  // Member: ang_accel_z
  cdr << ros_message.ang_accel_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
get_serialized_size_key(
  const rover_interfaces::msg::TelemData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enc1
  {
    size_t item_size = sizeof(ros_message.enc1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enc2
  {
    size_t item_size = sizeof(ros_message.enc2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enc3
  {
    size_t item_size = sizeof(ros_message.enc3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enc4
  {
    size_t item_size = sizeof(ros_message.enc4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel1
  {
    size_t item_size = sizeof(ros_message.vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel2
  {
    size_t item_size = sizeof(ros_message.vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel3
  {
    size_t item_size = sizeof(ros_message.vel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: vel4
  {
    size_t item_size = sizeof(ros_message.vel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m1current
  {
    size_t item_size = sizeof(ros_message.m1current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m2current
  {
    size_t item_size = sizeof(ros_message.m2current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m3current
  {
    size_t item_size = sizeof(ros_message.m3current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: m4current
  {
    size_t item_size = sizeof(ros_message.m4current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_x
  {
    size_t item_size = sizeof(ros_message.heading_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_y
  {
    size_t item_size = sizeof(ros_message.heading_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_z
  {
    size_t item_size = sizeof(ros_message.heading_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_pos
  {
    size_t item_size = sizeof(ros_message.heading_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading_vel
  {
    size_t item_size = sizeof(ros_message.heading_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_x
  {
    size_t item_size = sizeof(ros_message.accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_y
  {
    size_t item_size = sizeof(ros_message.accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accel_z
  {
    size_t item_size = sizeof(ros_message.accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ang_accel_x
  {
    size_t item_size = sizeof(ros_message.ang_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ang_accel_y
  {
    size_t item_size = sizeof(ros_message.ang_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ang_accel_z
  {
    size_t item_size = sizeof(ros_message.ang_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_interfaces
max_serialized_size_key_TelemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: enc1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enc2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enc3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enc4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m1current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m2current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m3current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m4current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_vel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ang_accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ang_accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ang_accel_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rover_interfaces::msg::TelemData;
    is_plain =
      (
      offsetof(DataType, ang_accel_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TelemData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rover_interfaces::msg::TelemData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TelemData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rover_interfaces::msg::TelemData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TelemData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rover_interfaces::msg::TelemData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TelemData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TelemData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TelemData__callbacks = {
  "rover_interfaces::msg",
  "TelemData",
  _TelemData__cdr_serialize,
  _TelemData__cdr_deserialize,
  _TelemData__get_serialized_size,
  _TelemData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TelemData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TelemData__callbacks,
  get_message_typesupport_handle_function,
  &rover_interfaces__msg__TelemData__get_type_hash,
  &rover_interfaces__msg__TelemData__get_type_description,
  &rover_interfaces__msg__TelemData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rover_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rover_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rover_interfaces::msg::TelemData>()
{
  return &rover_interfaces::msg::typesupport_fastrtps_cpp::_TelemData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_interfaces, msg, TelemData)() {
  return &rover_interfaces::msg::typesupport_fastrtps_cpp::_TelemData__handle;
}

#ifdef __cplusplus
}
#endif
