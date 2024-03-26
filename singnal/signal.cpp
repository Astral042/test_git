#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

// 全局变量，用于记录是否接收到了信号
volatile sig_atomic_t signalReceived = 0;

// 信号处理函数
void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received." << endl;
    // 将全局变量置为1，表示接收到了信号
    signalReceived = 1;
}

int main()
{
    // 注册信号处理函数
    signal(SIGINT, signalHandler);

    while (!signalReceived)
    {
        cout << "Going to sleep...." << endl;
        sleep(1); // 每秒打印一次并进入睡眠状态
    }

    return 0;
}
