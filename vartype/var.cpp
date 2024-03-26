#include <iostream>

int global_var;//全局变量会自动初始化

using namespace std;

class MyClass
{
public:
    static int class_var; //如果在类内初始化，带有类内初始值设定的成员必须声明为常量
};

int MyClass::class_var = 30;//不能在函数局部作用域中定义类作用域变量；
int main()
{
    int local_var1 = 1;
    int local_var2 = 2;
    int global_var = 5; //局部变量覆盖全局变量
    global_var = local_var1 + local_var2;
    
    cout << "global var: " << global_var << endl;
    cout << "class var: " << MyClass::class_var << endl;
    return 0;
}