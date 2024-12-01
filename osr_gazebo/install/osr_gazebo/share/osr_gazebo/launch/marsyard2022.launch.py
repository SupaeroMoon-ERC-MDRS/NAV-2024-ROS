import os

from ament_index_python.packages import get_package_share_directory


from launch import LaunchDescription
from launch.actions import ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler, SetEnvironmentVariable
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node

import xacro

# def generate_launch_description():
#     pkg_gazebo_ros = get_package_share_directory('gazebo_ros')

#     set_model_path = SetEnvironmentVariable(
#         name='GAZEBO_MODEL_PATH',
#         value=os.path.join(get_package_share_directory('osr_gazebo'), 'models')
#     )

#     world = os.path.join(
#         get_package_share_directory('osr_gazebo'),
#         'worlds',
#         'marsyard2022.world'
#     )
#     print(f"World path: {world}")

#     gzserver_cmd = IncludeLaunchDescription(
#         PythonLaunchDescriptionSource(
#             os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
#         ),
#         launch_arguments={'world': world, 'verbose':'true'}.items()
#     )

#     gzclient_cmd = IncludeLaunchDescription(
#         PythonLaunchDescriptionSource(
#             os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
#         )
#     )

#     osr_urdf_path = os.path.join(
#         get_package_share_directory('osr_gazebo'))

#     xacro_file = os.path.join(osr_urdf_path,
#                               'urdf',
#                               'osr.urdf.xacro')

#     doc = xacro.parse(open(xacro_file))
#     xacro.process_doc(doc)
#     params = {'robot_description': doc.toxml()}

#     node_robot_state_publisher = Node(
#         package='robot_state_publisher',
#         executable='robot_state_publisher',
#         output='screen',
#         parameters=[params]
#     )

#     controller_spawn = Node(
#         package='osr_gazebo',
#         executable='osr_controller',
#         output='screen'
#     )
    
#     spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
#                         arguments=['-topic', 'robot_description',
#                                    '-entity', 'rover'],
#                         output='screen')


#     # joint_state_controller
#     load_joint_state_controller = ExecuteProcess(
#         cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'joint_state_broadcaster'],
#         output='screen'
#     )

#     # wheel_velocity_controller
#     rover_wheel_controller = ExecuteProcess(
#         cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'wheel_controller'],
#         output='screen'
#     )

#     # servo_controller
#     servo_controller = ExecuteProcess(
#         cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'servo_controller'],
#         output='screen'
#     )
    
#     return LaunchDescription([
#     	controller_spawn,
#         set_model_path,
#         gzserver_cmd,
#         gzclient_cmd,
#         RegisterEventHandler(
#             event_handler=OnProcessExit(
#                 target_action=spawn_entity,
#                 on_exit=[
#                     load_joint_state_controller,
#                     rover_wheel_controller,
#                     servo_controller,
#                 ],
#             )
#         ),
   

#         node_robot_state_publisher,
#         spawn_entity,
#     ])


def generate_launch_description():
    world = os.path.join(
        get_package_share_directory('osr_gazebo'),
        'worlds',
        'marsyard2022.world'
    )
    
    gzserver_cmd = ExecuteProcess(
        cmd=['gzserver', '--verbose', world],
        output='screen'
    )
    
    gzclient_cmd = ExecuteProcess(
        cmd=['gzclient'],
        output='screen'
    )
    
    return LaunchDescription([gzserver_cmd, gzclient_cmd])
