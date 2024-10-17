#include <iostream>
#include <signal.h>    // 重定向 ctrl + c

#include "unitree/common/dds/dds_easy_model.hpp"
#include <unitree/robot/channel/channel_subscriber.hpp>
#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/robot/client/client.hpp>
#include <math.h>
#include "unitree/idl/ros2/String_.hpp"

#define NODECONTROLTOPIC "rt/node_control"

using namespace std;
using namespace unitree::common;
using namespace unitree::robot;

static const std::string heart_beat = "{"
                                    "\"type\":\"heart_beat\","
                                    "\"data\":{\"fun_num\": 20, \"node_num\": 3} "
                                    "}";

// 获取当前时间的字符串表示
std::string getCurrentTime() {
    std::time_t now = std::time(nullptr);
    std::tm* timeInfo = std::localtime(&now);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);
    return std::string(buffer);
}

#define LOG() \
        std::cout << "[" << getCurrentTime() << "] "<< ":" <<__FUNCTION__ << ":" << __LINE__ << " - " 

void MySigintHandler(int sig)
{
    exit(0);
}

void MessageHandlerNode(const void* message)
{
    const std_msgs::msg::dds_::String_* pmsg = (const std_msgs::msg::dds_::String_*)message;
    LOG()<< "res " << pmsg->data() << std::endl;
}


int main(int argc, char * argv[])
{
    string arg = argv[1];
    LOG() << "当前网卡是 "<< arg<< std::endl;
    unitree::robot::ChannelFactory::Instance()->Init(0,arg); 


    signal(SIGINT, MySigintHandler);
    // 订阅者
    ChannelSubscriberPtr<std_msgs::msg::dds_::String_> subscriber_node = ChannelSubscriberPtr<std_msgs::msg::dds_::String_>  \
                                                                    (new ChannelSubscriber<std_msgs::msg::dds_::String_>(NODECONTROLTOPIC));
    subscriber_node->InitChannel(std::bind(MessageHandlerNode, std::placeholders::_1), 10);   
    // 发布者
    ChannelPublisherPtr<std_msgs::msg::dds_::String_> pub_heart = ChannelPublisherPtr<std_msgs::msg::dds_::String_> \ 
                                                                    (new ChannelPublisher<std_msgs::msg::dds_::String_>("rt/slam_internal_info"));     

    pub_heart->InitChannel();

    while (true)
    {
        try                                             // 异常处理
        {
            std_msgs::msg::dds_::String_ heart_ss;          // 发送心跳包
            heart_ss.data(heart_beat);
            pub_heart->Write(heart_ss);
        }
        catch(const std::exception& e)
        {
            LOG()<< e.what() << std::endl;
        }
        sleep(1);
    }
    return 0;
}
