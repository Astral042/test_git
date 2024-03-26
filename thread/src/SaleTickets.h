#include <thread>
#include <iostream>
#include <windows.h>
#include <string>
#include <strstream>

#define NAME_LINE 40

using namespace std;

typedef struct __TICKET
{
    int nCount;
    char strTicketName[NAME_LINE];

    __TICKET() : nCount(0)
    {
        memset(strTicketName, 0, NAME_LINE*sizeof(char));
    }
}TICKET;

typedef struct __THD_DATA
{
    TICKET* pTicket;
    char strThreadName[NAME_LINE];

    __THD_DATA() : pTicket(NULL)
    {
        memset(strThreadName, 0, NAME_LINE * sizeof(char));
    }
}THD_DATA;

template<class T>
string convertToString(const T val)
{
    string s;
    std::strstream ss;
    ss << val;
    ss >> s;
    return s;
}

DWORD WINAPI SaleTicket(LPVOID lpParameter);
