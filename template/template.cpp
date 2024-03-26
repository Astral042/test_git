#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b)
{
    return a > b ? a : b;
}

int main()
{
    int i = 39, j = 56;
    cout << "Max(i,j): " << Max(i, j) << endl;

    double di = 22.2, dj = 223.4;
    cout << "Max(di, dj): " << Max(di, dj) << endl;

    string s1 = "Hello", s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) <<endl;
    return 0;
}