#include <iostream>
#include <limits>

using namespace std;
  
int main()  
{  
    system("chcp 65001");
    // cout << "type: \t\t" << "************size**************"<< endl;  
    // cout << "bool: \t\t" << "number of bytes:" << sizeof(bool);  
    // cout << "\tMAX:" << (numeric_limits<bool>::max)();  
    // cout << "\t\tMIN:" << (numeric_limits<bool>::min)() << endl; 
    // cout << "char: \t\t" << "number of bytes:" << sizeof(char);  
    // cout << "\tMAX:" << static_cast<int>(numeric_limits<char>::max());//255 空   
    // cout << "\t\tMIN:" << static_cast<int>(numeric_limits<char>::min()) << endl;//0 ?  
    // cout << "signed char: \t" << "number of bytes:" << sizeof(signed char);  
    // cout << "\tMAX:" << static_cast<int>(numeric_limits<signed char>::max());  
    // cout << "\t\tMIN:" << static_cast<int>(numeric_limits<signed char>::min()) << endl;  
    // cout << "unsigned char: \t" << "number of bytes:" << sizeof(unsigned char);  
    // cout << "\tMAX:" << static_cast<int>(numeric_limits<unsigned char>::max());  
    cout << "\t\tMIN:" << static_cast<int>(numeric_limits<unsigned char>::min()) << endl;  
    cout << "wchar_t: \t" << "number of bytes:" << sizeof(wchar_t);  
    cout << "\tMAX:" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\tMIN:" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "number of bytes:" << sizeof(short);  
    cout << "\tMAX:" << (numeric_limits<short>::max)();  
    cout << "\t\tMIN:" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "number of bytes:" << sizeof(int);  
    cout << "\tMAX:" << (numeric_limits<int>::max)();  
    cout << "\tMIN:" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "number of bytes:" << sizeof(unsigned);  
    cout << "\tMAX:" << (numeric_limits<unsigned>::max)();  
    cout << "\tMIN:" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "number of bytes:" << sizeof(long);  
    cout << "\tMAX:" << (numeric_limits<long>::max)();  
    cout << "\tMIN:" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "number of bytes:" << sizeof(unsigned long);  
    cout << "\tMAX:" << (numeric_limits<unsigned long>::max)();  
    cout << "\tMIN:" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "number of bytes:" << sizeof(double);  
    cout << "\tMAX:" << (numeric_limits<double>::max)();  
    cout << "\tMIN:" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "number of bytes:" << sizeof(long double);  
    cout << "\tMAX:" << (numeric_limits<long double>::max)();  
    cout << "\tMIN:" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "number of bytes:" << sizeof(float);  
    cout << "\tMAX:" << (numeric_limits<float>::max)();  
    cout << "\tMIN:" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "number of bytes:" << sizeof(size_t);  
    cout << "\tMAX:" << (numeric_limits<size_t>::max)();  
    cout << "\tMIN:" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "number of bytes:" << sizeof(string) << endl;  
    // << "\tMAX:" << (numeric_limits<string>::max)() << "\tMIN:" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    system("pause");
    return 0;  
    
}