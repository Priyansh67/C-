# include<iostream>
using namespace std;
    
/*program for writing class in c++ for rectangle

*/
class rectangle
{
    public:
        int length;
        int breadth;
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }
};
int main()
{
	rectangle r1;
    rectangle *ptr;
    ptr = &r1;
	ptr->length=15;
	ptr->breadth=10;
	cout<<"area is "<<ptr->area()<<endl;
	cout<<"perimeter is "<<ptr->perimeter()<<endl;
}