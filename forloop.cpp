# include<iostream>
using namespace std;
    
int main()
{
	int n,i,sum=0;
	cout<<"Enter the number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    sum=sum+i;
	}
	cout<<"Sum of natural no. is "<<sum<<endl;
	return 0;
}
