#include <thread>
#include <iostream>
#include <windows.h>

#define NAME_LINE 40

typedef struct __THREAD_DATA
{
    int maxnum;
    char strThreadName[NAME_LINE];

    __THREAD_DATA() : maxnum(0)
    {
        memset(strThreadName, 0, NAME_LINE *sizeof(char));
    }
}THREAD_DATA;

HANDLE g_hMutex = NULL;

DWORD WINAPI ThreadProc(LPVOID lpParameter)
{
    THREAD_DATA* pThreadData = (THREAD_DATA*)lpParameter;

    for (int i = 0; i < pThreadData->maxnum; ++i)
    {
        WaitForSingleObject(g_hMutex, INFINITE);
        std::cout << pThreadData->strThreadName << "---" << i << std::endl;
        Sleep(100);
        ReleaseMutex(g_hMutex);
    }
    return 0L;
}

int main()
{
    g_hMutex = CreateMutex(NULL, FALSE, NULL);

    THREAD_DATA threadData1, threadData2;
    threadData1.maxnum = 5;
    threadData2.maxnum = 10;
    strcpy(threadData1.strThreadName, "Thread1");
    strcpy(threadData2.strThreadName, "Thread2");

    HANDLE hThread1 = CreateThread(nullptr, 0, ThreadProc, &threadData1, 0, nullptr);
    HANDLE hThread2 = CreateThread(nullptr, 0, ThreadProc, &threadData2, 0, nullptr);

    CloseHandle(hThread1);
    CloseHandle(hThread2);

    for (int i = 0 ; i < 5; ++i)
    {
        WaitForSingleObject(g_hMutex, INFINITE);
        std::cout << "Main Thread: " << i << std::endl;
        Sleep(100);
        ReleaseMutex(g_hMutex);
    }

    system("pause");
    return 0;
}

