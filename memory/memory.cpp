#include <iostream>
using namespace std;

int main()
{
    int m = 10;
    int *one_array = new int [m];
    for (int i = 0; i < 10; i++)
    {
        one_array[i] = i;
    }

    cout << one_array[5] << endl;
    delete one_array;

    int n = 9;
    int **two_array = nullptr;

    two_array = new int *[m];
    for(int i = 0; i < m; ++i)
    {
        two_array[i] = new int [n];
    }
    cout << two_array[5][5] << endl;

    for(int i = 0; i < m; ++i)
    {
        delete [] two_array[i]; 
    }
    delete [] two_array;

        
    return 0;
}