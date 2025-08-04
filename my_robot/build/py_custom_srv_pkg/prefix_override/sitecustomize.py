import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jo/project_RobotEngineering_3/my_robot/install/py_custom_srv_pkg'
