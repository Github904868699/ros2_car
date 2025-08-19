# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yhs_can_interfaces:msg/DriveMotorCurrentFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DriveMotorCurrentFb(type):
    """Metaclass of message 'DriveMotorCurrentFb'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('yhs_can_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yhs_can_interfaces.msg.DriveMotorCurrentFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__drive_motor_current_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__drive_motor_current_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__drive_motor_current_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__drive_motor_current_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__drive_motor_current_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DriveMotorCurrentFb(metaclass=Metaclass_DriveMotorCurrentFb):
    """Message class 'DriveMotorCurrentFb'."""

    __slots__ = [
        '_drive_motor_current_fb_lf',
        '_drive_motor_current_fb_lr',
        '_drive_motor_current_fb_rf',
        '_drive_motor_current_fb_rr',
        '_drive_motor_oc_flag_fb_lf',
        '_drive_motor_oc_flag_fb_lr',
        '_drive_motor_oc_flag_fb_rf',
        '_drive_motor_oc_flag_fb_rr',
    ]

    _fields_and_field_types = {
        'drive_motor_current_fb_lf': 'float',
        'drive_motor_current_fb_lr': 'float',
        'drive_motor_current_fb_rf': 'float',
        'drive_motor_current_fb_rr': 'float',
        'drive_motor_oc_flag_fb_lf': 'boolean',
        'drive_motor_oc_flag_fb_lr': 'boolean',
        'drive_motor_oc_flag_fb_rf': 'boolean',
        'drive_motor_oc_flag_fb_rr': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.drive_motor_current_fb_lf = kwargs.get('drive_motor_current_fb_lf', float())
        self.drive_motor_current_fb_lr = kwargs.get('drive_motor_current_fb_lr', float())
        self.drive_motor_current_fb_rf = kwargs.get('drive_motor_current_fb_rf', float())
        self.drive_motor_current_fb_rr = kwargs.get('drive_motor_current_fb_rr', float())
        self.drive_motor_oc_flag_fb_lf = kwargs.get('drive_motor_oc_flag_fb_lf', bool())
        self.drive_motor_oc_flag_fb_lr = kwargs.get('drive_motor_oc_flag_fb_lr', bool())
        self.drive_motor_oc_flag_fb_rf = kwargs.get('drive_motor_oc_flag_fb_rf', bool())
        self.drive_motor_oc_flag_fb_rr = kwargs.get('drive_motor_oc_flag_fb_rr', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.drive_motor_current_fb_lf != other.drive_motor_current_fb_lf:
            return False
        if self.drive_motor_current_fb_lr != other.drive_motor_current_fb_lr:
            return False
        if self.drive_motor_current_fb_rf != other.drive_motor_current_fb_rf:
            return False
        if self.drive_motor_current_fb_rr != other.drive_motor_current_fb_rr:
            return False
        if self.drive_motor_oc_flag_fb_lf != other.drive_motor_oc_flag_fb_lf:
            return False
        if self.drive_motor_oc_flag_fb_lr != other.drive_motor_oc_flag_fb_lr:
            return False
        if self.drive_motor_oc_flag_fb_rf != other.drive_motor_oc_flag_fb_rf:
            return False
        if self.drive_motor_oc_flag_fb_rr != other.drive_motor_oc_flag_fb_rr:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def drive_motor_current_fb_lf(self):
        """Message field 'drive_motor_current_fb_lf'."""
        return self._drive_motor_current_fb_lf

    @drive_motor_current_fb_lf.setter
    def drive_motor_current_fb_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drive_motor_current_fb_lf' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drive_motor_current_fb_lf' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drive_motor_current_fb_lf = value

    @builtins.property
    def drive_motor_current_fb_lr(self):
        """Message field 'drive_motor_current_fb_lr'."""
        return self._drive_motor_current_fb_lr

    @drive_motor_current_fb_lr.setter
    def drive_motor_current_fb_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drive_motor_current_fb_lr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drive_motor_current_fb_lr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drive_motor_current_fb_lr = value

    @builtins.property
    def drive_motor_current_fb_rf(self):
        """Message field 'drive_motor_current_fb_rf'."""
        return self._drive_motor_current_fb_rf

    @drive_motor_current_fb_rf.setter
    def drive_motor_current_fb_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drive_motor_current_fb_rf' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drive_motor_current_fb_rf' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drive_motor_current_fb_rf = value

    @builtins.property
    def drive_motor_current_fb_rr(self):
        """Message field 'drive_motor_current_fb_rr'."""
        return self._drive_motor_current_fb_rr

    @drive_motor_current_fb_rr.setter
    def drive_motor_current_fb_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drive_motor_current_fb_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drive_motor_current_fb_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drive_motor_current_fb_rr = value

    @builtins.property
    def drive_motor_oc_flag_fb_lf(self):
        """Message field 'drive_motor_oc_flag_fb_lf'."""
        return self._drive_motor_oc_flag_fb_lf

    @drive_motor_oc_flag_fb_lf.setter
    def drive_motor_oc_flag_fb_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drive_motor_oc_flag_fb_lf' field must be of type 'bool'"
        self._drive_motor_oc_flag_fb_lf = value

    @builtins.property
    def drive_motor_oc_flag_fb_lr(self):
        """Message field 'drive_motor_oc_flag_fb_lr'."""
        return self._drive_motor_oc_flag_fb_lr

    @drive_motor_oc_flag_fb_lr.setter
    def drive_motor_oc_flag_fb_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drive_motor_oc_flag_fb_lr' field must be of type 'bool'"
        self._drive_motor_oc_flag_fb_lr = value

    @builtins.property
    def drive_motor_oc_flag_fb_rf(self):
        """Message field 'drive_motor_oc_flag_fb_rf'."""
        return self._drive_motor_oc_flag_fb_rf

    @drive_motor_oc_flag_fb_rf.setter
    def drive_motor_oc_flag_fb_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drive_motor_oc_flag_fb_rf' field must be of type 'bool'"
        self._drive_motor_oc_flag_fb_rf = value

    @builtins.property
    def drive_motor_oc_flag_fb_rr(self):
        """Message field 'drive_motor_oc_flag_fb_rr'."""
        return self._drive_motor_oc_flag_fb_rr

    @drive_motor_oc_flag_fb_rr.setter
    def drive_motor_oc_flag_fb_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drive_motor_oc_flag_fb_rr' field must be of type 'bool'"
        self._drive_motor_oc_flag_fb_rr = value
