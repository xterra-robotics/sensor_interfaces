#ifndef DDS_UTILS_CORE_DDS_ENTITY_HPP
#define DDS_UTILS_CORE_DDS_ENTITY_HPP

#include <iostream>
#include <memory>
#include <string>
#include "dds/dds.hpp"

using namespace org::eclipse::cyclonedds;

/**
 * Base class for all DDS entities (Publisher, Subscriber)
 * This class handles common DDS entity operations like domain participant
 * Demonstrates composition pattern - contains a domain participant
 */
namespace dds_wrapper
{
    class DDSEntity
    {
    protected:
        std::shared_ptr<dds::domain::DomainParticipant> participant_;
        int domain_id_;
        std::string entity_name_;

    public:
        /**
         * Constructor
         * @param domain_id: DDS domain ID (default 0 for ROS2)
         * @param entity_name: Human-readable name for this entity
         */
        DDSEntity(int domain_id = 0, const std::string &entity_name = "DDSEntity")
            : domain_id_(domain_id), entity_name_(entity_name)
        {
            try
            {
                // Create domain participant using shared_ptr for memory safety
                participant_ = std::make_shared<dds::domain::DomainParticipant>(domain_id_);
                std::cout << "[" << entity_name_ << "] DDS Entity initialized in domain "
                          << domain_id_ << std::endl;
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Failed to create DomainParticipant: "
                          << e.what() << std::endl;
                throw;
            }
        }

        virtual ~DDSEntity()
        {
            std::cout << "[" << entity_name_ << "] DDS Entity destroyed" << std::endl;
        }

        // Getters
        std::shared_ptr<dds::domain::DomainParticipant> get_participant() const
        {
            return participant_;
        }

        int get_domain_id() const
        {
            return domain_id_;
        }

        const std::string &get_name() const
        {
            return entity_name_;
        }

        // Virtual method - override in derived classes
        virtual bool is_valid() const
        {
            return participant_ != nullptr;
        }
    };
}

#endif
