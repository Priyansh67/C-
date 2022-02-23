#include <iostream>
using namespace std;

class employee
{
private:
    string Ename;

public:
    employee(string s)
    {
        Ename = s;
    }
    string getname()
    {
        return Ename;
    }
};

class fulltime : public employee
{
private:
    int salary;

public:
    fulltime(string s, int x) : employee(s)
    {
        salary = x;
    }
    int getsalary()
    {
        return salary;
    }
};

class parttime : public employee
{
private:
    int wage;

public:
    parttime(string p, int y) : employee(p)
    {
        wage = y;
    }
    int getwage()
    {
        return wage;
    }
};

int main()
{
    fulltime f("John", 5000);
    parttime p("Jack", 800);
    cout << "Salary of " << f.getname() << " is " << f.getsalary() << endl;
    cout << "Daily wages of " << p.getname() << " is " << p.getwage() << endl;
    return 0;
}