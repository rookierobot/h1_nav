#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <memory>

using namespace std::chrono_literals;

class WriterNode : public rclcpp::Node
{
public:
    WriterNode(const std::string &name) : Node(name), i_(0)
    {
        RCLCPP_INFO(this->get_logger(), "大家好，我是%s,我是一名作家！", name.c_str());

        // 创建发布者，话题名称为 "sexy_girl"
        pub_novel_ = this->create_publisher<std_msgs::msg::String>("sexy_girl", 10);

        // 创建定时器，每5秒触发一次 timer_callback
        timer_ = this->create_wall_timer(5s, std::bind(&WriterNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        // 构造消息
        auto message = std_msgs::msg::String();
        message.data = "第" + std::to_string(i_) + "回：潋滟湖 " + std::to_string(i_) + " 次偶遇胡艳娘";

        // 发布消息
        pub_novel_->publish(message);
        RCLCPP_INFO(this->get_logger(), "李四: 我发布了艳娘传奇: \"%s\"", message.data.c_str());

        // 章节编号+1
        i_++;
    }

    // 发布者
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_novel_;

    // 定时器
    rclcpp::TimerBase::SharedPtr timer_;

    // 章节编号计数器
    int i_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    // 创建节点
    auto node = std::make_shared<WriterNode>("li3");

    // 保持运行
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}
