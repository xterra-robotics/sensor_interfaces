#include <algorithm> // For std::clamp
#include <chrono>
#include <eigen3/Eigen/Dense>
#include <functional>              // For std::bind
#include <gazebo/common/Events.hh> // Needed for event::Events
#include <gazebo/common/Timer.hh>
#include <gazebo/gazebo.hh>
#include <gazebo/msgs/msgs.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/transport/transport.hh>
#include <ignition/math/Pose3.hh> // Explicitly include Pose3d
#include <ignition/math/Quaternion.hh>
#include <ignition/math/Vector3.hh>
#include <iostream> // For std::cout/cerr (though gz* logs are preferred)
#include <memory>   // For std::make_shared
#include <rclcpp/rclcpp.hpp>
#include <string>
#include <thread>
#include <vector>
#include <xterra/msg/joint_data.hpp>
#include <xterra/msg/motor_gain_multiplier.hpp>
#include <xterra/msg/sensor_data.hpp>

// #include "miscellaneous/robot_config_parser.hpp" // Or include directly if
// not using a separate header
#include <cstdlib>
#include <filesystem>

#include "robot_config_parser.cpp" // Or include directly if not using a separate header
// #include "ament_index_cpp/get_package_share_directory.hpp"
// Use constexpr for constants instead of #define
constexpr int NUM_JOINTS = 12;

namespace gazebo
{
    // Forward declaration of the class
    class MotorController;

    class MotorController : public ModelPlugin
    {
    public:
        MotorController();
        virtual ~MotorController();
        void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf) override;

    private:
        void OnUpdate(const common::UpdateInfo &_info);

        void updateJointStates(const common::UpdateInfo &_info);

        void get_joint_command(const xterra::msg::JointData::SharedPtr msg);

        void get_motor_gains(const xterra::msg::MotorGainMultiplier::SharedPtr msg);

        void getFeedbackTorque();

        bool isDesiredJoint(const physics::JointPtr &joint);

        void initializeRos();

        void rosQueueThreadFunc();

        void initializeEigen();

        void readSdfParams(sdf::ElementPtr _sdf);

        // --- ROS 2 Members ---
        rclcpp::Node::SharedPtr rosNode; ///< ROS 2 Node handle.
        rclcpp::Subscription<xterra::msg::JointData>::SharedPtr
            joint_command_sub; ///< Subscriber for motor commands.
        rclcpp::Subscription<xterra::msg::MotorGainMultiplier>::SharedPtr
            motor_gain_sub; ///< Subscriber for gain multipliers.
        rclcpp::Publisher<xterra::msg::SensorData>::SharedPtr
            sensor_data_publisher;  ///< Publisher for sensor data.
        std::thread rosQueueThread; ///< Thread for spinning the ROS 2 node.
        bool ros_initialized =
            false; ///< Flag to check if ROS has been initialized.

        // --- Gazebo Members ---
        physics::ModelPtr model; ///< Pointer to the Gazebo model.
        physics::Joint_V
            actuator_joint;    ///< Vector of controllable joint pointers.
        physics::LinkPtr base; ///< Pointer to the base link.
        event::ConnectionPtr
            updateConnection;   ///< Connection to Gazebo's update event.
        std::string robot_name; ///< Name of the robot model.
        int num_joints = 0;     ///< Number of controllable joints found.

        // --- Control & State Members (Eigen) ---
        Eigen::VectorXd tau_ff; ///< Feedforward torques (Gazebo order).
        Eigen::VectorXd tau_fb; ///< Feedback torques (Gazebo order).
        Eigen::VectorXd
            joint_pos_ref; ///< Reference joint positions (Gazebo order).
        Eigen::VectorXd
            joint_vel_ref;             ///< Reference joint velocities (Gazebo order).
        Eigen::VectorXd joint_pos_act; ///< Actual joint positions (Gazebo order).
        Eigen::VectorXd joint_vel_act; ///< Actual joint velocities (Gazebo order).
        Eigen::VectorXd
            joint_acc_act;          ///< Actual joint accelerations (Gazebo order).
        Eigen::MatrixXd Kp_scale;   ///< Proportional gain scaling matrix.
        Eigen::MatrixXd Kd_scale;   ///< Derivative gain scaling matrix.
        Eigen::VectorXd fullJointP; ///< Vector of P gains for all joints.
        Eigen::VectorXd fullJointD; ///< Vector of D gains for all joints.
        Eigen::DiagonalMatrix<double, NUM_JOINTS>
            Kpa; ///< Diagonal matrix of P gains.
        Eigen::DiagonalMatrix<double, NUM_JOINTS>
            Kda; ///< Diagonal matrix of D gains.

        // --- Parameters & Timing ---
        std::vector<float> tau_limit;  ///< Torque limits {Abduction, Hip, Knee}.
        float update_rate = 400.0f;    ///< Desired update rate (Hz).
        double delta_t = 1.0 / 400.0;  ///< Time step based on desired rate.
        double last_update_time = 0.0; ///< Simulation time of the last update.
        ignition::math::Vector3d
            prev_vel;                       ///< Previous base velocity for acceleration calculation.
        std::vector<int> ros_to_gazebo_map; ///< Maps ROS command indices to Gazebo
                                            ///< joint indices.
    };

    // --- Method Definitions ---

    MotorController::MotorController() : ModelPlugin()
    {
        gzmsg << "MotorController plugin constructor called." << std::endl;
    }

    MotorController::~MotorController()
    {
        gzmsg << "MotorController plugin destructor called." << std::endl;
        if (this->rosNode)
        {
            rclcpp::shutdown();
        }
        if (this->rosQueueThread.joinable())
        {
            this->rosQueueThread.join();
        }
        this->updateConnection.reset(); // Disconnect from Gazebo update event.
    }

    void MotorController::Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
    {
        if (!_model)
        {
            gzerr << "Invalid model pointer, plugin not loaded!\n";
            return;
        }
        this->model = _model;
        this->robot_name = _model->GetName();
        gzmsg << this->robot_name << std::endl;

        std::string config_file_rel_path = "src/xterra/config/robot_config.yaml";
        std::string absolute_config_path_str, robot_name_;
        try
        {
            absolute_config_path_str =
                std::filesystem::absolute(config_file_rel_path).string();
            // Corrected gzerr usage:
            // gzmsg << "Resolved config path: '" << config_file_rel_path << "' -> '"
            //       << absolute_config_path_str << "'" << std::endl;
        }
        catch (const std::filesystem::filesystem_error &e)
        {
            // Corrected: Use gzerr as rosNode might not be initialized
            gzerr << "Filesystem error resolving path '" << config_file_rel_path
                  << "': " << e.what() << ". Exiting Load." << std::endl;
            // rclcpp::shutdown(); // Avoid calling rclcpp::shutdown if rosNode
            // isn't even up.
            return; // Exit Load if path resolution fails critically.
        }
        RobotSpecificConfig current_robot_config;
        // Use the newly created absolute path
        if (this->robot_name == "go2")
            robot_name_ = "go2";
        else if (this->robot_name == "svan")
            robot_name_ = "m2";
        else if (this->robot_name == "aliengo")
            robot_name_ = "aliengo";
        else if (this->robot_name == "m2_metal")
            robot_name_ = "m2_metal";
        bool config_loaded = parse_robot_config(absolute_config_path_str,
                                                robot_name_, current_robot_config);
        this->tau_limit = current_robot_config.get_ordered_tau_limits();

        // Get base link.
        this->base = _model->GetLink(current_robot_config.base_link);

        if (!this->base)
        {
            gzerr << "Could not find 'root' link, plugin may not function "
                     "correctly!\n";
            return; // Or handle appropriately
        }

        // Get and filter joints.
        physics::Joint_V all_joints = _model->GetJoints();
        if (all_joints.empty())
        {
            gzerr << "No joints found in the model, plugin not loaded!\n";
            return;
        }

        for (auto &joint : all_joints)
        {
            if (isDesiredJoint(joint))
            {
                this->actuator_joint.push_back(joint);
                // gzdbg << "Added controllable joint: " << joint->GetName() <<
                // "\n";
            }
            else
            {
                // gzdbg << "Skipped joint: " << joint->GetName() << "\n";
            }
        }

        this->num_joints = this->actuator_joint.size();
        // gzmsg << "Found " << this->num_joints << " controllable joints.\n";

        // Check if the number of joints matches expectations.
        if (this->num_joints != NUM_JOINTS)
        {
            gzerr << "Expected " << NUM_JOINTS << " joints, but found "
                  << this->num_joints << ". Plugin might not work correctly!\n";
            return; // Exit if joint count is wrong, as it breaks indexing.
        }

        initializeEigen();
        readSdfParams(_sdf);

        // this->ros_to_gazebo_map = {3, 4, 5, 0, 1, 2, 9, 10, 11, 6, 7, 8};
        this->ros_to_gazebo_map = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
        // gzmsg << "Joint mapping initialized.\n";

        // Initialize ROS 2.
        initializeRos();

        // Connect to Gazebo's update event.
        this->updateConnection = event::Events::ConnectWorldUpdateBegin(
            std::bind(&MotorController::OnUpdate, this, std::placeholders::_1));

        this->last_update_time = 0.0;
        this->prev_vel = ignition::math::Vector3d::Zero;
        // gzmsg << "MotorController plugin loaded successfully!\n";
    }

    void MotorController::readSdfParams(sdf::ElementPtr _sdf)
    {
        if (_sdf->HasElement("update_rate"))
        {
            this->update_rate = _sdf->Get<float>("update_rate");
            // gzmsg << "Set update rate to: " << this->update_rate << " Hz\n";
        }
        this->delta_t = 1.0 / this->update_rate;

        // Initialize C-style arrays!
        double Kp_leg[3] = {0.0, 0.0, 0.0}; // <<< INITIALIZE
        double Kd_leg[3] = {0.0, 0.0, 0.0}; // <<< INITIALIZE

        for (int i = 0; i < 3; i++)
        {
            if (_sdf->HasElement("kp" + std::to_string(i)))
                Kp_leg[i] = _sdf->Get<float>(
                    "kp" + std::to_string(i)); // Use Get<> directly
            if (_sdf->HasElement("kd" + std::to_string(i)))
                Kd_leg[i] = _sdf->Get<float>(
                    "kd" + std::to_string(i)); // Use Get<> directly
        }
        // gzmsg << "Finished loop." << std::endl;

        // Populate full gain vectors (NOW they should be sized!)
        this->fullJointP << Kp_leg[0], Kp_leg[1], Kp_leg[2], Kp_leg[0], Kp_leg[1],
            Kp_leg[2], Kp_leg[0], Kp_leg[1], Kp_leg[2], Kp_leg[0], Kp_leg[1],
            Kp_leg[2];
        // gzmsg << "fullJointP populated. " << this->fullJointP.adjoint() <<
        // std::endl;

        this->fullJointD << Kd_leg[0], Kd_leg[1], Kd_leg[2], Kd_leg[0], Kd_leg[1],
            Kd_leg[2], Kd_leg[0], Kd_leg[1], Kd_leg[2], Kd_leg[0], Kd_leg[1],
            Kd_leg[2];
        // gzmsg << "fullJointD populated. " << this->fullJointD.adjoint() <<
        // std::endl;

        // Torque limits (Consider reading these from SDF or URDF too)
        // this->tau_limit = {15.12, 15.12, 30.24}; // Abduction, Hip, Knee limits
        // gzmsg << "Using Torque Limits: {" << tau_limit[0] << ", " << tau_limit[1]
        // << ", " << tau_limit[2] << "}\n";
    }

    void MotorController::initializeEigen()
    {
        // Resize ALL VectorXd members
        this->tau_ff.resize(NUM_JOINTS);
        this->tau_fb.resize(NUM_JOINTS);
        this->joint_pos_ref.resize(NUM_JOINTS);
        this->joint_vel_ref.resize(NUM_JOINTS);
        this->joint_pos_act.resize(NUM_JOINTS);
        this->joint_vel_act.resize(NUM_JOINTS);
        this->joint_acc_act.resize(NUM_JOINTS);
        this->fullJointP.resize(NUM_JOINTS); // <<< ADD THIS
        this->fullJointD.resize(NUM_JOINTS); // <<< ADD THIS

        // Set them to zero
        this->tau_ff.setZero();
        this->tau_fb.setZero();
        this->joint_pos_ref.setZero();
        this->joint_vel_ref.setZero();
        this->joint_pos_act.setZero();
        this->joint_vel_act.setZero();
        this->joint_acc_act.setZero();
        this->fullJointP.setZero(); // <<< ADD THIS
        this->fullJointD.setZero(); // <<< ADD THIS

        this->Kp_scale = Eigen::MatrixXd::Identity(NUM_JOINTS, NUM_JOINTS);
        this->Kd_scale = Eigen::MatrixXd::Identity(NUM_JOINTS, NUM_JOINTS);

        // gzmsg << "Eigen vectors initialized and resized.\n"; // Add for debugging
    }

    void MotorController::initializeRos()
    {
        // Initialize ROS 2 C++ client library if not already done.
        if (!rclcpp::ok())
        {
            // gzmsg << "Initializing ROS 2...\n";
            int argc = 0;
            char **argv = nullptr;
            rclcpp::init(argc, argv);
            this->ros_initialized = true;
        }
        else
        {
            // gzmsg << "ROS 2 already initialized.\n";
        }

        // Create the ROS 2 node.
        this->rosNode = rclcpp::Node::make_shared("gazebo_motor_controller_" +
                                                  this->robot_name);
        // gzmsg << "Created ROS 2 node: " << this->rosNode->get_name() << "\n";

        // Create subscriptions with QoS profile (SystemDefaultsQoS).
        rclcpp::QoS qos_profile(10); // Reliable, depth 10

        this->joint_command_sub =
            this->rosNode->create_subscription<xterra::msg::JointData>(
                "/" + this->robot_name + "/gazebo/joint_command", qos_profile,
                std::bind(&MotorController::get_joint_command, this,
                          std::placeholders::_1));

        this->motor_gain_sub =
            this->rosNode->create_subscription<xterra::msg::MotorGainMultiplier>(
                "/" + this->robot_name + "/gazebo/motor_gain_multiplier", qos_profile,
                std::bind(&MotorController::get_motor_gains, this,
                          std::placeholders::_1));

        // Create publisher.
        this->sensor_data_publisher =
            this->rosNode->create_publisher<xterra::msg::SensorData>(
                "/" + this->robot_name + "/gazebo/sensor_data", qos_profile);

        // gzmsg << "ROS 2 Subscribers and Publisher created.\n";

        // Spin ROS 2 node in a separate thread.
        this->rosQueueThread =
            std::thread(&MotorController::rosQueueThreadFunc, this);
        // gzmsg << "ROS 2 spin thread started.\n";
    }

    void MotorController::rosQueueThreadFunc()
    {
        // gzmsg << "ROS 2 spin thread running.\n";
        rclcpp::spin(this->rosNode);
        // gzmsg << "ROS 2 spin thread stopped.\n";
    }

    bool MotorController::isDesiredJoint(const physics::JointPtr &joint)
    {
        if (!joint)
            return false;

        // Get the message type enum. This is the reliable way.
        gazebo::msgs::Joint::Type type = joint->GetMsgType();

        // Check if it's a REVOLUTE or REVOLUTE2 joint.
        bool is_revolute = (type == gazebo::msgs::Joint::REVOLUTE ||
                            type == gazebo::msgs::Joint::REVOLUTE2);
        if (!is_revolute)
            return false;

        std::string joint_name = joint->GetName();
        // Check if the name contains any exclusion keywords.
        return joint_name.find("FOOT") == std::string::npos &&
               joint_name.find("foot") == std::string::npos &&
               joint_name.find("world") == std::string::npos &&
               joint_name.find("dummy") == std::string::npos;
    }

    void MotorController::get_joint_command(
        const xterra::msg::JointData::SharedPtr msg)
    {
        // Check if message size matches.
        if (msg->q.size() != NUM_JOINTS || msg->dq.size() != NUM_JOINTS ||
            msg->kp.size() != NUM_JOINTS || msg->kd.size() != NUM_JOINTS ||
            msg->tau.size() != NUM_JOINTS)
        {
            gzerr << "Received joint_command with incorrect size!\n";
            return;
        }
        // std::cout << "callback" << std::endl;
        // Apply mapping from ROS order to Gazebo order.
        for (int i = 0; i < NUM_JOINTS; ++i)
        {
            int gazebo_idx = this->ros_to_gazebo_map[i];
            this->tau_ff(gazebo_idx) = msg->tau[i];
            this->joint_pos_ref(gazebo_idx) = msg->q[i];
            this->joint_vel_ref(gazebo_idx) = msg->dq[i];
            this->fullJointP(gazebo_idx) = msg->kp[i];
            this->fullJointD(gazebo_idx) = msg->kd[i];
        }

        // Update diagonal gain matrices.
        this->Kpa = this->fullJointP.asDiagonal();
        this->Kda = this->fullJointD.asDiagonal();
    }

    void MotorController::get_motor_gains(
        const xterra::msg::MotorGainMultiplier::SharedPtr msg)
    {
        // Check message size (assuming kp_scale/kd_scale exist in the corrected
        // msg).
        if (msg->kp_scale.size() != NUM_JOINTS ||
            msg->kd_scale.size() != NUM_JOINTS)
        {
            gzerr << "Received motor_gain_multiplier with incorrect size!\n";
            return;
        }

        for (int i = 0; i < NUM_JOINTS; ++i)
        {

            this->Kp_scale(i, i) = msg->kp_scale[i];
            this->Kd_scale(i, i) = msg->kd_scale[i];
        }
    }

    void MotorController::getFeedbackTorque()
    {
        // Calculate error terms using reference setpoints and actual values.
        Eigen::VectorXd dTheta = this->joint_pos_ref - this->joint_pos_act;
        Eigen::VectorXd dTheta_dot = this->joint_vel_ref - this->joint_vel_act;

        // Calculate feedback torque (PD control).
        this->tau_fb = this->Kp_scale * this->Kpa * dTheta +
                       this->Kd_scale * this->Kda * dTheta_dot;
    }

    void MotorController::OnUpdate(const common::UpdateInfo &_info)
    {
        // gzmsg << " on update called " << std::endl;
        // std::chrono::milliseconds sleep_duration(2);
        this->updateJointStates(_info);
    }

    void MotorController::updateJointStates(const common::UpdateInfo &_info)
    {
        double current_time = _info.simTime.Double();
        double dt = current_time - this->last_update_time;

        if (dt < (this->delta_t * 0.8))
        { // Allow some flexibility
            return;
        }
        this->last_update_time = current_time;

        // Calculate feedback torques.
        this->getFeedbackTorque();

        // Prepare sensor message.
        xterra::msg::SensorData sensor_msg;

        ignition::math::Pose3d pose = this->base->WorldPose();
        ignition::math::Vector3d vel = this->base->WorldLinearVel();
        ignition::math::Vector3d ang_vel = this->base->WorldAngularVel();
        ignition::math::Vector3d accel = (vel - this->prev_vel) / dt;
        this->prev_vel = vel;
        ignition::math::Quaterniond quat = pose.Rot();

        // Process each joint.
        for (int i = 0; i < this->num_joints; ++i)
        {
            float tau = this->tau_ff(i) + this->tau_fb(i);
            float limit =
                (i % 3 == 2) ? this->tau_limit[2] : this->tau_limit[i % 3];
            tau = std::clamp(tau, -limit, limit);
            this->actuator_joint[i]->SetForce(0, tau);

            double pos = this->actuator_joint[i]->Position(0);
            double j_vel = this->actuator_joint[i]->GetVelocity(0);
            double j_acc = (j_vel - this->joint_vel_act(i)) / dt;

            this->joint_pos_act(i) = pos;
            this->joint_vel_act(i) = j_vel;
            this->joint_acc_act(i) = j_acc;

            sensor_msg.q[i] = static_cast<float>(pos);
            sensor_msg.dq[i] = static_cast<float>(j_vel);
            sensor_msg.ddq[i] = static_cast<float>(j_acc);
            sensor_msg.tau_est[i] = tau;
        }

        // Populate base/IMU data in sensor message.
        sensor_msg.quat[0] = static_cast<float>(quat.W());
        sensor_msg.quat[1] = static_cast<float>(quat.X());
        sensor_msg.quat[2] = static_cast<float>(quat.Y());
        sensor_msg.quat[3] = static_cast<float>(quat.Z());
        sensor_msg.gyro[0] = static_cast<float>(ang_vel.X());
        sensor_msg.gyro[1] = static_cast<float>(ang_vel.Y());
        sensor_msg.gyro[2] = static_cast<float>(ang_vel.Z());
        sensor_msg.accel[0] = static_cast<float>(accel.X());
        sensor_msg.accel[1] = static_cast<float>(accel.Y());
        sensor_msg.accel[2] = static_cast<float>(accel.Z());
        sensor_msg.rpy[0] = static_cast<float>(quat.Roll());
        sensor_msg.rpy[1] = static_cast<float>(quat.Pitch());
        sensor_msg.rpy[2] = static_cast<float>(quat.Yaw());

        this->sensor_data_publisher->publish(sensor_msg);
    }

    // Register this plugin with the simulator
    GZ_REGISTER_MODEL_PLUGIN(MotorController)
} // namespace gazebo