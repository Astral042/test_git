#include <iostream>
#include <exception>

using namespace std;

double division(int x, int y)
{
    if(0 == y)
    {
        throw "Division by zero condition!";//执行throw之后会跳过后续的语
    }
    return (x/y);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;
    try {
        z = division(x,y);
        cout << z << endl;
    }
    catch(const char* msg)
    {
        cerr << msg << endl; 
    }
    return 0;
}