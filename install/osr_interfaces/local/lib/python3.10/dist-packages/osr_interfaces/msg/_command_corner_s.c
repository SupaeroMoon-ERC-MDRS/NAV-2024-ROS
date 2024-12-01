// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from osr_interfaces:msg/CommandCorner.idl
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
#include "osr_interfaces/msg/detail/command_corner__struct.h"
#include "osr_interfaces/msg/detail/command_corner__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool osr_interfaces__msg__command_corner__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("osr_interfaces.msg._command_corner.CommandCorner", full_classname_dest, 48) == 0);
  }
  osr_interfaces__msg__CommandCorner * ros_message = _ros_message;
  {  // left_front_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_front_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_front_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_back_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_back_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_back_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_front_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_front_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_front_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_back_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_back_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_back_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * osr_interfaces__msg__command_corner__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommandCorner */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("osr_interfaces.msg._command_corner");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommandCorner");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  osr_interfaces__msg__CommandCorner * ros_message = (osr_interfaces__msg__CommandCorner *)raw_ros_message;
  {  // left_front_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_front_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_front_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_back_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_back_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_back_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_front_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_front_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_front_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_back_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_back_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_back_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
