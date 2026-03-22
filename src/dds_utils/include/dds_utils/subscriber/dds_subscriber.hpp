#ifndef DDS_UTILS_SUBSCRIBER_DDS_SUBSCRIBER_HPP
#define DDS_UTILS_SUBSCRIBER_DDS_SUBSCRIBER_HPP

#include "../core/dds_entity.hpp"
#include "../core/dds_qos.hpp"
#include <functional>
#include <thread>
#include <atomic>

namespace dds_wrapper
{
    template <typename T>
    using DataCallback = std::function<void(const T &)>;

    template <typename T>
    class DDSSubscriber : public DDSEntity
    {
    private:
        std::shared_ptr<dds::topic::Topic<T>> topic_;
        std::shared_ptr<dds::sub::Subscriber> subscriber_;
        std::shared_ptr<dds::sub::DataReader<T>> reader_;
        std::string topic_name_;
        DDSQoS qos_;

        // Callback mechanism
        DataCallback<T> callback_;
        std::thread callback_thread_;
        std::atomic<bool> running_{false};
        std::atomic<bool> use_callback_{false};
        bool initialized_{false};

    public:
        DDSSubscriber(const std::string &topic_name,
                      const DDSQoS &qos = DDSQoS(),
                      int domain_id = 0,
                      const std::string &entity_name = "DDSSubscriber")
            : DDSEntity(domain_id, entity_name),
              topic_name_(add_rt_prefix(topic_name)), qos_(qos)
        {
            initialize();
        }

        virtual ~DDSSubscriber()
        {
            reset();
        }

        void reset()
        {
            if (!initialized_)
            {
                return; // Already reset
            }

            try
            {
                std::cout << "[" << entity_name_ << "] Resetting subscriber on topic: "
                          << topic_name_ << std::endl;

                // CRITICAL: Stop callback thread FIRST before destroying DDS entities
                // Otherwise the callback_loop() may try to access deleted reader_
                stop_callback_thread();

                // Clear callback references
                clear_callback();

                // Delete DataReader first (order matters in DDS)
                if (reader_)
                {
                    reader_.reset();
                    reader_ = nullptr;
                }

                if (subscriber_)
                {
                    subscriber_.reset();
                    subscriber_ = nullptr;
                }

                if (topic_)
                {
                    topic_.reset();
                    topic_ = nullptr;
                }

                initialized_ = false;

                std::cout << "[" << entity_name_ << "] Subscriber reset complete" << std::endl;
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Error during reset: "
                          << e.what() << std::endl;
                initialized_ = false;
            }
        }

        void set_callback(DataCallback<T> callback)
        {
            if (!is_valid())
            {
                std::cerr << "[" << entity_name_ << "] Cannot set callback on invalid subscriber"
                          << std::endl;
                return;
            }
            callback_ = callback;
            use_callback_ = true;
            start_callback_thread();
        }

        void clear_callback()
        {
            use_callback_ = false;
            stop_callback_thread();
            callback_ = nullptr;
        }

        // Getters
        const std::string &get_topic_name() const { return topic_name_; }

        bool is_valid() const override
        {
            return DDSEntity::is_valid() && initialized_ && reader_ != nullptr;
        }

    private:
        std::string add_rt_prefix(const std::string &topic_name)
        {
            if (topic_name.empty() || topic_name[0] != '/')
            {
                return "rt/" + topic_name;
            }
            return "rt" + topic_name;
        }

        void initialize()
        {
            if (initialized_)
            {
                std::cout << "[" << entity_name_ << "] Subscriber already initialized. "
                          << "Call reset() first to reinitialize." << std::endl;
                return;
            }

            try
            {
                // Create topic with rt/ prefix for ROS2 compatibility
                topic_ = std::make_shared<dds::topic::Topic<T>>(*participant_, topic_name_);

                // Create subscriber
                subscriber_ = std::make_shared<dds::sub::Subscriber>(*participant_);

                // Setup QoS
                dds::sub::qos::DataReaderQos rqos;
                qos_.apply_to_reader_qos(rqos);

                // Create data reader
                reader_ = std::make_shared<dds::sub::DataReader<T>>(*subscriber_, *topic_, rqos);

                initialized_ = true;
                std::cout << "[" << entity_name_ << "] Subscriber initialized on topic: "
                          << topic_name_ << std::endl;
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Subscriber initialization failed: "
                          << e.what() << std::endl;
                initialized_ = false;
                throw;
            }
        }

        std::vector<T> take_data()
        {
            std::vector<T> messages;

            if (!is_valid())
            {
                return messages;
            }

            try
            {
                auto samples = reader_->take();
                for (const auto &sample : samples)
                    if (sample.info().valid())
                        messages.emplace_back(std::move(sample.data()));
            }
            catch (const dds::core::Exception &e)
            {
                std::cerr << "[" << entity_name_ << "] Read error: " << e.what() << std::endl;
            }

            return messages;
        }

        void start_callback_thread()
        {
            // if its already started, dont start another thread
            if (running_)
                return;

            running_ = true;
            callback_thread_ = std::thread(&DDSSubscriber::callback_loop, this);
            std::cout << "[" << entity_name_ << "] Callback thread started" << std::endl;
        }

        void stop_callback_thread()
        {
            if (!running_)
                return;
            running_ = false;
            if (callback_thread_.joinable())
            {
                callback_thread_.join();
                std::cout << "[" << entity_name_ << "] Callback thread stopped" << std::endl;
            }
        }

        void callback_loop()
        {
            while (running_)
            {
                auto messages = take_data();
                for (const auto &msg : messages)
                {
                    if (use_callback_ && callback_)
                        try
                        {
                            callback_(msg);
                        }
                        catch (const std::exception &e)
                        {
                            std::cerr << "[" << entity_name_ << "] Callback error: "
                                      << e.what() << std::endl;
                        }
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
    };
}

#endif
