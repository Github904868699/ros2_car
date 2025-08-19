// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yhs_can_interfaces:msg/SteeringMotorCurrentFb.idl
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
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__struct.h"
#include "yhs_can_interfaces/msg/detail/steering_motor_current_fb__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool yhs_can_interfaces__msg__steering_motor_current_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("yhs_can_interfaces.msg._steering_motor_current_fb.SteeringMotorCurrentFb", full_classname_dest, 72) == 0);
  }
  yhs_can_interfaces__msg__SteeringMotorCurrentFb * ros_message = _ros_message;
  {  // steering_motor_current_fb_lf
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_current_fb_lf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_current_fb_lf = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_motor_current_fb_lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_current_fb_lr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_current_fb_lr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_motor_current_fb_rf
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_current_fb_rf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_current_fb_rf = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_motor_current_fb_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_current_fb_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_motor_current_fb_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_motor_oc_flag_fb_lf
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_oc_flag_fb_lf");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_motor_oc_flag_fb_lf = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_motor_oc_flag_fb_lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_oc_flag_fb_lr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_motor_oc_flag_fb_lr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_motor_oc_flag_fb_rf
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_oc_flag_fb_rf");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_motor_oc_flag_fb_rf = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_motor_oc_flag_fb_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_oc_flag_fb_rr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_motor_oc_flag_fb_rr = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yhs_can_interfaces__msg__steering_motor_current_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SteeringMotorCurrentFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yhs_can_interfaces.msg._steering_motor_current_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SteeringMotorCurrentFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yhs_can_interfaces__msg__SteeringMotorCurrentFb * ros_message = (yhs_can_interfaces__msg__SteeringMotorCurrentFb *)raw_ros_message;
  {  // steering_motor_current_fb_lf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_current_fb_lf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_current_fb_lf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_current_fb_lr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_current_fb_lr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_current_fb_lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_current_fb_rf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_current_fb_rf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_current_fb_rf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_current_fb_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_motor_current_fb_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_current_fb_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_oc_flag_fb_lf
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_motor_oc_flag_fb_lf ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_oc_flag_fb_lf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_oc_flag_fb_lr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_motor_oc_flag_fb_lr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_oc_flag_fb_lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_oc_flag_fb_rf
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_motor_oc_flag_fb_rf ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_oc_flag_fb_rf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_oc_flag_fb_rr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_motor_oc_flag_fb_rr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_oc_flag_fb_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
