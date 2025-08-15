import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jo/project_RobotEngineering_3/my_robot/install/my_robot_pkg'
