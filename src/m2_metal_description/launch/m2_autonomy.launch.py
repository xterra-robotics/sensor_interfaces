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

    # ========================================================================
    # 1. DECLARE ARGUMENTS
    # ========================================================================
    
    simulation_arg = DeclareLaunchArgument(
        'simulation',
        default_value='false',
        description='Set to true for Gazebo simulation, false for real hardware'
    )

    enable_elev_mapping_arg = DeclareLaunchArgument(
        'enable_elevation_mapping',
        default_value='false',
        description='Enable elevation mapping (runs on both Sim and Hardware if true)'
    )

    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation (Gazebo) clock if true'
    )
    
    map_yaml_file_arg = DeclareLaunchArgument(
        'map',
        default_value=PathJoinSubstitution([
            FindPackageShare('motion_planner'),
            'map',
            'tata_map7_2C.yaml'
        ]),
        description='Full path to map yaml file to load'
    )

    params_file_arg = DeclareLaunchArgument(
        'params_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('motion_planner'),
            'config',
            'm2_nav2_params.yaml'
        ]),
        description='Full path to the ROS2 parameters file to use for all launched nodes'
    )

    # ========================================================================
    # 2. SETUP CONFIGURATIONS
    # ========================================================================
    simulation = LaunchConfiguration('simulation')
    enable_elevation_mapping = LaunchConfiguration('enable_elevation_mapping')
    use_sim_time = LaunchConfiguration('use_sim_time')
    map_yaml_file = LaunchConfiguration('map')
    params_file = LaunchConfiguration('params_file')

    # --- DYNAMIC GAZEBO MODEL PATH ---
    motion_planner_share = get_package_share_directory('motion_planner')
    gazebo_models_path = os.path.join(motion_planner_share, 'models')

    existing_model_path = os.environ.get('GAZEBO_MODEL_PATH', '')
    if existing_model_path:
        gazebo_model_path_env = gazebo_models_path + ':' + existing_model_path
    else:
        gazebo_model_path_env = gazebo_models_path

    set_gazebo_model_path = SetEnvironmentVariable(
        name='GAZEBO_MODEL_PATH',
        value=gazebo_model_path_env
    )

    # ========================================================================
    # 3. SHARED RESOURCES 
    # ========================================================================
    
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

    multi_sesnor_mapping_node = Node(
        package='perception', 
        executable='multi_sensor_mapping',
        name='multi_sensor_mapping',
        parameters=[
            {'enable_bag_play': False},
            {'use_sim_time': use_sim_time} 
        ],
        output='screen'
    )

    pointcloud_to_laserscan_node = Node(
        package='pointcloud_to_laserscan',
        executable='pointcloud_to_laserscan_node',
        name='pointcloud_to_laserscan',
        output='screen',
        parameters=[{
            'target_frame': 'base_link',
            'transform_tolerance': 0.01,
            'min_height': -0.1,       
            'max_height': 0.1,         
            'angle_min': -3.1415926,   
            'angle_max': 3.1415926,   
            'angle_increment': 0.0087,
            'scan_time': 0.1,
            'range_min': 0.15,
            'range_max': 30.0,
            'use_inf': True,
            'inf_epsilon': 1.0,
            'concurrency_level': 1,
            'use_sim_time': use_sim_time  
        }],
        remappings=[
            ('cloud_in', '/fused_pointcloud'),
            ('scan', '/scan'),
        ],
    )

    # Nav2 Bringup
    nav2_bringup_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('nav2_bringup'),
                'launch', 'bringup_launch.py'
            ])
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'map': map_yaml_file,
            'params_file': params_file,
            'autostart': 'true'
        }.items()
    )

    delayed_nav2_start = TimerAction(
        period=15.0,
        actions=[nav2_bringup_launch]
    )

    # ========================================================================
    # 4. ELEVATION MAPPING (Conditional: enable_elevation_mapping only)
    # ========================================================================
    
    elevation_mapping_group = GroupAction(
        condition=IfCondition(enable_elevation_mapping),
        actions=[
            TimerAction(
                period=12.0, 
                actions=[
                    IncludeLaunchDescription(
                        PythonLaunchDescriptionSource([
                            PathJoinSubstitution([
                                FindPackageShare('elevation_mapping_cupy'),
                                'launch', 'elevation_mapping.launch.py'
                            ])
                        ]),
                        launch_arguments={'use_sim_time': use_sim_time}.items()
                    )
                ]
            )
        ]
    )

    # ========================================================================
    # 5. HARDWARE MODE NODES (simulation := false)
    # ========================================================================
    
    hardware_group = GroupAction(
        condition=UnlessCondition(simulation),
        actions=[
            TimerAction(
                period=10.0,
                actions=[
                    Node(
                        package='motion_planner',
                        executable='lair_autonomy_bridge',
                        name='lair_autonomy_bridge',
                        output='screen',
                        parameters=[{
                            'enable_imu_bridge': False,
                            'use_sim_time': use_sim_time, 
                            'enable_camera_bag_sync': False
                        }]
                    )
                ]
            ),
	    TimerAction(
                period=12.0,
                actions=[
                    Node(
                        package='perception',
                        executable='realsense_relay',
                        name='realsense_relay',
                        output='screen',
                        parameters=[{
                            'use_sim_time': use_sim_time 
                        }]
                    )
                ]
            )

#            TimerAction(
#                period=12.0, 
#                actions=[
#                    Node(
#                        package='perception',
#                        executable='general_purpose_streaming',
#                        name='general_purpose_streaming',
#                        output='screen',
#                        arguments=['4'], 
#                        parameters=[{'use_sim_time': use_sim_time}]
#                    )
#                ]
#            )
        ]
    )

    # ========================================================================
    # 6. SIMULATION MODE NODES (simulation := true)
    # ========================================================================

    # Finds the world file dynamically
    m2_metal_share = get_package_share_directory('m2_metal_description')
    world_file = os.path.join(m2_metal_share, 'worlds', 'world4.world')

    simulation_group = GroupAction(
        condition=IfCondition(simulation),
        actions=[
            set_gazebo_model_path,

            # 1. Gazebo Launch
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource([
                    PathJoinSubstitution([
                        FindPackageShare('gazebo_ros'),
                        'launch', 'gazebo.launch.py'
                    ])
                ]),
                launch_arguments={
                    'world'  : world_file,
                    'verbose': 'true',
                }.items()
            ),

            # 2. Spawn Entity
            TimerAction(
                period=2.0,
                actions=[
                    Node(
                        package='gazebo_ros', executable='spawn_entity.py',
                        arguments=[
                            '-topic', 'robot_description',
                            '-entity', 'm2_metal',
                            '-x', '0',   
                            '-y', '0',
                            '-z', '0.3' 
                        ],
                        output='screen'
                    )
                ]
            ),

            # 3. RViz - DYNAMIC CONFIG PATH
            TimerAction(
                period=5.0,
                actions=[
                    Node(
                        package='rviz2',
                        executable='rviz2',
                        name='rviz2_nav2',
                        # Using PathJoinSubstitution here replaces the hardcoded string
                        arguments=['-d', PathJoinSubstitution([
                            FindPackageShare('m2_metal_description'),
                            'config',
                            'elevation_mapping_sim.rviz'
                        ])],
                        parameters=[{'use_sim_time': use_sim_time}],
                        output='screen'
                    )
                ]
            ),

            # 4. Lair Gazebo Bridge
            TimerAction(
                period=10.0,
                actions=[
                    Node(
                        package='xterra_autonomy_sim',
                        executable='lair_gazebo_bridge',
                        name='lair_gazebo_bridge',
                        output='screen',
                        parameters=[{'use_sim_time': use_sim_time}]
                    )
                ]
            ),

            # 5. Camera Sim Stream
            TimerAction(
                period=10.0,
                actions=[
                    Node(
                        package='perception',
                        executable='camera_simulation_stream',
                        name='camera_simulation_stream',
                        output='screen',
                        parameters=[{'use_sim_time': use_sim_time}]
                    )
                ]
            )
        ]
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
        simulation_arg,
        enable_elev_mapping_arg,
        use_sim_time_arg,
        map_yaml_file_arg,
        params_file_arg,
        rsp,
        # multi_sesnor_mapping_node,
        # delayed_nav2_start,
        #elevation_mapping_group,
        hardware_group,
	    realsense_launch
        #simulation_group,
        #pointcloud_to_laserscan_node
    ])
