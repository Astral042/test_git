#include <iostream>

int add(int a, int b)
{
    return a + b;
}

typedef int (*AddFunctionPointer)(int, int);

int main()
{
    int (*addPointer)(int, int);
    AddFunctionPointer addPointer1 = add;
    addPointer = &add;
    // addPointer = add;
    int result = addPointer(3, 4);
    int result1 = addPointer1(4, 6);
    std::cout << "Result: " << result <<std::endl;
    std::cout << "Result1: " << result1 <<std::endl;
    return 0;
}