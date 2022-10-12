#include <iostream>
#include <vector>
using namespace std;
//stl class vector
int main()
{
    vector<int> v = {2, 4, 6, 8, 9};
    v.push_back(10);
    v.push_back(12);
    v.push_back(15);

    v.pop_back();

    for (int x : v)
        cout << x << " ";

    return 0;
}

