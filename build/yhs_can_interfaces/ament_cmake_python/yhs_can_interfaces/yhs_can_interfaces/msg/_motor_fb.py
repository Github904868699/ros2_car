# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yhs_can_interfaces:msg/MotorFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorFb(type):
    """Metaclass of message 'MotorFb'."""

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
                'yhs_can_interfaces.msg.MotorFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorFb(metaclass=Metaclass_MotorFb):
    """Message class 'MotorFb'."""

    __slots__ = [
        '_motor_cmd_drive_enable_lf',
        '_motor_cmd_drive_enable_lr',
        '_motor_cmd_drive_enable_rf',
        '_motor_cmd_drive_enable_rr',
        '_motor_cmd_steering_enable_lf',
        '_motor_cmd_steering_enable_lr',
        '_motor_cmd_steering_enable_rf',
        '_motor_cmd_steering_enable_rr',
        '_motor_cmd_power_restart',
    ]

    _fields_and_field_types = {
        'motor_cmd_drive_enable_lf': 'boolean',
        'motor_cmd_drive_enable_lr': 'boolean',
        'motor_cmd_drive_enable_rf': 'boolean',
        'motor_cmd_drive_enable_rr': 'boolean',
        'motor_cmd_steering_enable_lf': 'boolean',
        'motor_cmd_steering_enable_lr': 'boolean',
        'motor_cmd_steering_enable_rf': 'boolean',
        'motor_cmd_steering_enable_rr': 'boolean',
        'motor_cmd_power_restart': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_cmd_drive_enable_lf = kwargs.get('motor_cmd_drive_enable_lf', bool())
        self.motor_cmd_drive_enable_lr = kwargs.get('motor_cmd_drive_enable_lr', bool())
        self.motor_cmd_drive_enable_rf = kwargs.get('motor_cmd_drive_enable_rf', bool())
        self.motor_cmd_drive_enable_rr = kwargs.get('motor_cmd_drive_enable_rr', bool())
        self.motor_cmd_steering_enable_lf = kwargs.get('motor_cmd_steering_enable_lf', bool())
        self.motor_cmd_steering_enable_lr = kwargs.get('motor_cmd_steering_enable_lr', bool())
        self.motor_cmd_steering_enable_rf = kwargs.get('motor_cmd_steering_enable_rf', bool())
        self.motor_cmd_steering_enable_rr = kwargs.get('motor_cmd_steering_enable_rr', bool())
        self.motor_cmd_power_restart = kwargs.get('motor_cmd_power_restart', bool())

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
        if self.motor_cmd_drive_enable_lf != other.motor_cmd_drive_enable_lf:
            return False
        if self.motor_cmd_drive_enable_lr != other.motor_cmd_drive_enable_lr:
            return False
        if self.motor_cmd_drive_enable_rf != other.motor_cmd_drive_enable_rf:
            return False
        if self.motor_cmd_drive_enable_rr != other.motor_cmd_drive_enable_rr:
            return False
        if self.motor_cmd_steering_enable_lf != other.motor_cmd_steering_enable_lf:
            return False
        if self.motor_cmd_steering_enable_lr != other.motor_cmd_steering_enable_lr:
            return False
        if self.motor_cmd_steering_enable_rf != other.motor_cmd_steering_enable_rf:
            return False
        if self.motor_cmd_steering_enable_rr != other.motor_cmd_steering_enable_rr:
            return False
        if self.motor_cmd_power_restart != other.motor_cmd_power_restart:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_cmd_drive_enable_lf(self):
        """Message field 'motor_cmd_drive_enable_lf'."""
        return self._motor_cmd_drive_enable_lf

    @motor_cmd_drive_enable_lf.setter
    def motor_cmd_drive_enable_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_drive_enable_lf' field must be of type 'bool'"
        self._motor_cmd_drive_enable_lf = value

    @builtins.property
    def motor_cmd_drive_enable_lr(self):
        """Message field 'motor_cmd_drive_enable_lr'."""
        return self._motor_cmd_drive_enable_lr

    @motor_cmd_drive_enable_lr.setter
    def motor_cmd_drive_enable_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_drive_enable_lr' field must be of type 'bool'"
        self._motor_cmd_drive_enable_lr = value

    @builtins.property
    def motor_cmd_drive_enable_rf(self):
        """Message field 'motor_cmd_drive_enable_rf'."""
        return self._motor_cmd_drive_enable_rf

    @motor_cmd_drive_enable_rf.setter
    def motor_cmd_drive_enable_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_drive_enable_rf' field must be of type 'bool'"
        self._motor_cmd_drive_enable_rf = value

    @builtins.property
    def motor_cmd_drive_enable_rr(self):
        """Message field 'motor_cmd_drive_enable_rr'."""
        return self._motor_cmd_drive_enable_rr

    @motor_cmd_drive_enable_rr.setter
    def motor_cmd_drive_enable_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_drive_enable_rr' field must be of type 'bool'"
        self._motor_cmd_drive_enable_rr = value

    @builtins.property
    def motor_cmd_steering_enable_lf(self):
        """Message field 'motor_cmd_steering_enable_lf'."""
        return self._motor_cmd_steering_enable_lf

    @motor_cmd_steering_enable_lf.setter
    def motor_cmd_steering_enable_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_steering_enable_lf' field must be of type 'bool'"
        self._motor_cmd_steering_enable_lf = value

    @builtins.property
    def motor_cmd_steering_enable_lr(self):
        """Message field 'motor_cmd_steering_enable_lr'."""
        return self._motor_cmd_steering_enable_lr

    @motor_cmd_steering_enable_lr.setter
    def motor_cmd_steering_enable_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_steering_enable_lr' field must be of type 'bool'"
        self._motor_cmd_steering_enable_lr = value

    @builtins.property
    def motor_cmd_steering_enable_rf(self):
        """Message field 'motor_cmd_steering_enable_rf'."""
        return self._motor_cmd_steering_enable_rf

    @motor_cmd_steering_enable_rf.setter
    def motor_cmd_steering_enable_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_steering_enable_rf' field must be of type 'bool'"
        self._motor_cmd_steering_enable_rf = value

    @builtins.property
    def motor_cmd_steering_enable_rr(self):
        """Message field 'motor_cmd_steering_enable_rr'."""
        return self._motor_cmd_steering_enable_rr

    @motor_cmd_steering_enable_rr.setter
    def motor_cmd_steering_enable_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_steering_enable_rr' field must be of type 'bool'"
        self._motor_cmd_steering_enable_rr = value

    @builtins.property
    def motor_cmd_power_restart(self):
        """Message field 'motor_cmd_power_restart'."""
        return self._motor_cmd_power_restart

    @motor_cmd_power_restart.setter
    def motor_cmd_power_restart(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_cmd_power_restart' field must be of type 'bool'"
        self._motor_cmd_power_restart = value
