# include<iostream>
using namespace std;
    
/*program for base class pointer derived class object

*/
class base
{
public:
	void fun1()
	{
		cout<<"fun1 of base"<<endl;
	}
};
class derived:public base
{
public:
	void fun1()
	{
		cout<<"fun2 of derived"<<endl;
	}
};
int main()
{
	derived d;
	base *ptr=&d;
	ptr->fun1();
	//ptr->fun2();
	return 0;
}