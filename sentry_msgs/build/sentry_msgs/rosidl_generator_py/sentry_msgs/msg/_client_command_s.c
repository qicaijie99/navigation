// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sentry_msgs:msg/ClientCommand.idl
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
#include "sentry_msgs/msg/detail/client_command__struct.h"
#include "sentry_msgs/msg/detail/client_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sentry_msgs__msg__client_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("sentry_msgs.msg._client_command.ClientCommand", full_classname_dest, 45) == 0);
  }
  sentry_msgs__msg__ClientCommand * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // target_position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_position_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_position_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_position_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_position_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_position_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // keyboard_key_pressed
    PyObject * field = PyObject_GetAttrString(_pymsg, "keyboard_key_pressed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keyboard_key_pressed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_robot_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sentry_msgs__msg__client_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClientCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sentry_msgs.msg._client_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClientCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sentry_msgs__msg__ClientCommand * ros_message = (sentry_msgs__msg__ClientCommand *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_position_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_position_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_position_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keyboard_key_pressed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->keyboard_key_pressed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keyboard_key_pressed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
