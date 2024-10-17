#include <iostream>
#include <string>
#include <memory>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

using namespace std;

class SocketSenderNode : public rclcpp::Node
{
public:
    SocketSenderNode() : Node("socket_sender_node")
    {
        // 创建TCP socket
        client_socket_ = socket(AF_INET, SOCK_STREAM, 0);
        if (client_socket_ < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create socket");
            rclcpp::shutdown();
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Socket Sender Node initialized");


        // 设置服务器地址
        server_addr_.sin_family = AF_INET;
        server_addr_.sin_port = htons(1024); // 目标端口
        server_addr_.sin_addr.s_addr = inet_addr("127.0.0.1"); // 目标IP
        RCLCPP_INFO(this->get_logger(), "trying connect...");
        // 尝试连接
        if (connect(client_socket_, (sockaddr*)&server_addr_, sizeof(server_addr_)) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to connect to SDK node");
            rclcpp::shutdown();
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Connected to SDK node at %s:%d", 
            inet_ntoa(server_addr_.sin_addr), ntohs(server_addr_.sin_port));


        // 订阅String类型消息
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "string_topic", 10, std::bind(&SocketSenderNode::topic_callback, this, std::placeholders::_1)
        );
    }

private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());

        // 通过Socket发送接收到的消息
        int send_result = send(client_socket_, msg->data.c_str(), msg->data.size(), 0);
        if (send_result < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to send data to SDK node");
        } else {
            RCLCPP_INFO(this->get_logger(), "Data sent to SDK node: '%s'", msg->data.c_str());
        }
    }

    int client_socket_;
    sockaddr_in server_addr_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SocketSenderNode>());
    rclcpp::shutdown();
    return 0;
}
