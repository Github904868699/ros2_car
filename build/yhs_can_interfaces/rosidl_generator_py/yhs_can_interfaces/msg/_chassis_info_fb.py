# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yhs_can_interfaces:msg/ChassisInfoFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChassisInfoFb(type):
    """Metaclass of message 'ChassisInfoFb'."""

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
                'yhs_can_interfaces.msg.ChassisInfoFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__chassis_info_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__chassis_info_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__chassis_info_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__chassis_info_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__chassis_info_fb

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import BmsFb
            if BmsFb.__class__._TYPE_SUPPORT is None:
                BmsFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import BmsFlagFb
            if BmsFlagFb.__class__._TYPE_SUPPORT is None:
                BmsFlagFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import CtrlFb
            if CtrlFb.__class__._TYPE_SUPPORT is None:
                CtrlFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import DriveMotorCurrentFb
            if DriveMotorCurrentFb.__class__._TYPE_SUPPORT is None:
                DriveMotorCurrentFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import ErrorFb
            if ErrorFb.__class__._TYPE_SUPPORT is None:
                ErrorFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import FrontAngleFb
            if FrontAngleFb.__class__._TYPE_SUPPORT is None:
                FrontAngleFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import IoFb
            if IoFb.__class__._TYPE_SUPPORT is None:
                IoFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import LfWheelFb
            if LfWheelFb.__class__._TYPE_SUPPORT is None:
                LfWheelFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import LrWheelFb
            if LrWheelFb.__class__._TYPE_SUPPORT is None:
                LrWheelFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import MotorFb
            if MotorFb.__class__._TYPE_SUPPORT is None:
                MotorFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import RearAngleFb
            if RearAngleFb.__class__._TYPE_SUPPORT is None:
                RearAngleFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import RfWheelFb
            if RfWheelFb.__class__._TYPE_SUPPORT is None:
                RfWheelFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import RrWheelFb
            if RrWheelFb.__class__._TYPE_SUPPORT is None:
                RrWheelFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import SteeringCtrlFb
            if SteeringCtrlFb.__class__._TYPE_SUPPORT is None:
                SteeringCtrlFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import SteeringMotorCurrentFb
            if SteeringMotorCurrentFb.__class__._TYPE_SUPPORT is None:
                SteeringMotorCurrentFb.__class__.__import_type_support__()

            from yhs_can_interfaces.msg import Ultrasonic
            if Ultrasonic.__class__._TYPE_SUPPORT is None:
                Ultrasonic.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChassisInfoFb(metaclass=Metaclass_ChassisInfoFb):
    """Message class 'ChassisInfoFb'."""

    __slots__ = [
        '_header',
        '_ctrl_fb',
        '_steering_ctrl_fb',
        '_io_fb',
        '_motor_fb',
        '_lr_wheel_fb',
        '_rr_wheel_fb',
        '_lf_wheel_fb',
        '_rf_wheel_fb',
        '_front_angle_fb',
        '_rear_angle_fb',
        '_bms_flag_fb',
        '_bms_fb',
        '_drive_motor_current_fb',
        '_steering_motor_current_fb',
        '_error_fb',
        '_ultrasonic',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ctrl_fb': 'yhs_can_interfaces/CtrlFb',
        'steering_ctrl_fb': 'yhs_can_interfaces/SteeringCtrlFb',
        'io_fb': 'yhs_can_interfaces/IoFb',
        'motor_fb': 'yhs_can_interfaces/MotorFb',
        'lr_wheel_fb': 'yhs_can_interfaces/LrWheelFb',
        'rr_wheel_fb': 'yhs_can_interfaces/RrWheelFb',
        'lf_wheel_fb': 'yhs_can_interfaces/LfWheelFb',
        'rf_wheel_fb': 'yhs_can_interfaces/RfWheelFb',
        'front_angle_fb': 'yhs_can_interfaces/FrontAngleFb',
        'rear_angle_fb': 'yhs_can_interfaces/RearAngleFb',
        'bms_flag_fb': 'yhs_can_interfaces/BmsFlagFb',
        'bms_fb': 'yhs_can_interfaces/BmsFb',
        'drive_motor_current_fb': 'yhs_can_interfaces/DriveMotorCurrentFb',
        'steering_motor_current_fb': 'yhs_can_interfaces/SteeringMotorCurrentFb',
        'error_fb': 'yhs_can_interfaces/ErrorFb',
        'ultrasonic': 'yhs_can_interfaces/Ultrasonic',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'CtrlFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'SteeringCtrlFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'IoFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'MotorFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'LrWheelFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'RrWheelFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'LfWheelFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'RfWheelFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'FrontAngleFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'RearAngleFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'BmsFlagFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'BmsFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'DriveMotorCurrentFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'SteeringMotorCurrentFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'ErrorFb'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['yhs_can_interfaces', 'msg'], 'Ultrasonic'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from yhs_can_interfaces.msg import CtrlFb
        self.ctrl_fb = kwargs.get('ctrl_fb', CtrlFb())
        from yhs_can_interfaces.msg import SteeringCtrlFb
        self.steering_ctrl_fb = kwargs.get('steering_ctrl_fb', SteeringCtrlFb())
        from yhs_can_interfaces.msg import IoFb
        self.io_fb = kwargs.get('io_fb', IoFb())
        from yhs_can_interfaces.msg import MotorFb
        self.motor_fb = kwargs.get('motor_fb', MotorFb())
        from yhs_can_interfaces.msg import LrWheelFb
        self.lr_wheel_fb = kwargs.get('lr_wheel_fb', LrWheelFb())
        from yhs_can_interfaces.msg import RrWheelFb
        self.rr_wheel_fb = kwargs.get('rr_wheel_fb', RrWheelFb())
        from yhs_can_interfaces.msg import LfWheelFb
        self.lf_wheel_fb = kwargs.get('lf_wheel_fb', LfWheelFb())
        from yhs_can_interfaces.msg import RfWheelFb
        self.rf_wheel_fb = kwargs.get('rf_wheel_fb', RfWheelFb())
        from yhs_can_interfaces.msg import FrontAngleFb
        self.front_angle_fb = kwargs.get('front_angle_fb', FrontAngleFb())
        from yhs_can_interfaces.msg import RearAngleFb
        self.rear_angle_fb = kwargs.get('rear_angle_fb', RearAngleFb())
        from yhs_can_interfaces.msg import BmsFlagFb
        self.bms_flag_fb = kwargs.get('bms_flag_fb', BmsFlagFb())
        from yhs_can_interfaces.msg import BmsFb
        self.bms_fb = kwargs.get('bms_fb', BmsFb())
        from yhs_can_interfaces.msg import DriveMotorCurrentFb
        self.drive_motor_current_fb = kwargs.get('drive_motor_current_fb', DriveMotorCurrentFb())
        from yhs_can_interfaces.msg import SteeringMotorCurrentFb
        self.steering_motor_current_fb = kwargs.get('steering_motor_current_fb', SteeringMotorCurrentFb())
        from yhs_can_interfaces.msg import ErrorFb
        self.error_fb = kwargs.get('error_fb', ErrorFb())
        from yhs_can_interfaces.msg import Ultrasonic
        self.ultrasonic = kwargs.get('ultrasonic', Ultrasonic())

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
        if self.header != other.header:
            return False
        if self.ctrl_fb != other.ctrl_fb:
            return False
        if self.steering_ctrl_fb != other.steering_ctrl_fb:
            return False
        if self.io_fb != other.io_fb:
            return False
        if self.motor_fb != other.motor_fb:
            return False
        if self.lr_wheel_fb != other.lr_wheel_fb:
            return False
        if self.rr_wheel_fb != other.rr_wheel_fb:
            return False
        if self.lf_wheel_fb != other.lf_wheel_fb:
            return False
        if self.rf_wheel_fb != other.rf_wheel_fb:
            return False
        if self.front_angle_fb != other.front_angle_fb:
            return False
        if self.rear_angle_fb != other.rear_angle_fb:
            return False
        if self.bms_flag_fb != other.bms_flag_fb:
            return False
        if self.bms_fb != other.bms_fb:
            return False
        if self.drive_motor_current_fb != other.drive_motor_current_fb:
            return False
        if self.steering_motor_current_fb != other.steering_motor_current_fb:
            return False
        if self.error_fb != other.error_fb:
            return False
        if self.ultrasonic != other.ultrasonic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def ctrl_fb(self):
        """Message field 'ctrl_fb'."""
        return self._ctrl_fb

    @ctrl_fb.setter
    def ctrl_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import CtrlFb
            assert \
                isinstance(value, CtrlFb), \
                "The 'ctrl_fb' field must be a sub message of type 'CtrlFb'"
        self._ctrl_fb = value

    @builtins.property
    def steering_ctrl_fb(self):
        """Message field 'steering_ctrl_fb'."""
        return self._steering_ctrl_fb

    @steering_ctrl_fb.setter
    def steering_ctrl_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import SteeringCtrlFb
            assert \
                isinstance(value, SteeringCtrlFb), \
                "The 'steering_ctrl_fb' field must be a sub message of type 'SteeringCtrlFb'"
        self._steering_ctrl_fb = value

    @builtins.property
    def io_fb(self):
        """Message field 'io_fb'."""
        return self._io_fb

    @io_fb.setter
    def io_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import IoFb
            assert \
                isinstance(value, IoFb), \
                "The 'io_fb' field must be a sub message of type 'IoFb'"
        self._io_fb = value

    @builtins.property
    def motor_fb(self):
        """Message field 'motor_fb'."""
        return self._motor_fb

    @motor_fb.setter
    def motor_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import MotorFb
            assert \
                isinstance(value, MotorFb), \
                "The 'motor_fb' field must be a sub message of type 'MotorFb'"
        self._motor_fb = value

    @builtins.property
    def lr_wheel_fb(self):
        """Message field 'lr_wheel_fb'."""
        return self._lr_wheel_fb

    @lr_wheel_fb.setter
    def lr_wheel_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import LrWheelFb
            assert \
                isinstance(value, LrWheelFb), \
                "The 'lr_wheel_fb' field must be a sub message of type 'LrWheelFb'"
        self._lr_wheel_fb = value

    @builtins.property
    def rr_wheel_fb(self):
        """Message field 'rr_wheel_fb'."""
        return self._rr_wheel_fb

    @rr_wheel_fb.setter
    def rr_wheel_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import RrWheelFb
            assert \
                isinstance(value, RrWheelFb), \
                "The 'rr_wheel_fb' field must be a sub message of type 'RrWheelFb'"
        self._rr_wheel_fb = value

    @builtins.property
    def lf_wheel_fb(self):
        """Message field 'lf_wheel_fb'."""
        return self._lf_wheel_fb

    @lf_wheel_fb.setter
    def lf_wheel_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import LfWheelFb
            assert \
                isinstance(value, LfWheelFb), \
                "The 'lf_wheel_fb' field must be a sub message of type 'LfWheelFb'"
        self._lf_wheel_fb = value

    @builtins.property
    def rf_wheel_fb(self):
        """Message field 'rf_wheel_fb'."""
        return self._rf_wheel_fb

    @rf_wheel_fb.setter
    def rf_wheel_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import RfWheelFb
            assert \
                isinstance(value, RfWheelFb), \
                "The 'rf_wheel_fb' field must be a sub message of type 'RfWheelFb'"
        self._rf_wheel_fb = value

    @builtins.property
    def front_angle_fb(self):
        """Message field 'front_angle_fb'."""
        return self._front_angle_fb

    @front_angle_fb.setter
    def front_angle_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import FrontAngleFb
            assert \
                isinstance(value, FrontAngleFb), \
                "The 'front_angle_fb' field must be a sub message of type 'FrontAngleFb'"
        self._front_angle_fb = value

    @builtins.property
    def rear_angle_fb(self):
        """Message field 'rear_angle_fb'."""
        return self._rear_angle_fb

    @rear_angle_fb.setter
    def rear_angle_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import RearAngleFb
            assert \
                isinstance(value, RearAngleFb), \
                "The 'rear_angle_fb' field must be a sub message of type 'RearAngleFb'"
        self._rear_angle_fb = value

    @builtins.property
    def bms_flag_fb(self):
        """Message field 'bms_flag_fb'."""
        return self._bms_flag_fb

    @bms_flag_fb.setter
    def bms_flag_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import BmsFlagFb
            assert \
                isinstance(value, BmsFlagFb), \
                "The 'bms_flag_fb' field must be a sub message of type 'BmsFlagFb'"
        self._bms_flag_fb = value

    @builtins.property
    def bms_fb(self):
        """Message field 'bms_fb'."""
        return self._bms_fb

    @bms_fb.setter
    def bms_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import BmsFb
            assert \
                isinstance(value, BmsFb), \
                "The 'bms_fb' field must be a sub message of type 'BmsFb'"
        self._bms_fb = value

    @builtins.property
    def drive_motor_current_fb(self):
        """Message field 'drive_motor_current_fb'."""
        return self._drive_motor_current_fb

    @drive_motor_current_fb.setter
    def drive_motor_current_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import DriveMotorCurrentFb
            assert \
                isinstance(value, DriveMotorCurrentFb), \
                "The 'drive_motor_current_fb' field must be a sub message of type 'DriveMotorCurrentFb'"
        self._drive_motor_current_fb = value

    @builtins.property
    def steering_motor_current_fb(self):
        """Message field 'steering_motor_current_fb'."""
        return self._steering_motor_current_fb

    @steering_motor_current_fb.setter
    def steering_motor_current_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import SteeringMotorCurrentFb
            assert \
                isinstance(value, SteeringMotorCurrentFb), \
                "The 'steering_motor_current_fb' field must be a sub message of type 'SteeringMotorCurrentFb'"
        self._steering_motor_current_fb = value

    @builtins.property
    def error_fb(self):
        """Message field 'error_fb'."""
        return self._error_fb

    @error_fb.setter
    def error_fb(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import ErrorFb
            assert \
                isinstance(value, ErrorFb), \
                "The 'error_fb' field must be a sub message of type 'ErrorFb'"
        self._error_fb = value

    @builtins.property
    def ultrasonic(self):
        """Message field 'ultrasonic'."""
        return self._ultrasonic

    @ultrasonic.setter
    def ultrasonic(self, value):
        if __debug__:
            from yhs_can_interfaces.msg import Ultrasonic
            assert \
                isinstance(value, Ultrasonic), \
                "The 'ultrasonic' field must be a sub message of type 'Ultrasonic'"
        self._ultrasonic = value
