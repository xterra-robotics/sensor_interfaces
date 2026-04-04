from setuptools import find_packages, setup

package_name = 'skydroid_c20'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='xterra',
    maintainer_email='dev@xterra.com',
    description='Skydroid C20 camera and gimbal controller (ROS 2 Python port)',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'start_c20 = skydroid_c20.start_c20:main',
        ],
    },
)
