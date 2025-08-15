from setuptools import find_packages, setup

package_name = 'my_robot_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (f'share/{package_name}/launch', ['launch/rtabmap_realsense.launch.py']),
    ], 
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='andrea',
    maintainer_email='andrea@example.com',
    description='Python nodes that use a custom service',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'voice_speech = my_robot_pkg.voice_speech:main',
            'robot_client = my_robot_pkg.robot_client:main',
            'nevigetion = my_robot_pkg.nevigetion:main',        
        ],
    },
)
