#include <thread>
#include <iostream>
#include <windows.h>
#include "SaleTickets.h"

HANDLE g_hMutex;
void test()
{
    g_hMutex = CreateMutex(NULL, FALSE, nullptr);

    TICKET ticket;
    ticket.nCount = 100;
    strcpy(ticket.strTicketName, "北京-->赣州");
    const int THREAD_NUMM = 8;
    THD_DATA threadSale[THREAD_NUMM];
    HANDLE hThread[THREAD_NUMM];

    for(int i = 0; i < THREAD_NUMM; ++i)
    {
        threadSale[i].pTicket = &ticket;
        string strTHreadName = convertToString(i);
        strTHreadName = "窗口" + strTHreadName;

        strcpy(threadSale[i].strThreadName, strTHreadName.c_str());

        hThread[i] = CreateThread(nullptr, 0, SaleTicket, &threadSale[i], 0, nullptr);
        WaitForSingleObject(g_hMutex, INFINITE);
        cout << threadSale[i].strThreadName << "开始出售" << threadSale[i].pTicket->strTicketName << "的票..." << endl;
        ReleaseMutex(g_hMutex);    
    }

    WaitForMultipleObjects(THREAD_NUMM, hThread, TRUE, INFINITE);
    for(int  i = 0 ; i < THREAD_NUMM; ++i)
    {
        CloseHandle(hThread[i]);
    }

    system("pause");
}

int main()
{
    test();

    return 0;
}