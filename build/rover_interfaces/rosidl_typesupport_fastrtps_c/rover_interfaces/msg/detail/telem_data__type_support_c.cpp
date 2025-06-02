// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice
#include "rover_interfaces/msg/detail/telem_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rover_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rover_interfaces/msg/detail/telem_data__struct.h"
#include "rover_interfaces/msg/detail/telem_data__functions.h"
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


// forward declare type support functions


using _TelemData__ros_msg_type = rover_interfaces__msg__TelemData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
bool cdr_serialize_rover_interfaces__msg__TelemData(
  const rover_interfaces__msg__TelemData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: enc1
  {
    cdr << ros_message->enc1;
  }

  // Field name: enc2
  {
    cdr << ros_message->enc2;
  }

  // Field name: enc3
  {
    cdr << ros_message->enc3;
  }

  // Field name: enc4
  {
    cdr << ros_message->enc4;
  }

  // Field name: vel1
  {
    cdr << ros_message->vel1;
  }

  // Field name: vel2
  {
    cdr << ros_message->vel2;
  }

  // Field name: vel3
  {
    cdr << ros_message->vel3;
  }

  // Field name: vel4
  {
    cdr << ros_message->vel4;
  }

  // Field name: m1current
  {
    cdr << ros_message->m1current;
  }

  // Field name: m2current
  {
    cdr << ros_message->m2current;
  }

  // Field name: m3current
  {
    cdr << ros_message->m3current;
  }

  // Field name: m4current
  {
    cdr << ros_message->m4current;
  }

  // Field name: heading_x
  {
    cdr << ros_message->heading_x;
  }

  // Field name: heading_y
  {
    cdr << ros_message->heading_y;
  }

  // Field name: heading_z
  {
    cdr << ros_message->heading_z;
  }

  // Field name: heading_pos
  {
    cdr << ros_message->heading_pos;
  }

  // Field name: heading_vel
  {
    cdr << ros_message->heading_vel;
  }

  // Field name: accel_x
  {
    cdr << ros_message->accel_x;
  }

  // Field name: accel_y
  {
    cdr << ros_message->accel_y;
  }

  // Field name: accel_z
  {
    cdr << ros_message->accel_z;
  }

  // Field name: ang_accel_x
  {
    cdr << ros_message->ang_accel_x;
  }

  // Field name: ang_accel_y
  {
    cdr << ros_message->ang_accel_y;
  }

  // Field name: ang_accel_z
  {
    cdr << ros_message->ang_accel_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
bool cdr_deserialize_rover_interfaces__msg__TelemData(
  eprosima::fastcdr::Cdr & cdr,
  rover_interfaces__msg__TelemData * ros_message)
{
  // Field name: enc1
  {
    cdr >> ros_message->enc1;
  }

  // Field name: enc2
  {
    cdr >> ros_message->enc2;
  }

  // Field name: enc3
  {
    cdr >> ros_message->enc3;
  }

  // Field name: enc4
  {
    cdr >> ros_message->enc4;
  }

  // Field name: vel1
  {
    cdr >> ros_message->vel1;
  }

  // Field name: vel2
  {
    cdr >> ros_message->vel2;
  }

  // Field name: vel3
  {
    cdr >> ros_message->vel3;
  }

  // Field name: vel4
  {
    cdr >> ros_message->vel4;
  }

  // Field name: m1current
  {
    cdr >> ros_message->m1current;
  }

  // Field name: m2current
  {
    cdr >> ros_message->m2current;
  }

  // Field name: m3current
  {
    cdr >> ros_message->m3current;
  }

  // Field name: m4current
  {
    cdr >> ros_message->m4current;
  }

  // Field name: heading_x
  {
    cdr >> ros_message->heading_x;
  }

  // Field name: heading_y
  {
    cdr >> ros_message->heading_y;
  }

  // Field name: heading_z
  {
    cdr >> ros_message->heading_z;
  }

  // Field name: heading_pos
  {
    cdr >> ros_message->heading_pos;
  }

  // Field name: heading_vel
  {
    cdr >> ros_message->heading_vel;
  }

  // Field name: accel_x
  {
    cdr >> ros_message->accel_x;
  }

  // Field name: accel_y
  {
    cdr >> ros_message->accel_y;
  }

  // Field name: accel_z
  {
    cdr >> ros_message->accel_z;
  }

  // Field name: ang_accel_x
  {
    cdr >> ros_message->ang_accel_x;
  }

  // Field name: ang_accel_y
  {
    cdr >> ros_message->ang_accel_y;
  }

  // Field name: ang_accel_z
  {
    cdr >> ros_message->ang_accel_z;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t get_serialized_size_rover_interfaces__msg__TelemData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelemData__ros_msg_type * ros_message = static_cast<const _TelemData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: enc1
  {
    size_t item_size = sizeof(ros_message->enc1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enc2
  {
    size_t item_size = sizeof(ros_message->enc2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enc3
  {
    size_t item_size = sizeof(ros_message->enc3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enc4
  {
    size_t item_size = sizeof(ros_message->enc4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel1
  {
    size_t item_size = sizeof(ros_message->vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel2
  {
    size_t item_size = sizeof(ros_message->vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel3
  {
    size_t item_size = sizeof(ros_message->vel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel4
  {
    size_t item_size = sizeof(ros_message->vel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m1current
  {
    size_t item_size = sizeof(ros_message->m1current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m2current
  {
    size_t item_size = sizeof(ros_message->m2current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m3current
  {
    size_t item_size = sizeof(ros_message->m3current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m4current
  {
    size_t item_size = sizeof(ros_message->m4current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_x
  {
    size_t item_size = sizeof(ros_message->heading_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_y
  {
    size_t item_size = sizeof(ros_message->heading_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_z
  {
    size_t item_size = sizeof(ros_message->heading_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_pos
  {
    size_t item_size = sizeof(ros_message->heading_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_vel
  {
    size_t item_size = sizeof(ros_message->heading_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accel_x
  {
    size_t item_size = sizeof(ros_message->accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accel_y
  {
    size_t item_size = sizeof(ros_message->accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accel_z
  {
    size_t item_size = sizeof(ros_message->accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_accel_x
  {
    size_t item_size = sizeof(ros_message->ang_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_accel_y
  {
    size_t item_size = sizeof(ros_message->ang_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_accel_z
  {
    size_t item_size = sizeof(ros_message->ang_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t max_serialized_size_rover_interfaces__msg__TelemData(
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

  // Field name: enc1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enc2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enc3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enc4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m1current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m2current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m3current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m4current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_vel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accel_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_accel_z
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
    using DataType = rover_interfaces__msg__TelemData;
    is_plain =
      (
      offsetof(DataType, ang_accel_z) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
bool cdr_serialize_key_rover_interfaces__msg__TelemData(
  const rover_interfaces__msg__TelemData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: enc1
  {
    cdr << ros_message->enc1;
  }

  // Field name: enc2
  {
    cdr << ros_message->enc2;
  }

  // Field name: enc3
  {
    cdr << ros_message->enc3;
  }

  // Field name: enc4
  {
    cdr << ros_message->enc4;
  }

  // Field name: vel1
  {
    cdr << ros_message->vel1;
  }

  // Field name: vel2
  {
    cdr << ros_message->vel2;
  }

  // Field name: vel3
  {
    cdr << ros_message->vel3;
  }

  // Field name: vel4
  {
    cdr << ros_message->vel4;
  }

  // Field name: m1current
  {
    cdr << ros_message->m1current;
  }

  // Field name: m2current
  {
    cdr << ros_message->m2current;
  }

  // Field name: m3current
  {
    cdr << ros_message->m3current;
  }

  // Field name: m4current
  {
    cdr << ros_message->m4current;
  }

  // Field name: heading_x
  {
    cdr << ros_message->heading_x;
  }

  // Field name: heading_y
  {
    cdr << ros_message->heading_y;
  }

  // Field name: heading_z
  {
    cdr << ros_message->heading_z;
  }

  // Field name: heading_pos
  {
    cdr << ros_message->heading_pos;
  }

  // Field name: heading_vel
  {
    cdr << ros_message->heading_vel;
  }

  // Field name: accel_x
  {
    cdr << ros_message->accel_x;
  }

  // Field name: accel_y
  {
    cdr << ros_message->accel_y;
  }

  // Field name: accel_z
  {
    cdr << ros_message->accel_z;
  }

  // Field name: ang_accel_x
  {
    cdr << ros_message->ang_accel_x;
  }

  // Field name: ang_accel_y
  {
    cdr << ros_message->ang_accel_y;
  }

  // Field name: ang_accel_z
  {
    cdr << ros_message->ang_accel_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t get_serialized_size_key_rover_interfaces__msg__TelemData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelemData__ros_msg_type * ros_message = static_cast<const _TelemData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: enc1
  {
    size_t item_size = sizeof(ros_message->enc1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enc2
  {
    size_t item_size = sizeof(ros_message->enc2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enc3
  {
    size_t item_size = sizeof(ros_message->enc3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enc4
  {
    size_t item_size = sizeof(ros_message->enc4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel1
  {
    size_t item_size = sizeof(ros_message->vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel2
  {
    size_t item_size = sizeof(ros_message->vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel3
  {
    size_t item_size = sizeof(ros_message->vel3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vel4
  {
    size_t item_size = sizeof(ros_message->vel4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m1current
  {
    size_t item_size = sizeof(ros_message->m1current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m2current
  {
    size_t item_size = sizeof(ros_message->m2current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m3current
  {
    size_t item_size = sizeof(ros_message->m3current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m4current
  {
    size_t item_size = sizeof(ros_message->m4current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_x
  {
    size_t item_size = sizeof(ros_message->heading_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_y
  {
    size_t item_size = sizeof(ros_message->heading_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_z
  {
    size_t item_size = sizeof(ros_message->heading_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_pos
  {
    size_t item_size = sizeof(ros_message->heading_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_vel
  {
    size_t item_size = sizeof(ros_message->heading_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accel_x
  {
    size_t item_size = sizeof(ros_message->accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accel_y
  {
    size_t item_size = sizeof(ros_message->accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: accel_z
  {
    size_t item_size = sizeof(ros_message->accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_accel_x
  {
    size_t item_size = sizeof(ros_message->ang_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_accel_y
  {
    size_t item_size = sizeof(ros_message->ang_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_accel_z
  {
    size_t item_size = sizeof(ros_message->ang_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rover_interfaces
size_t max_serialized_size_key_rover_interfaces__msg__TelemData(
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
  // Field name: enc1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enc2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enc3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enc4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: vel4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m1current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m2current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m3current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: m4current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_pos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading_vel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: accel_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_accel_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_accel_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_accel_z
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
    using DataType = rover_interfaces__msg__TelemData;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rover_interfaces__msg__TelemData * ros_message = static_cast<const rover_interfaces__msg__TelemData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rover_interfaces__msg__TelemData(ros_message, cdr);
}

static bool _TelemData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rover_interfaces__msg__TelemData * ros_message = static_cast<rover_interfaces__msg__TelemData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rover_interfaces__msg__TelemData(cdr, ros_message);
}

static uint32_t _TelemData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rover_interfaces__msg__TelemData(
      untyped_ros_message, 0));
}

static size_t _TelemData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rover_interfaces__msg__TelemData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TelemData = {
  "rover_interfaces::msg",
  "TelemData",
  _TelemData__cdr_serialize,
  _TelemData__cdr_deserialize,
  _TelemData__get_serialized_size,
  _TelemData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TelemData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TelemData,
  get_message_typesupport_handle_function,
  &rover_interfaces__msg__TelemData__get_type_hash,
  &rover_interfaces__msg__TelemData__get_type_description,
  &rover_interfaces__msg__TelemData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rover_interfaces, msg, TelemData)() {
  return &_TelemData__type_support;
}

#if defined(__cplusplus)
}
#endif
