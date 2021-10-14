# include<iostream>
using namespace std;
    
/*program for function to find maximum of 3nos

*/
int maxim(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
int main()
{
	int a,b,c,d;
	cout<<"enter three numbers \n";
	cin>>a>>b>>c;
	d=maxim(a,b,c);
	cout<<"maximum no is "<<d<<endl;
	return 0;
}