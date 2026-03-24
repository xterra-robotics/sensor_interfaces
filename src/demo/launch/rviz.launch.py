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

# common -> multi_sensor_mapping + pointcloud_to_laserscan + nav2 
# hardware -> lair_autonomy_bridge + streaming_test
# sim -> gazebo_ros + spawn_entity + rviz + lair_gazebo_bridge + camera_simulation_stream
# special case -> elevation_mapping

def generate_launch_description():

    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation (Gazebo) clock if true'
    )

    rviz_config = os.path.join(
        get_package_share_directory('demo'),
        'config',
        'demo.rviz'
    )

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config],
        output='screen'
    )

    static_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_link_to_camera_frame',
        arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'camera_frame'],
        output='screen'
    )

    return LaunchDescription([
        use_sim_time_arg,
        static_tf,
        rviz,
    ])