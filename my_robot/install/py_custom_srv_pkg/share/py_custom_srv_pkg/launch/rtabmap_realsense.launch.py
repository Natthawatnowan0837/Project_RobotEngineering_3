from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # RealSense camera node
        Node(
            package='realsense2_camera',
            executable='realsense2_camera_node',
            output='screen',
            parameters=[{
                'enable_color': True,
                'enable_depth': True,
                'enable_imu': True,
                'pointcloud.enable': True,
                'frame_id': 'camera_link',
            }],
        ),

        # RTAB-Map node
        Node(
            package='rtabmap_ros',
            executable='rtabmap',
            name='rtabmap',
            output='screen',
            parameters=[{
                'frame_id': 'camera_link',
                'subscribe_rgb': True,
                'subscribe_depth': True,
                'approx_sync': True,
                'queue_size': 10,
                'detect_more_loop_closure': True,
                'subscribe_scan': False,
            }],
            remappings=[
                ('rgb/image', '/camera/color/image_raw'),
                ('depth/image', '/camera/depth/image_rect_raw'),
                ('rgb/camera_info', '/camera/color/camera_info'),
                ('odom', '/odom'),
            ],
        ),

        # RGB-D Odometry node
        Node(
            package='rtabmap_ros',
            executable='rgbd_odometry',
            name='rgbd_odometry',
            output='screen',
            parameters=[{
                'frame_id': 'camera_link',
                'odom_frame_id': 'odom',
                'publish_tf': True,
            }],
            remappings=[
                ('rgb/image', '/camera/color/image_raw'),
                ('depth/image', '/camera/depth/image_rect_raw'),
                ('rgb/camera_info', '/camera/color/camera_info'),
                ('odom', '/odom'),
            ],
        ),
    ])
