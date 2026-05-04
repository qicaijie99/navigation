# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sentry_msgs:msg/FieldEvents.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FieldEvents(type):
    """Metaclass of message 'FieldEvents'."""

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
                'sentry_msgs.msg.FieldEvents')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__field_events
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__field_events
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__field_events
            cls._TYPE_SUPPORT = module.type_support_msg__msg__field_events
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__field_events

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldEvents(metaclass=Metaclass_FieldEvents):
    """Message class 'FieldEvents'."""

    __slots__ = [
        '_header',
        '_supplier_1_occupation',
        '_supplier_2_occupation',
        '_supplier_3_occupation',
        '_power_rune_activation_point_occupation',
        '_small_power_rune_activation_status',
        '_big_power_rune_activation_status',
        '_r2b2_ground_occupation',
        '_r3b3_ground_occupation',
        '_r4b4_ground_occupation',
        '_base_has_shield',
        '_outpost_alive',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'supplier_1_occupation': 'boolean',
        'supplier_2_occupation': 'boolean',
        'supplier_3_occupation': 'boolean',
        'power_rune_activation_point_occupation': 'boolean',
        'small_power_rune_activation_status': 'boolean',
        'big_power_rune_activation_status': 'boolean',
        'r2b2_ground_occupation': 'boolean',
        'r3b3_ground_occupation': 'boolean',
        'r4b4_ground_occupation': 'boolean',
        'base_has_shield': 'boolean',
        'outpost_alive': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.supplier_1_occupation = kwargs.get('supplier_1_occupation', bool())
        self.supplier_2_occupation = kwargs.get('supplier_2_occupation', bool())
        self.supplier_3_occupation = kwargs.get('supplier_3_occupation', bool())
        self.power_rune_activation_point_occupation = kwargs.get('power_rune_activation_point_occupation', bool())
        self.small_power_rune_activation_status = kwargs.get('small_power_rune_activation_status', bool())
        self.big_power_rune_activation_status = kwargs.get('big_power_rune_activation_status', bool())
        self.r2b2_ground_occupation = kwargs.get('r2b2_ground_occupation', bool())
        self.r3b3_ground_occupation = kwargs.get('r3b3_ground_occupation', bool())
        self.r4b4_ground_occupation = kwargs.get('r4b4_ground_occupation', bool())
        self.base_has_shield = kwargs.get('base_has_shield', bool())
        self.outpost_alive = kwargs.get('outpost_alive', bool())

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
        if self.supplier_1_occupation != other.supplier_1_occupation:
            return False
        if self.supplier_2_occupation != other.supplier_2_occupation:
            return False
        if self.supplier_3_occupation != other.supplier_3_occupation:
            return False
        if self.power_rune_activation_point_occupation != other.power_rune_activation_point_occupation:
            return False
        if self.small_power_rune_activation_status != other.small_power_rune_activation_status:
            return False
        if self.big_power_rune_activation_status != other.big_power_rune_activation_status:
            return False
        if self.r2b2_ground_occupation != other.r2b2_ground_occupation:
            return False
        if self.r3b3_ground_occupation != other.r3b3_ground_occupation:
            return False
        if self.r4b4_ground_occupation != other.r4b4_ground_occupation:
            return False
        if self.base_has_shield != other.base_has_shield:
            return False
        if self.outpost_alive != other.outpost_alive:
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
    def supplier_1_occupation(self):
        """Message field 'supplier_1_occupation'."""
        return self._supplier_1_occupation

    @supplier_1_occupation.setter
    def supplier_1_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'supplier_1_occupation' field must be of type 'bool'"
        self._supplier_1_occupation = value

    @builtins.property
    def supplier_2_occupation(self):
        """Message field 'supplier_2_occupation'."""
        return self._supplier_2_occupation

    @supplier_2_occupation.setter
    def supplier_2_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'supplier_2_occupation' field must be of type 'bool'"
        self._supplier_2_occupation = value

    @builtins.property
    def supplier_3_occupation(self):
        """Message field 'supplier_3_occupation'."""
        return self._supplier_3_occupation

    @supplier_3_occupation.setter
    def supplier_3_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'supplier_3_occupation' field must be of type 'bool'"
        self._supplier_3_occupation = value

    @builtins.property
    def power_rune_activation_point_occupation(self):
        """Message field 'power_rune_activation_point_occupation'."""
        return self._power_rune_activation_point_occupation

    @power_rune_activation_point_occupation.setter
    def power_rune_activation_point_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_rune_activation_point_occupation' field must be of type 'bool'"
        self._power_rune_activation_point_occupation = value

    @builtins.property
    def small_power_rune_activation_status(self):
        """Message field 'small_power_rune_activation_status'."""
        return self._small_power_rune_activation_status

    @small_power_rune_activation_status.setter
    def small_power_rune_activation_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'small_power_rune_activation_status' field must be of type 'bool'"
        self._small_power_rune_activation_status = value

    @builtins.property
    def big_power_rune_activation_status(self):
        """Message field 'big_power_rune_activation_status'."""
        return self._big_power_rune_activation_status

    @big_power_rune_activation_status.setter
    def big_power_rune_activation_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'big_power_rune_activation_status' field must be of type 'bool'"
        self._big_power_rune_activation_status = value

    @builtins.property
    def r2b2_ground_occupation(self):
        """Message field 'r2b2_ground_occupation'."""
        return self._r2b2_ground_occupation

    @r2b2_ground_occupation.setter
    def r2b2_ground_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'r2b2_ground_occupation' field must be of type 'bool'"
        self._r2b2_ground_occupation = value

    @builtins.property
    def r3b3_ground_occupation(self):
        """Message field 'r3b3_ground_occupation'."""
        return self._r3b3_ground_occupation

    @r3b3_ground_occupation.setter
    def r3b3_ground_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'r3b3_ground_occupation' field must be of type 'bool'"
        self._r3b3_ground_occupation = value

    @builtins.property
    def r4b4_ground_occupation(self):
        """Message field 'r4b4_ground_occupation'."""
        return self._r4b4_ground_occupation

    @r4b4_ground_occupation.setter
    def r4b4_ground_occupation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'r4b4_ground_occupation' field must be of type 'bool'"
        self._r4b4_ground_occupation = value

    @builtins.property
    def base_has_shield(self):
        """Message field 'base_has_shield'."""
        return self._base_has_shield

    @base_has_shield.setter
    def base_has_shield(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'base_has_shield' field must be of type 'bool'"
        self._base_has_shield = value

    @builtins.property
    def outpost_alive(self):
        """Message field 'outpost_alive'."""
        return self._outpost_alive

    @outpost_alive.setter
    def outpost_alive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'outpost_alive' field must be of type 'bool'"
        self._outpost_alive = value
