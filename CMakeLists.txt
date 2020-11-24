cmake_minimum_required(VERSION 3.0.2)
project(turtlebot-simulation)

set(CMAKE_CXX_STANDARD 17)

find_package(catkin REQUIRED COMPONENTS
  gazebo_ros
  geometry_msgs
  nav_msgs
  roscpp
  sensor_msgs
  std_msgs
  tf
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${CMAKE_SOURCE_DIR}/include
)

add_executable(walker src/walker.cpp)
target_link_libraries(walker ${catkin_LIBRARIES})
