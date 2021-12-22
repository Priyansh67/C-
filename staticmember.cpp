#include <iostream>
using namespace std;
//static member of the class
class Innova
{
public:
    static int price;
    static int getprice()
    {
        return price;
    }
};

int Innova::price=20;   //static member should declare outside

int main()
{
    Innova i1, i2;
    cout << i1.price << endl;
    cout << i2.price << endl;
    cout << Innova::price << endl;
    cout << i2.getprice() << endl;
    return 0;
}