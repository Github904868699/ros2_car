// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
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
#include "yhs_can_interfaces/msg/detail/chassis_info_fb__struct.h"
#include "yhs_can_interfaces/msg/detail/chassis_info_fb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__ctrl_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__ctrl_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__steering_ctrl_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__steering_ctrl_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__io_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__io_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__motor_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__motor_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__lr_wheel_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__lr_wheel_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__rr_wheel_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__rr_wheel_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__lf_wheel_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__lf_wheel_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__rf_wheel_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__rf_wheel_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__front_angle_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__front_angle_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__rear_angle_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__rear_angle_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__bms_flag_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__bms_flag_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__bms_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__bms_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__drive_motor_current_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__drive_motor_current_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__steering_motor_current_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__steering_motor_current_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__error_fb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__error_fb__convert_to_py(void * raw_ros_message);
bool yhs_can_interfaces__msg__ultrasonic__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * yhs_can_interfaces__msg__ultrasonic__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool yhs_can_interfaces__msg__chassis_info_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("yhs_can_interfaces.msg._chassis_info_fb.ChassisInfoFb", full_classname_dest, 53) == 0);
  }
  yhs_can_interfaces__msg__ChassisInfoFb * ros_message = _ros_message;
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
  {  // ctrl_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__ctrl_fb__convert_from_py(field, &ros_message->ctrl_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // steering_ctrl_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_ctrl_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__steering_ctrl_fb__convert_from_py(field, &ros_message->steering_ctrl_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // io_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__io_fb__convert_from_py(field, &ros_message->io_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motor_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__motor_fb__convert_from_py(field, &ros_message->motor_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lr_wheel_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "lr_wheel_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__lr_wheel_fb__convert_from_py(field, &ros_message->lr_wheel_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rr_wheel_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_wheel_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__rr_wheel_fb__convert_from_py(field, &ros_message->rr_wheel_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lf_wheel_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "lf_wheel_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__lf_wheel_fb__convert_from_py(field, &ros_message->lf_wheel_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rf_wheel_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "rf_wheel_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__rf_wheel_fb__convert_from_py(field, &ros_message->rf_wheel_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_angle_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_angle_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__front_angle_fb__convert_from_py(field, &ros_message->front_angle_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_angle_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_angle_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__rear_angle_fb__convert_from_py(field, &ros_message->rear_angle_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bms_flag_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_flag_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__bms_flag_fb__convert_from_py(field, &ros_message->bms_flag_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bms_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__bms_fb__convert_from_py(field, &ros_message->bms_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // drive_motor_current_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_motor_current_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__drive_motor_current_fb__convert_from_py(field, &ros_message->drive_motor_current_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // steering_motor_current_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_motor_current_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__steering_motor_current_fb__convert_from_py(field, &ros_message->steering_motor_current_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error_fb
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_fb");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__error_fb__convert_from_py(field, &ros_message->error_fb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ultrasonic
    PyObject * field = PyObject_GetAttrString(_pymsg, "ultrasonic");
    if (!field) {
      return false;
    }
    if (!yhs_can_interfaces__msg__ultrasonic__convert_from_py(field, &ros_message->ultrasonic)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yhs_can_interfaces__msg__chassis_info_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChassisInfoFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yhs_can_interfaces.msg._chassis_info_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChassisInfoFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yhs_can_interfaces__msg__ChassisInfoFb * ros_message = (yhs_can_interfaces__msg__ChassisInfoFb *)raw_ros_message;
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
  {  // ctrl_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__ctrl_fb__convert_to_py(&ros_message->ctrl_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_ctrl_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__steering_ctrl_fb__convert_to_py(&ros_message->steering_ctrl_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_ctrl_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__io_fb__convert_to_py(&ros_message->io_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__motor_fb__convert_to_py(&ros_message->motor_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lr_wheel_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__lr_wheel_fb__convert_to_py(&ros_message->lr_wheel_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lr_wheel_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_wheel_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__rr_wheel_fb__convert_to_py(&ros_message->rr_wheel_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_wheel_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lf_wheel_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__lf_wheel_fb__convert_to_py(&ros_message->lf_wheel_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lf_wheel_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rf_wheel_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__rf_wheel_fb__convert_to_py(&ros_message->rf_wheel_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rf_wheel_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_angle_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__front_angle_fb__convert_to_py(&ros_message->front_angle_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_angle_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_angle_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__rear_angle_fb__convert_to_py(&ros_message->rear_angle_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_angle_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_flag_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__bms_flag_fb__convert_to_py(&ros_message->bms_flag_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_flag_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__bms_fb__convert_to_py(&ros_message->bms_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_motor_current_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__drive_motor_current_fb__convert_to_py(&ros_message->drive_motor_current_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_motor_current_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_motor_current_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__steering_motor_current_fb__convert_to_py(&ros_message->steering_motor_current_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_motor_current_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_fb
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__error_fb__convert_to_py(&ros_message->error_fb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_fb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ultrasonic
    PyObject * field = NULL;
    field = yhs_can_interfaces__msg__ultrasonic__convert_to_py(&ros_message->ultrasonic);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ultrasonic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
