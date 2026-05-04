# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:srv/VisionModeSwitch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisionModeSwitch_Request(type):
    """Metaclass of message 'VisionModeSwitch_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_ARMOR': 1,
        'MODE_SMALL': 2,
        'MODE_BIG': 3,
        'MODE_TAG': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sentry_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sentry_msgs.srv.VisionModeSwitch_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vision_mode_switch__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vision_mode_switch__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vision_mode_switch__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vision_mode_switch__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vision_mode_switch__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_ARMOR': cls.__constants['MODE_ARMOR'],
            'MODE_SMALL': cls.__constants['MODE_SMALL'],
            'MODE_BIG': cls.__constants['MODE_BIG'],
            'MODE_TAG': cls.__constants['MODE_TAG'],
        }

    @property
    def MODE_ARMOR(self):
        """Message constant 'MODE_ARMOR'."""
        return Metaclass_VisionModeSwitch_Request.__constants['MODE_ARMOR']

    @property
    def MODE_SMALL(self):
        """Message constant 'MODE_SMALL'."""
        return Metaclass_VisionModeSwitch_Request.__constants['MODE_SMALL']

    @property
    def MODE_BIG(self):
        """Message constant 'MODE_BIG'."""
        return Metaclass_VisionModeSwitch_Request.__constants['MODE_BIG']

    @property
    def MODE_TAG(self):
        """Message constant 'MODE_TAG'."""
        return Metaclass_VisionModeSwitch_Request.__constants['MODE_TAG']


class VisionModeSwitch_Request(metaclass=Metaclass_VisionModeSwitch_Request):
    """
    Message class 'VisionModeSwitch_Request'.

    Constants:
      MODE_ARMOR
      MODE_SMALL
      MODE_BIG
      MODE_TAG
    """

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())

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
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_VisionModeSwitch_Response(type):
    """Metaclass of message 'VisionModeSwitch_Response'."""

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
            module = import_type_support('sentry_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sentry_msgs.srv.VisionModeSwitch_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vision_mode_switch__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vision_mode_switch__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vision_mode_switch__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vision_mode_switch__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vision_mode_switch__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionModeSwitch_Response(metaclass=Metaclass_VisionModeSwitch_Response):
    """Message class 'VisionModeSwitch_Response'."""

    __slots__ = [
        '_succ',
    ]

    _fields_and_field_types = {
        'succ': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.succ = kwargs.get('succ', bool())

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
        if self.succ != other.succ:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def succ(self):
        """Message field 'succ'."""
        return self._succ

    @succ.setter
    def succ(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'succ' field must be of type 'bool'"
        self._succ = value


class Metaclass_VisionModeSwitch(type):
    """Metaclass of service 'VisionModeSwitch'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sentry_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sentry_msgs.srv.VisionModeSwitch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__vision_mode_switch

            from sentry_msgs.srv import _vision_mode_switch
            if _vision_mode_switch.Metaclass_VisionModeSwitch_Request._TYPE_SUPPORT is None:
                _vision_mode_switch.Metaclass_VisionModeSwitch_Request.__import_type_support__()
            if _vision_mode_switch.Metaclass_VisionModeSwitch_Response._TYPE_SUPPORT is None:
                _vision_mode_switch.Metaclass_VisionModeSwitch_Response.__import_type_support__()


class VisionModeSwitch(metaclass=Metaclass_VisionModeSwitch):
    from sentry_msgs.srv._vision_mode_switch import VisionModeSwitch_Request as Request
    from sentry_msgs.srv._vision_mode_switch import VisionModeSwitch_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
