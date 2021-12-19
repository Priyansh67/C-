# include<iostream>
using namespace std;
    
/*program for global and local variables

*/
int g=5;            //this is a global variable

void fun()
{
	int a=10;              //this is a local variable 
	a++;
	g++;
	cout<<a<<" "<<g<<endl;
}
int main()
{
	cout<<g<<endl;          //this is accessing the global variable 'g'
	fun();
	cout<<g<<endl;
}