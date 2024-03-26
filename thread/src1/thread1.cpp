#include <iostream>
#include <thread>
#include <windows.h>

DWORD WINAPI ThreadProc (LPVOID lpParameter)
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "子线程： i = " << i << std::endl;
        Sleep(100);
    }

    return 0L;
}

int main()
{
    HANDLE thread = CreateThread(nullptr, 0, ThreadProc, nullptr, 0, nullptr);
    CloseHandle(thread);

    for(int i = 0; i < 5; ++i)
    {
        std::cout << "主线程： i = " << i << std::endl;
        Sleep(100);
    }

    return 0;
}