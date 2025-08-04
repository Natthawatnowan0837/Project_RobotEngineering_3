from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # เรียกกล้อง D435i
        Node(
            package='realsense2_camera',
            executable='realsense2_camera_node',
            name='realsense2_camera',
            output='screen',
            parameters=[{
                'enable_gyro': True,
                'enable_accel': True,
                'enable_depth': True,
                'enable_color': True,
                'enable_sync': True
            }]
        ),

        # Odometry จากภาพ RGBD
        Node(
            package='rtabmap_ros',
            executable='rgbd_odometry',
            name='rgbd_odometry',
            output='screen',
            parameters=[{
                'frame_id': 'camera_link',
                'odom_frame_id': 'odom',
                'publish_tf': True,
                'approx_sync': True
            }],
            remappings=[
                ('rgb/image', '/camera/color/image_raw'),
                ('depth/image', '/camera/depth/image_rect_raw'),
                ('rgb/camera_info', '/camera/color/camera_info')
            ]
        ),

        # RTAB-Map Node
        Node(
            package='rtabmap_ros',
            executable='rtabmap',
            name='rtabmap',
            output='screen',
            parameters=[{
                'frame_id': 'camera_link',
                'subscribe_rgbd': True,
                'subscribe_odom_info': True,
                'approx_sync': True
            }],
            remappings=[
                ('rgb/image', '/camera/color/image_raw'),
                ('depth/image', '/camera/depth/image_rect_raw'),
                ('rgb/camera_info', '/camera/color/camera_info'),
                ('odom', '/odom')
            ]
        )
    ])
