#include<iostream>
using namespace std;

//Write all functions for rectangle
class Rectangle                // if it has all the functions, it is perfect class
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();                        
        Rectangle(int l,int b);             //  constructors
        Rectangle(Rectangle &r);            
        int getLength(){return length;}     //  mutators
        int getBreadth(){return breadth;}     
        void setLength(int l);              //  accessors
        void setBreadth(int b);             
        int area();                         //  facilitators
        int perimeter();                    
        bool isSquare();                    //  enquriy
        ~Rectangle();                       //  destructor
};
int main()
{
    Rectangle r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if(r1.isSquare())
    cout<<"Yes"<<endl;
}
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}