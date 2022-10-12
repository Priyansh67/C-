# include<iostream>
using namespace std;
    
int main()
{
	int i,n,sum=0;
	cout<<"Enter the number\n";
    cin>>n;
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
		   sum=sum+i;
	     }
	}	  
        if(2*n==sum)
		    cout<<"Perfect number\n";
        else
		    cout<<"Not a perfect number\n";	     
	return 0;
}
