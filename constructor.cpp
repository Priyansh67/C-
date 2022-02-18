# include<iostream>
using namespace std;
    
/*program for creating default constructors

*/
class rectangle
{
    private:
        int length;
        int breadth;
    public:
        rectangle()                 //constructor
        {
            length=5;
            breadth=3;
        }
        int area()
        {
            return length*breadth;
        }
};
int main()
{
	rectangle r1;
	cout<<"Area is "<<r1.area()<<endl;
    return 0;
}