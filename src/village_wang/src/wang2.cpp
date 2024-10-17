#include "rclcpp/rclcpp.hpp"

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    // 产生节点
    auto node = std::make_shared<rclcpp::Node>("wang2");
    // 打印自我介绍
    RCLCPP_INFO(node->get_logger(), "hello, i am wang2.");
    // 运行节点，并检测退出信号
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}