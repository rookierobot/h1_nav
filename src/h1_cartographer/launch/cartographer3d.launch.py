import os
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    urdf_name = "h1.urdf"
    
    # 定位到功能包的地址
    pkg_share = FindPackageShare(package='h1_cartographer').find('h1_cartographer')
    h1_description_package_share = FindPackageShare(package='h1_description').find('h1_description')

    urdf_model_path = os.path.join(h1_description_package_share, f'urdf/{urdf_name}')
    
    #=====================运行节点需要的配置=======================================================================
    # 是否使用仿真时间，我们用gazebo，这里设置成true
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    # 地图的分辨率
    resolution = LaunchConfiguration('resolution', default='0.05')
    # 地图的发布周期
    publish_period_sec = LaunchConfiguration('publish_period_sec', default='1.0')
    # 配置文件夹路径
    configuration_directory = LaunchConfiguration('configuration_directory',default= os.path.join(pkg_share, 'config') )
    # 配置文件
    configuration_basename = LaunchConfiguration('configuration_basename', default='h1_3d.lua')

    
    #=====================声明三个节点，cartographer/occupancy_grid_node/rviz_node=================================
    cartographer_node = Node(
        package='cartographer_ros',
        executable='cartographer_node',
        name='cartographer_node',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        arguments=['-configuration_directory', configuration_directory,
                   '-configuration_basename', configuration_basename],
        remappings=[
            ('points2', 'livox/lidar'),    # 正确的重映射格式
            ('imu', 'livox/imu'),          # 重映射 imu 话题
            # ('scan', 'front/scan')         # 重映射 scan 话题
        ]
        )

    occupancy_grid_node = Node(
        package='cartographer_ros',
        executable='occupancy_grid_node',
        name='occupancy_grid_node',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        arguments=['-resolution', resolution, '-publish_period_sec', publish_period_sec])

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        arguments=[urdf_model_path]
        )

    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        arguments=[urdf_model_path]
        )

    static_transform_publisher_node = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_transform_publisher_mid360_to_livox',
        arguments=['0', '0', '0', '0', '0', '0', 'mid360_link', 'livox_frame']
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # arguments=['-d', rviz_config_dir],
        parameters=[{'use_sim_time': use_sim_time}],
        output='screen')

    #===============================================定义启动文件========================================================
    ld = LaunchDescription()
    ld.add_action(cartographer_node)
    ld.add_action(occupancy_grid_node)
    ld.add_action(rviz_node)
    ld.add_action(robot_state_publisher_node)
    ld.add_action(joint_state_publisher_node)
    ld.add_action(static_transform_publisher_node)

    return ld