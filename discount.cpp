#include<iostream>

using namespace std;

int main()
{
    float amt,dis=0;
    cout<<"Enter Bill Amount"<<endl;;
    cin>>amt;
    cout<<"Bill Amount is "<<amt<<endl;
    if(amt>=500)
    {
        dis = amt*20/100;
        cout<<"Discount is "<<dis<<endl;
        cout<<"Discounted Amount is "<<amt-dis<<endl;
    }
    else if (amt>=100 && amt<500)
    {
        dis = amt*10/100;
        cout<<"Discount is "<<dis<<endl;
        cout<<"Discounted Amount is "<<amt-dis<<endl;
    }
    return 0;
}