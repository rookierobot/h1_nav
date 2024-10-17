#include <iostream>
#include <signal.h>    // 重定向 ctrl + c

#include "unitree/common/dds/dds_easy_model.hpp"
#include <unitree/robot/channel/channel_subscriber.hpp>
#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/robot/client/client.hpp>
#include <unitree/robot/h1/loco/h1_loco_api.hpp>
#include <unitree/robot/h1/loco/h1_loco_client.hpp>
#include <math.h>
#include "unitree/idl/ros2/String_.hpp"
#include "unitree/idl/ros2/Twist_.hpp"

using std::string;
using namespace unitree::common;
using namespace unitree::robot;

#define SUBTOPIC "rt/cmd_vel"

void MySigintHandler(int sig)
{
    exit(0);
}

void MessageHandlerNode(const void* message)
{
    std::cout << "--" << std::endl;
    const geometry_msgs::msg::dds_::Twist_* pmsg = (const geometry_msgs::msg::dds_::Twist_*)message;
    std::cout << "liner: " << std::endl;
    std::cout << "x:" << pmsg->linear().x() << " y:" << pmsg->linear().y() << " z:" << pmsg->linear().z() << std::endl;
    std::cout << "angular: " << std::endl;
    std::cout << "x:" << pmsg->angular().x() << " y:" << pmsg->angular().y() << " z:" << pmsg->angular().z() << std::endl;
    std::cout << "--" << std::endl;
    // std::cout << "res " << pmsg->data() << std::endl;
}


int main(int argc, char** argv) {
    string arg = argv[1];
    std::cout << "当前网卡是 " << arg << std::endl;
    unitree::robot::ChannelFactory::Instance()->Init(0, arg);

    signal(SIGINT, MySigintHandler);

    //sub
    ChannelSubscriberPtr<geometry_msgs::msg::dds_::Twist_> subscriber_node = ChannelSubscriberPtr<geometry_msgs::msg::dds_::Twist_>  \
                                                                    (new ChannelSubscriber<geometry_msgs::msg::dds_::Twist_>(SUBTOPIC));

    subscriber_node->InitChannel(std::bind(MessageHandlerNode, std::placeholders::_1), 10);

    while (true) {
        sleep(1);
    }

    return 0;
}