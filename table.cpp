#include<iostream>
#include<stdlib.h>

using namespace std;
    
int main()
{
	int n,i;
	system("CLS");
	cout<<"Enter a number\n";
	cin>>n;
	for(i=1;i<=10;i++)
	{
	    cout<<n<<" x "<<i<<" = "<<i*n<<endl;
	}
	return 0;
}