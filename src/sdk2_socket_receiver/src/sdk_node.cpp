#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main()
{
    // 创建TCP socket
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket < 0) {
        cerr << "Failed to create socket" << endl;
        return -1;
    }

    // 绑定地址和端口
    sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(1024);  // 监听端口
    server_addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(server_socket, (sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        cerr << "Failed to bind socket" << endl;
        return -1;
    }

    // 监听
    if (listen(server_socket, 1) < 0) {
        cerr << "Failed to listen" << endl;
        return -1;
    }

    cout << "Waiting for client connection..." << endl;

    // 接受客户端连接
    sockaddr_in client_addr;
    socklen_t client_size = sizeof(client_addr);
    int client_socket = accept(server_socket, (sockaddr*)&client_addr, &client_size);
    if (client_socket < 0) {
        cerr << "Failed to accept connection" << endl;
        return -1;
    }

    cout << "Client connected from " << inet_ntoa(client_addr.sin_addr) 
     << ":" << ntohs(client_addr.sin_port) << endl;


    // 接收并显示消息
    char buffer[1024] = {0};
    while (true) {
        int bytes_received = recv(client_socket, buffer, sizeof(buffer), 0);
        if (bytes_received <= 0) {
            cerr << "Connection closed or error occurred" << endl;
            break;
        }

        // 输出收到的消息
        cout << "Received from client: " << buffer << endl;
        memset(buffer, 0, sizeof(buffer));
    }

    close(client_socket);
    close(server_socket);
    return 0;
}
