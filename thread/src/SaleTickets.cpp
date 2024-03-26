#include "SaleTickets.h"

using namespace std;

extern HANDLE g_hMutex;

DWORD WINAPI SaleTicket(LPVOID lpParameter)
{
    THD_DATA* pThreadData = (THD_DATA*)lpParameter;
    TICKET* pSaleData = pThreadData->pTicket;
    while(pSaleData->nCount > 0)
    {
        WaitForSingleObject(g_hMutex, INFINITE);
        if(pSaleData->nCount > 0)
        {
            cout << pThreadData->strThreadName << "出售第" << pSaleData->nCount-- << "的票";

            if(pSaleData->nCount >= 0)
            {
                cout << "出票成功！剩余" << pSaleData->nCount << "张票." << endl;
            }
            else
            {
                cout << "出票失败！该票已售完" << endl;
            }
        }
        Sleep(10);
        ReleaseMutex(g_hMutex);
    }

    return 0L;
}

