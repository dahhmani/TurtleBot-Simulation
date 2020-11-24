/**
 * @file TurtlebotWalker.h
 * @brief obstacle avoidance
 * @author Mahmoud Dahmani
 * @copyright MIT License
 */

#pragma once

/**
 * @brief turtlebot walker class specification
 */
class TurtlebotWalker {
 public:
  /**
   * @brief Constructor
   * @param ds drive speed
   * @param ts turn speed
   */
  TurtlebotWalker(double ds, double ts);

  /**
   * @brief drives the robot forward at drive speed
   */
  void drive();

  /**
   * @brief runs obstacle avoidance
   */
  void navigate();

  /**
   * @brief turns the robot at turn speed
   */
  void turn();

  /**
   * @brief stops the robot
   */
  void stop();

  /**
   * @brief rotates until the front of the robot is clear of obstacles
   */
  void rotateUntilClear();

  bool near_obstacle;
  bool front_clear;

 private:
  /**
   * @brief callback to analyze lidar data
   * @param msg laser scan message
   */
  void lidarCallback(const sensor_msgs::LaserScan::ConstPtr& msg);

  ros::NodeHandle nh;
  ros::Publisher vel_pub;
  ros::Subscriber scan_sub;
  geometry_msgs::Twist vel;

  double obstacle_thresh;
  double drive_speed;
  double turn_speed;
};
