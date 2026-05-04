// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sentry_msgs:msg/FieldEvents.idl
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
#include "sentry_msgs/msg/detail/field_events__struct.h"
#include "sentry_msgs/msg/detail/field_events__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sentry_msgs__msg__field_events__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("sentry_msgs.msg._field_events.FieldEvents", full_classname_dest, 41) == 0);
  }
  sentry_msgs__msg__FieldEvents * ros_message = _ros_message;
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
  {  // supplier_1_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "supplier_1_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->supplier_1_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // supplier_2_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "supplier_2_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->supplier_2_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // supplier_3_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "supplier_3_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->supplier_3_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_rune_activation_point_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_rune_activation_point_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_rune_activation_point_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // small_power_rune_activation_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "small_power_rune_activation_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->small_power_rune_activation_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // big_power_rune_activation_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "big_power_rune_activation_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->big_power_rune_activation_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // r2b2_ground_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2b2_ground_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->r2b2_ground_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // r3b3_ground_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3b3_ground_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->r3b3_ground_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // r4b4_ground_occupation
    PyObject * field = PyObject_GetAttrString(_pymsg, "r4b4_ground_occupation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->r4b4_ground_occupation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // base_has_shield
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_has_shield");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->base_has_shield = (Py_True == field);
    Py_DECREF(field);
  }
  {  // outpost_alive
    PyObject * field = PyObject_GetAttrString(_pymsg, "outpost_alive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->outpost_alive = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sentry_msgs__msg__field_events__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FieldEvents */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sentry_msgs.msg._field_events");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FieldEvents");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sentry_msgs__msg__FieldEvents * ros_message = (sentry_msgs__msg__FieldEvents *)raw_ros_message;
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
  {  // supplier_1_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->supplier_1_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supplier_1_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supplier_2_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->supplier_2_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supplier_2_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supplier_3_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->supplier_3_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supplier_3_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_rune_activation_point_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_rune_activation_point_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_rune_activation_point_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // small_power_rune_activation_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->small_power_rune_activation_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "small_power_rune_activation_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // big_power_rune_activation_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->big_power_rune_activation_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "big_power_rune_activation_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2b2_ground_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->r2b2_ground_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2b2_ground_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3b3_ground_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->r3b3_ground_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3b3_ground_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r4b4_ground_occupation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->r4b4_ground_occupation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r4b4_ground_occupation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_has_shield
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->base_has_shield ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_has_shield", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outpost_alive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->outpost_alive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outpost_alive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
