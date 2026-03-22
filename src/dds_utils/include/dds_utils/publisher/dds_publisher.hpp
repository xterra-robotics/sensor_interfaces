#ifndef DDS_UTILS_PUBLISHER_DDS_PUBLISHER_HPP
#define DDS_UTILS_PUBLISHER_DDS_PUBLISHER_HPP

#include "../core/dds_entity.hpp"
#include "../core/dds_qos.hpp"
#include <functional>
#include <memory>

namespace dds_wrapper
{
    template <typename T>
    class DDSPublisher : public DDSEntity
    {
    private:
        std::shared_ptr<dds::topic::Topic<T>> topic_;
        std::shared_ptr<dds::pub::Publisher> publisher_;
        std::shared_ptr<dds::pub::DataWriter<T>> writer_;
        std::string topic_name_;
        DDSQoS qos_;
        bool initialized_{false};

    public:
        DDSPublisher(const std::string &topic_name,
                     const DDSQoS &qos = DDSQoS(), int domain_id = 0,
                     const std::string &entity_name = "DDSPublisher")
            : DDSEntity(domain_id, entity_name),
              topic_name_(add_rt_prefix(topic_name)), qos_(qos)
        {
            initialize();
        }

        virtual ~DDSPublisher()
        {
            reset();
        }

        void initialize()
        {
            if (initialized_)
            {
                std::cout << "[" << entity_name_ << "] Publisher already initialized. "
                          << "Call reset() first to reinitialize." << std::endl;
                return;
            }

            try
            {
                // Create topic with rt/ prefix for ROS2 compatibility
                topic_ = std::make_shared<dds::topic::Topic<T>>(*participant_, topic_name_);

                // Create publisher
                publisher_ = std::make_shared<dds::pub::Publisher>(*participant_);

                // Setup QoS
                dds::pub::qos::DataWriterQos wqos;
                qos_.apply_to_writer_qos(wqos);

                // Create data writer
                writer_ = std::make_shared<dds::pub::DataWriter<T>>(*publisher_, *topic_, wqos);

                initialized_ = true;

                std::cout << "[" << entity_name_ << "] Publisher initialized on topic: "
                          << topic_name_ << std::endl;
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Publisher initialization failed: "
                          << e.what() << std::endl;
                initialized_ = false;
                throw;
            }
        }

        void reset()
        {
            if (!initialized_)
                return; // Already reset

            try
            {
                std::cout << "[" << entity_name_ << "] Resetting publisher on topic: "
                          << topic_name_ << std::endl;

                // (order matters in DDS)
                if (writer_)
                {
                    writer_.reset();
                    writer_ = nullptr;
                }

                if (publisher_)
                {
                    publisher_.reset();
                    publisher_ = nullptr;
                }

                if (topic_)
                {
                    topic_.reset();
                    topic_ = nullptr;
                }

                initialized_ = false;

                std::cout << "[" << entity_name_ << "] Publisher reset complete" << std::endl;
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Error during reset: "
                          << e.what() << std::endl;
            }
        }

        bool publish(const T &msg)
        {
            if (!is_valid())
            {
                std::cerr << "[" << entity_name_ << "] Publisher is not valid" << std::endl;
                return false;
            }

            try
            {
                writer_->write(msg);
                return true;
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Publish error: " << e.what() << std::endl;
                return false;
            }
        }

        bool wait_for_subscribers(int timeout_ms = 5000)
        {
            int elapsed = 0;
            const int check_interval = 100;

            while (elapsed < timeout_ms)
            {
                if (writer_->publication_matched_status().current_count() > 0)
                {
                    std::cout << "[" << entity_name_ << "] Found subscribers!" << std::endl;
                    return true;
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(check_interval));
                elapsed += check_interval;
            }

            std::cout << "[" << entity_name_ << "] No subscribers found (timeout)" << std::endl;
            return false;
        }

        // Getters
        const std::string &get_topic_name() const { return topic_name_; }

        int get_subscriber_count() const
        {
            return writer_ ? writer_->publication_matched_status().current_count() : 0;
        }

        bool is_initialized() const { return initialized_; }

        bool is_valid() const override
        {
            return DDSEntity::is_valid() && initialized_ && writer_ != nullptr;
        }

    private:
        /**
         * Add "rt/" prefix to topic name for ROS2 compatibility
         * ROS2 requires this prefix for topic name mangling
         */
        std::string add_rt_prefix(const std::string &topic_name)
        {
            if (topic_name.empty() || topic_name[0] != '/')
            {
                return "rt/" + topic_name;
            }
            // If starts with /, remove it and add rt/
            return "rt" + topic_name;
        }
    };
}

#endif
