#include <iostream>
using namespace std;

/*program for all about catch
    exception is built in class
    more the catch, better the program :)
*/
class myexception1 : exception
{
};
class myexception2 : public myexception1
{
};
int main()
{
    try
    {
        throw myexception1();
    }
    catch (int e)
    {
        cout << "int catch" << endl;
    }
    catch (double e)
    {
        cout << "double catch" << endl;
    }
    catch (myexception2 e)
    {
        cout << "myexception2 catch" << endl;
    }
    catch (myexception1 e)
    {
        cout << "myexception1 catch" << endl;
    }
    catch (...)
    {
        cout << "all catch" << endl;
    }
    return 0;
}