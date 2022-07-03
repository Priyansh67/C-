#include <iostream>
using namespace std;
/*  Program to Demonstrate Polymorphism 
    and Abstract class
*/
#define pi 3.14

class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    float lenght, breadth;

public:
    rectangle(float l = 1, float b = 1)
    {
        lenght = l;
        breadth = b;
    }
    float area()
    {
        return lenght * breadth;
    }
    float perimeter()
    {
        return 2 * (lenght + breadth);
    }
};

class circle : public shape
{
private:
    float radius;

public:
    circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return pi * radius * radius;
    }
    float perimeter()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    shape *ptr;

    ptr = new rectangle(10, 5);
    cout << "Area of rectangle is " << ptr->area() << endl;
    cout << "Perimeter of rectangle is " << ptr->perimeter() << endl;

    ptr = new circle(4);
    cout << "Area of rectangle is " << ptr->area() << endl;
    cout << "circumference of rectangle is " << ptr->perimeter() << endl;

    return 0;
}