#include<iostream>
using namespace std;
// operator overloading
class complex
{
    int real,img;
    public:
        complex(int r=0,int i=0)
        {
            real=r; 
            img=i;
        }
        complex operator+(complex x)
        {
            complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
        void display()
        {
            cout<<real<<" + i "<<img<<endl;
        }
};

int main()
{
    complex c1(5,3);
    complex c2(10,5);
    complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}