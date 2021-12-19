# include<iostream>
using namespace std;
    
/*program for using auto function
if we dont know what datatype we want to use ,we can use auto
*/
float fun()
{
	return 2.34f;
}
int main()
{
	double d=12.3f;
	int i=9;
	auto x=2*d+i;
	cout<<x;
}