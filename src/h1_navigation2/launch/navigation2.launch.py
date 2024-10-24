import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    #=============================1. 定位到包的地址 =============================================================
    h1_navigation2_dir = get_package_share_directory('h1_navigation2')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    slam_dir = get_package_share_directory('h1_cartographer')
    
    #=============================2. 声明参数，获取配置文件路径===================================================
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    nav2_param_path = LaunchConfiguration('params_file', default=os.path.join(h1_navigation2_dir, 'param', 'fishbot_nav2.yaml'))
    rviz_config_dir = os.path.join(nav2_bringup_dir, 'rviz', 'nav2_default_view.rviz')

    #=============================3. 启动 Cartographer 的 launch 文件 ==========================================
    slam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(slam_dir, 'launch', 'cartographer2d.launch.py')]),
        launch_arguments={'use_sim_time': use_sim_time}.items(),
    )

    #=============================4. 启动 Navigation2 的 launch 文件 ==========================================
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(nav2_bringup_dir, 'launch', 'navigation_launch.py')]),
        launch_arguments={'params_file': nav2_param_path}.items(),
    )

    #=============================5. 启动 RViz ================================================================
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_dir],
        parameters=[{'use_sim_time': use_sim_time}],
        output='screen',
    )

    return LaunchDescription([slam_launch, nav2_launch, rviz_node])
