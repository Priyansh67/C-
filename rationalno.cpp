#include<iostream>
using namespace std;

class rational
{
    private:
        int num;
        int den;
    public:
        rational(int n=0,int d=0)
        {
            num=n;
            den=d;
        }
        friend ostream& operator<<(ostream &out,rational &r);

        friend rational operator+(rational r1,rational r2);
};

ostream& operator<<(ostream &out,rational &r)
{
    out<<r.num<<"/"<<r.den;
    return out;
}

rational operator+(rational r1,rational r2)
{   
    rational r3;
    r3.num=(r1.num*r2.den + r2.num*r1.den);
    r3.den=(r1.den*r2.den);
    return r3;
}

int main()
{
    rational r1(3,4),r2(2,5);
    rational r3;
    r3 = r1 + r2;
    cout<<r3;
    return 0;
}