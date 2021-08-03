# include<iostream>
using namespace std;
    
int main()
{
	int i,n,count=0;
	cout<<"Enter the number\n";
    cin>>n;
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
		    count++;
	     }
	}  
	if(count==2)
		cout<<"Prime number\n";
	else
		cout<<"Not a prime number\n";     
	return 0;
}
