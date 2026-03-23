import os
from launch import LaunchDescription
from launch.actions import (
    ExecuteProcess, 
    IncludeLaunchDescription, 
    TimerAction, 
    SetEnvironmentVariable, 
    DeclareLaunchArgument, 
    GroupAction
)
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import (
    Command, 
    FindExecutable, 
    PathJoinSubstitution, 
    LaunchConfiguration
)
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory

from launch.actions import GroupAction
from launch_ros.actions import SetRemap


def generate_launch_description():


    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation (Gazebo) clock if true'
    )
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    # Robot State Publisher
    robot_description = Command([
        PathJoinSubstitution([FindExecutable(name='xacro')]), ' ',
        PathJoinSubstitution([FindPackageShare('m2_metal_description'), 'xacro', 'robot.xacro'])
    ])

    rsp = Node(
        package='robot_state_publisher', executable='robot_state_publisher',
        parameters=[
            {'robot_description': ParameterValue(robot_description, value_type=str)},
            {'use_sim_time': use_sim_time} 
        ],
        output='screen'
    )


    realsense_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('realsense2_camera'),
                'launch',
                'rs_launch.py'
            )
        ),
        launch_arguments={
            'enable_color': 'true',
            'enable_depth': 'true',
            'enable_gyro': 'false',
            'enable_accel': 'false',
        }.items()
    )
    
    return LaunchDescription([
        use_sim_time_arg,
        rsp,
	    realsense_launch
    ])
