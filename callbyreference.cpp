#include<iostream>
using namespace std;
// program for swapping values of two variable 
// by call by reference method

void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10, y=20;
    cout<<"Before swapping\n";
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swapping\n";
    cout<<x<<" "<<y<<endl;
    return 0;
}