#include <iostream>
using namespace std;

/*program for  virtual destructor

*/
class base
{
public:
    virtual ~base()
    {
        cout << "destructor of base" << endl;
    }
};
class derived : public base
{
public:
    ~derived()
    {
        cout << "destructor of derived" << endl;
    }
};

int main()
{
    base *p = new derived();
    
    delete p;
}