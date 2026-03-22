#ifndef DDS_UTILS_CORE_DDS_QOS_HPP
#define DDS_UTILS_CORE_DDS_QOS_HPP

#include "dds/dds.hpp"
#include <string>

using namespace org::eclipse::cyclonedds;

/**
 * QoS profile enumeration
 * Predefined QoS configurations matching ROS2 common patterns
 */
namespace dds_wrapper
{
    enum class QoSProfile
    {
        SENSOR_DATA, // BEST_EFFORT, VOLATILE, depth=1
        PARAMETER,   // RELIABLE, TRANSIENT_LOCAL, depth=10
        DEFAULT,     // RELIABLE, VOLATILE, depth=1
        CUSTOM       // User must set all values manually
    };

    /**
     * QoS configuration class
     * Encapsulates Quality of Service settings for DDS entities
     * Simplifies QoS setup with predefined profiles
     *
     * Important QoS Policies:
     * - Reliability: RELIABLE (guaranteed) vs BEST_EFFORT (no guarantee)
     * - Durability: VOLATILE (no history) vs TRANSIENT_LOCAL (keeps recent samples)
     * - History: KEEP_LAST (keeps N samples) vs KEEP_ALL (keeps all samples)
     * - Deadline: Max time between updates
     * - Liveliness: Monitors if entity is still active
     * - Lifespan: How long data is valid
     */
    class DDSQoS
    {
    private:
        QoSProfile profile_;
        bool reliable_;
        bool transient_local_;
        int depth_;

    public:
        DDSQoS(QoSProfile profile = QoSProfile::DEFAULT, int depth = -1)
            : profile_(profile)
        {

            if (profile == QoSProfile::CUSTOM)
            {
                // For CUSTOM: don't set defaults, user MUST set values explicitly
                reliable_ = true; // Default safe value
                transient_local_ = false;
                depth_ = 1;

                std::cout << "Warning: Using CUSTOM QoS profile. "
                          << "You must explicitly set reliability, durability, and depth using setters."
                          << std::endl;
            }
            else
            {
                setup_profile();
            }

            // Override depth if provided (only if > 0)
            if (depth > 0)
            {
                depth_ = depth;
            }
        }

        virtual ~DDSQoS() = default;

    private:
        void setup_profile()
        {
            switch (profile_)
            {
            case QoSProfile::SENSOR_DATA:
                reliable_ = false;
                transient_local_ = false;
                depth_ = 1;
                break;

            case QoSProfile::PARAMETER:
                reliable_ = true;
                transient_local_ = true;
                depth_ = 10;
                break;

            case QoSProfile::DEFAULT:
                reliable_ = true;
                transient_local_ = false;
                depth_ = 1;
                break;

            case QoSProfile::CUSTOM:
                // Should never reach here (handled in constructor)
                break;
            }
        }

    public:
        // Getters
        bool is_reliable() const { return reliable_; }
        bool is_transient_local() const { return transient_local_; }
        int get_depth() const { return depth_; }
        QoSProfile get_profile() const { return profile_; }

        // Setters - Use these for CUSTOM profile
        void set_reliable(bool reliable)
        {
            reliable_ = reliable;
            if (profile_ != QoSProfile::CUSTOM)
            {
                std::cout << "Warning: Overriding QoS for non-CUSTOM profile" << std::endl;
            }
        }

        void set_transient_local(bool transient)
        {
            transient_local_ = transient;
            if (profile_ != QoSProfile::CUSTOM)
            {
                std::cout << "Warning: Overriding QoS for non-CUSTOM profile" << std::endl;
            }
        }

        void set_depth(int depth)
        {
            if (depth > 0)
            {
                depth_ = depth;
            }
            else
            {
                std::cerr << "Error: Depth must be > 0" << std::endl;
            }
        }

        void apply_to_writer_qos(dds::pub::qos::DataWriterQos &qos) const
        {
            // Set reliability policy
            if (reliable_)
            {
                qos.reliability().kind(dds::core::policy::ReliabilityKind::RELIABLE);
            }
            else
            {
                qos.reliability().kind(dds::core::policy::ReliabilityKind::BEST_EFFORT);
            }

            // Set durability policy
            if (transient_local_)
            {
                qos.durability().kind(dds::core::policy::DurabilityKind::TRANSIENT_LOCAL);
            }
            else
            {
                qos.durability().kind(dds::core::policy::DurabilityKind::VOLATILE);
            }

            qos.history().kind(dds::core::policy::HistoryKind::KEEP_LAST);
            qos.history().depth(depth_);
        }

        void apply_to_reader_qos(dds::sub::qos::DataReaderQos &qos) const
        {
            // Set reliability policy
            if (reliable_)
            {
                qos.reliability().kind(dds::core::policy::ReliabilityKind::RELIABLE);
            }
            else
            {
                qos.reliability().kind(dds::core::policy::ReliabilityKind::BEST_EFFORT);
            }

            // Set durability policy
            if (transient_local_)
            {
                qos.durability().kind(dds::core::policy::DurabilityKind::TRANSIENT_LOCAL);
            }
            else
            {
                qos.durability().kind(dds::core::policy::DurabilityKind::VOLATILE);
            }

            qos.history().kind(dds::core::policy::HistoryKind::KEEP_LAST);
            qos.history().depth(depth_);
        }
    };
}
#endif
