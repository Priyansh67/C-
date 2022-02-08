#include<iostream>
using namespace std;

//program to show pointer to a funtion 

void display()
{
    cout<<"Hello\n";

}

int main()
{
    void (*fp)();       //declaration
    fp = display;       //initialization
    (*fp)();            //calling
}