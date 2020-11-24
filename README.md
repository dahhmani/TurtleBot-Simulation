# TurtleBot Simulation
This project implements obstacle avoidance for a turtlebot3 robot in a gazebo simulation.

## Author
Mahmoud Dahmani

## Dependencies
* Ubuntu 18.04 (Operating System)
* C++11 (Programming Language)
* ROS-Melodic - [Installation Instructions](http://wiki.ros.org/melodic/Installation/Ubuntu)
* catkin (Low-level build system macros and infrastructure for ROS) - [Installation Instructions](http://wiki.ros.org/catkin#Installing_catkin)

## Build
Run the following commands in the terminal:
```
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
git clone https://github.com/dahhmani/TurtleBot-Simulation.git
cd ../
catkin_make
```

## Run
### Simulation
Run the following commands in the terminal:
```
source ~/catkin_ws/devel/setup.bash
roslaunch turtlebot_walker turtlebot3_world.launch
```

## Rosbag
### Record
Run the following commands in the terminal:
```
source ~/catkin_ws/devel/setup.bash
roslaunch turtlebot_walker turtlebot3_world.launch record:=true
```

To disable recording run the following instead:
```
source ~/catkin_ws/devel/setup.bash
roslaunch turtlebot_walker turtlebot3_world.launch bag:=false
```

### Inspect
Run the following commands in the terminal:
```
rosbag info <bag path>
```

### Playback
Run the following commands in terminal 1:
```
source devel/setup.bash
roslaunch turtlebot_walker turtlebot3_world.launch avoid:=false
```

Run the following commands in terminal 2:
```
rosbag play <bag path>
```
