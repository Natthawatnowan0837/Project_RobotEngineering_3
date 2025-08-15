# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_command_pkg:srv/SendPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendPosition_Request(type):
    """Metaclass of message 'SendPosition_Request'."""

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
            module = import_type_support('my_command_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_command_pkg.srv.SendPosition_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_position__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_position__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_position__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_position__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_position__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendPosition_Request(metaclass=Metaclass_SendPosition_Request):
    """Message class 'SendPosition_Request'."""

    __slots__ = [
        '_send_x',
        '_send_y',
        '_send_z',
    ]

    _fields_and_field_types = {
        'send_x': 'int32',
        'send_y': 'int32',
        'send_z': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.send_x = kwargs.get('send_x', int())
        self.send_y = kwargs.get('send_y', int())
        self.send_z = kwargs.get('send_z', int())

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
        if self.send_x != other.send_x:
            return False
        if self.send_y != other.send_y:
            return False
        if self.send_z != other.send_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def send_x(self):
        """Message field 'send_x'."""
        return self._send_x

    @send_x.setter
    def send_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'send_x' field must be an integer in [-2147483648, 2147483647]"
        self._send_x = value

    @builtins.property
    def send_y(self):
        """Message field 'send_y'."""
        return self._send_y

    @send_y.setter
    def send_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'send_y' field must be an integer in [-2147483648, 2147483647]"
        self._send_y = value

    @builtins.property
    def send_z(self):
        """Message field 'send_z'."""
        return self._send_z

    @send_z.setter
    def send_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'send_z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'send_z' field must be an integer in [-2147483648, 2147483647]"
        self._send_z = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SendPosition_Response(type):
    """Metaclass of message 'SendPosition_Response'."""

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
            module = import_type_support('my_command_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_command_pkg.srv.SendPosition_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_position__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_position__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_position__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_position__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_position__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendPosition_Response(metaclass=Metaclass_SendPosition_Response):
    """Message class 'SendPosition_Response'."""

    __slots__ = [
        '_message',
    ]

    _fields_and_field_types = {
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SendPosition(type):
    """Metaclass of service 'SendPosition'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_command_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_command_pkg.srv.SendPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_position

            from my_command_pkg.srv import _send_position
            if _send_position.Metaclass_SendPosition_Request._TYPE_SUPPORT is None:
                _send_position.Metaclass_SendPosition_Request.__import_type_support__()
            if _send_position.Metaclass_SendPosition_Response._TYPE_SUPPORT is None:
                _send_position.Metaclass_SendPosition_Response.__import_type_support__()


class SendPosition(metaclass=Metaclass_SendPosition):
    from my_command_pkg.srv._send_position import SendPosition_Request as Request
    from my_command_pkg.srv._send_position import SendPosition_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
