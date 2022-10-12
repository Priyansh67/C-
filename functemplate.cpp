#include <iostream>
//template
using namespace std;

template <class T>

T maxnum(T x, T y)
{
    return x > y ? x : y;
}
int main()
{
    cout << maxnum(10, 5) << endl;
    cout << maxnum(10.5f, 6.9f) << endl;
    return 0;
}