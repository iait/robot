
#ifndef HARDWARE_GAZEBO_H
#define HARDWARE_GAZEBO_H

#include <gazebo_ros_control/robot_hw_sim.h>

namespace hardware_gazebo {

  class HardwareGazebo : public gazebo_ros_control::RobotHWSim {
  public:
    HardwareGazebo();

    bool initSim(
        const std::string& robotNamespace,
        ros::NodeHandle nh,
        gazebo::physics::ModelPtr parentModel,
        const urdf::Model* const urdfModel,
        std::vector<transmission_interface::TransmissionInfo> transmissions);

    void readSim(ros::Time time, ros::Duration period);

    void writeSim(ros::Time time, ros::Duration period);

  };

}

#endif // HARDWARE_GAZEBO_H
