#include<iostream>

using namespace std;

int main()
{
    int arr[10],n=10,search;
    cout<<"Enter Elements of  array\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter Searching Element\n";
    cin>>search;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found\n";
    return 0;
}