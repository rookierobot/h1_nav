#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"


using std::placeholders::_1;
using std::placeholders::_2;

class SingleDogNode : public rclcpp::Node {
public:
    SingleDogNode(std::string name) : Node(name) {
        RCLCPP_INFO(this->get_logger(), "hi i am wang.");
        // 传入话题类型、话题名称、所要绑定的回调函数，以及通信Qos
        sub_novel = this->create_subscription<std_msgs::msg::String>("sexy_girl", 10, std::bind(&SingleDogNode::topic_callback, this, _1));
    }
private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_novel;
    // 收到话题数据的回调函数
    void topic_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "朕已阅：'%s'", msg->data.c_str());
    };
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto Node = std::make_shared<SingleDogNode>("wang2");
    rclcpp::spin(Node);
    rclcpp::shutdown();
    return 0;
}