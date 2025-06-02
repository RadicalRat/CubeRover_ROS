// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice
#include "rover_interfaces/msg/detail/telem_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rover_interfaces__msg__TelemData__init(rover_interfaces__msg__TelemData * msg)
{
  if (!msg) {
    return false;
  }
  // enc1
  // enc2
  // enc3
  // enc4
  // vel1
  // vel2
  // vel3
  // vel4
  // m1current
  // m2current
  // m3current
  // m4current
  // heading_x
  // heading_y
  // heading_z
  // heading_pos
  // heading_vel
  // accel_x
  // accel_y
  // accel_z
  // ang_accel_x
  // ang_accel_y
  // ang_accel_z
  return true;
}

void
rover_interfaces__msg__TelemData__fini(rover_interfaces__msg__TelemData * msg)
{
  if (!msg) {
    return;
  }
  // enc1
  // enc2
  // enc3
  // enc4
  // vel1
  // vel2
  // vel3
  // vel4
  // m1current
  // m2current
  // m3current
  // m4current
  // heading_x
  // heading_y
  // heading_z
  // heading_pos
  // heading_vel
  // accel_x
  // accel_y
  // accel_z
  // ang_accel_x
  // ang_accel_y
  // ang_accel_z
}

bool
rover_interfaces__msg__TelemData__are_equal(const rover_interfaces__msg__TelemData * lhs, const rover_interfaces__msg__TelemData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enc1
  if (lhs->enc1 != rhs->enc1) {
    return false;
  }
  // enc2
  if (lhs->enc2 != rhs->enc2) {
    return false;
  }
  // enc3
  if (lhs->enc3 != rhs->enc3) {
    return false;
  }
  // enc4
  if (lhs->enc4 != rhs->enc4) {
    return false;
  }
  // vel1
  if (lhs->vel1 != rhs->vel1) {
    return false;
  }
  // vel2
  if (lhs->vel2 != rhs->vel2) {
    return false;
  }
  // vel3
  if (lhs->vel3 != rhs->vel3) {
    return false;
  }
  // vel4
  if (lhs->vel4 != rhs->vel4) {
    return false;
  }
  // m1current
  if (lhs->m1current != rhs->m1current) {
    return false;
  }
  // m2current
  if (lhs->m2current != rhs->m2current) {
    return false;
  }
  // m3current
  if (lhs->m3current != rhs->m3current) {
    return false;
  }
  // m4current
  if (lhs->m4current != rhs->m4current) {
    return false;
  }
  // heading_x
  if (lhs->heading_x != rhs->heading_x) {
    return false;
  }
  // heading_y
  if (lhs->heading_y != rhs->heading_y) {
    return false;
  }
  // heading_z
  if (lhs->heading_z != rhs->heading_z) {
    return false;
  }
  // heading_pos
  if (lhs->heading_pos != rhs->heading_pos) {
    return false;
  }
  // heading_vel
  if (lhs->heading_vel != rhs->heading_vel) {
    return false;
  }
  // accel_x
  if (lhs->accel_x != rhs->accel_x) {
    return false;
  }
  // accel_y
  if (lhs->accel_y != rhs->accel_y) {
    return false;
  }
  // accel_z
  if (lhs->accel_z != rhs->accel_z) {
    return false;
  }
  // ang_accel_x
  if (lhs->ang_accel_x != rhs->ang_accel_x) {
    return false;
  }
  // ang_accel_y
  if (lhs->ang_accel_y != rhs->ang_accel_y) {
    return false;
  }
  // ang_accel_z
  if (lhs->ang_accel_z != rhs->ang_accel_z) {
    return false;
  }
  return true;
}

bool
rover_interfaces__msg__TelemData__copy(
  const rover_interfaces__msg__TelemData * input,
  rover_interfaces__msg__TelemData * output)
{
  if (!input || !output) {
    return false;
  }
  // enc1
  output->enc1 = input->enc1;
  // enc2
  output->enc2 = input->enc2;
  // enc3
  output->enc3 = input->enc3;
  // enc4
  output->enc4 = input->enc4;
  // vel1
  output->vel1 = input->vel1;
  // vel2
  output->vel2 = input->vel2;
  // vel3
  output->vel3 = input->vel3;
  // vel4
  output->vel4 = input->vel4;
  // m1current
  output->m1current = input->m1current;
  // m2current
  output->m2current = input->m2current;
  // m3current
  output->m3current = input->m3current;
  // m4current
  output->m4current = input->m4current;
  // heading_x
  output->heading_x = input->heading_x;
  // heading_y
  output->heading_y = input->heading_y;
  // heading_z
  output->heading_z = input->heading_z;
  // heading_pos
  output->heading_pos = input->heading_pos;
  // heading_vel
  output->heading_vel = input->heading_vel;
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  // ang_accel_x
  output->ang_accel_x = input->ang_accel_x;
  // ang_accel_y
  output->ang_accel_y = input->ang_accel_y;
  // ang_accel_z
  output->ang_accel_z = input->ang_accel_z;
  return true;
}

rover_interfaces__msg__TelemData *
rover_interfaces__msg__TelemData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_interfaces__msg__TelemData * msg = (rover_interfaces__msg__TelemData *)allocator.allocate(sizeof(rover_interfaces__msg__TelemData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rover_interfaces__msg__TelemData));
  bool success = rover_interfaces__msg__TelemData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rover_interfaces__msg__TelemData__destroy(rover_interfaces__msg__TelemData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rover_interfaces__msg__TelemData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rover_interfaces__msg__TelemData__Sequence__init(rover_interfaces__msg__TelemData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_interfaces__msg__TelemData * data = NULL;

  if (size) {
    data = (rover_interfaces__msg__TelemData *)allocator.zero_allocate(size, sizeof(rover_interfaces__msg__TelemData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rover_interfaces__msg__TelemData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rover_interfaces__msg__TelemData__fini(&data[i - 1]);
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
rover_interfaces__msg__TelemData__Sequence__fini(rover_interfaces__msg__TelemData__Sequence * array)
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
      rover_interfaces__msg__TelemData__fini(&array->data[i]);
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

rover_interfaces__msg__TelemData__Sequence *
rover_interfaces__msg__TelemData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rover_interfaces__msg__TelemData__Sequence * array = (rover_interfaces__msg__TelemData__Sequence *)allocator.allocate(sizeof(rover_interfaces__msg__TelemData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rover_interfaces__msg__TelemData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rover_interfaces__msg__TelemData__Sequence__destroy(rover_interfaces__msg__TelemData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rover_interfaces__msg__TelemData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rover_interfaces__msg__TelemData__Sequence__are_equal(const rover_interfaces__msg__TelemData__Sequence * lhs, const rover_interfaces__msg__TelemData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rover_interfaces__msg__TelemData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rover_interfaces__msg__TelemData__Sequence__copy(
  const rover_interfaces__msg__TelemData__Sequence * input,
  rover_interfaces__msg__TelemData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rover_interfaces__msg__TelemData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rover_interfaces__msg__TelemData * data =
      (rover_interfaces__msg__TelemData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rover_interfaces__msg__TelemData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rover_interfaces__msg__TelemData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rover_interfaces__msg__TelemData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
