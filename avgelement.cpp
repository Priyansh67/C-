#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,average=0,arr[10];
    cout<<"Enter the number of element\n";
    cin>>num;

    cout<<"Enter Elements\n";
    for(int i=0;i<num;i++)
        cin>>arr[i];

    for(int i=0;i<num;i++)
        sum += arr[i];

    average = sum / num;
    cout<<"Average of Elements is "<<average;
    return 0;

}