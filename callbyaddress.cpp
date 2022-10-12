#include<iostream>

using namespace std;
// program for swapping values of two variable 
// by call by address method
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;    
}
int main()
{
    int x=10, y=20;
    cout<<"Before swapping\n";
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"After swapping\n";
    cout<<x<<" "<<y<<endl;
    return 0;
}