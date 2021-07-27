#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float root1,root2;
    int a,b,c;
    cout<<"Enter a,b,c\n";
    cin>>a>>b>>c;
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Positive root is "<<root1<<endl;
    cout<<"Negative root is "<<root2<<endl;
    return 0;
}