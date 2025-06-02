// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rover_interfaces:msg/TelemData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rover_interfaces/msg/detail/telem_data__struct.h"
#include "rover_interfaces/msg/detail/telem_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rover_interfaces__msg__telem_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rover_interfaces.msg._telem_data.TelemData", full_classname_dest, 42) == 0);
  }
  rover_interfaces__msg__TelemData * ros_message = _ros_message;
  {  // enc1
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enc2
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enc3
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enc4
    PyObject * field = PyObject_GetAttrString(_pymsg, "enc4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enc4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel1
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel2
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel3
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel4
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m1current
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m1current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m2current
    PyObject * field = PyObject_GetAttrString(_pymsg, "m2current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m2current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m3current
    PyObject * field = PyObject_GetAttrString(_pymsg, "m3current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m3current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m4current
    PyObject * field = PyObject_GetAttrString(_pymsg, "m4current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m4current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rover_interfaces__msg__telem_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TelemData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rover_interfaces.msg._telem_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TelemData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rover_interfaces__msg__TelemData * ros_message = (rover_interfaces__msg__TelemData *)raw_ros_message;
  {  // enc1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enc4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enc4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enc4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m1current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m1current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m2current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m2current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m2current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m3current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m3current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m3current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m4current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m4current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m4current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
