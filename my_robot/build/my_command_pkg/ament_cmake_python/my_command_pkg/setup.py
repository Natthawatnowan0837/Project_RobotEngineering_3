from setuptools import find_packages
from setuptools import setup

setup(
    name='my_command_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('my_command_pkg', 'my_command_pkg.*')),
)
