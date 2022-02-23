#include<iostream>
using namespace std;

//program to show pointer to a funtion 

int min(int x,int y)
{
    return x<y?x:y;
}
int max(int x,int y)
{
    return x>y?x:y;
}
int main()
{
    int (*fp)(int,int);
    
    fp = min;

    cout<<"lower number is "<<(*fp)(10,5)<<endl;
   
    fp = max;
    cout<<"greater number is "<<(*fp)(10,5)<<endl;

    return 0;
}