// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sentry_msgs:msg/DualLoopPID.idl
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
#include "sentry_msgs/msg/detail/dual_loop_pid__struct.h"
#include "sentry_msgs/msg/detail/dual_loop_pid__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sentry_msgs__msg__dual_loop_pid__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sentry_msgs.msg._dual_loop_pid.DualLoopPID", full_classname_dest, 42) == 0);
  }
  sentry_msgs__msg__DualLoopPID * ros_message = _ros_message;
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
  {  // inner_kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_kp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_ki = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_kd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_kp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_ki = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_kd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_max_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_max_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_max_out = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_max_iout
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_max_iout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_max_iout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_max_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_max_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_max_out = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_max_iout
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_max_iout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_max_iout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_feedback = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_error_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_error_sum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_error_sum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_last_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_last_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_last_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_feedback = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_error_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_error_sum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_error_sum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_last_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_last_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_last_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_pout
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_pout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_pout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_iout
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_iout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_iout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_dout
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_dout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_dout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_out = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_pout
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_pout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_pout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_iout
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_iout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_iout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_dout
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_dout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_dout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_out = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sentry_msgs__msg__dual_loop_pid__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DualLoopPID */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sentry_msgs.msg._dual_loop_pid");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DualLoopPID");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sentry_msgs__msg__DualLoopPID * ros_message = (sentry_msgs__msg__DualLoopPID *)raw_ros_message;
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
  {  // inner_kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_max_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_max_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_max_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_max_iout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_max_iout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_max_iout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_max_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_max_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_max_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_max_iout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_max_iout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_max_iout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_error_sum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_error_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_error_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_last_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_last_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_last_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_error_sum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_error_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_error_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_last_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_last_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_last_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_pout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_pout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_pout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_iout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_iout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_iout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_dout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_dout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_dout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_pout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_pout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_pout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_iout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_iout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_iout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_dout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_dout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_dout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
