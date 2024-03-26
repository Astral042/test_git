#include <iostream>
#include <csignal>
#include <windows.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum <<") received.\n";
    exit(signum);
}

int main()
{
    int i = 0;
    signal(SIGINT, signalHandler);

    while(++i)
    {
        cout << "Going to sleep...."<<endl;
        if(3 == i)
        {
            raise(SIGINT);
        }
        Sleep(1);
    }

    return 0;
}