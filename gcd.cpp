#include<iostream>

using namespace std;
//greatest common divisor
int main()
{
    int m,n;
    cout<<"Enter two Nmbers\n";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
            m = m - n;
        else if (n>m)
            n = n - m;
    }
    cout<<"GCD is "<<m;
    return 0;
}