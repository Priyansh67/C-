#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {2,4,6,8,10,12,14,18,20,22};
    int low=0,high=9,mid,search;
    cout<<"Enter the Searching element\n";
    cin>>search;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(search == arr[mid])
        { 
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }
        else if (search < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout<<"Element not found\n";
    return 0;
}  