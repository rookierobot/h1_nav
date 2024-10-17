cmake_minimum_required(VERSION 3.5.0)
project(sdk2_user)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(unitree_sdk2 REQUIRED)

add_executable(skd_node src/sdk_node.cpp)
# add_executable(client src/client.cpp)
target_link_libraries(skd_node unitree_sdk2)
# target_link_libraries(client unitree_sdk2)