#include<iostream>

using  namespace std;

int main()
{
    int num,num2,digit,digit2,rev=0;
    cout<<"Enter a Number\n";
    cin>>num;
    while(num>0)
    {
        digit = num % 10;
        num = num / 10;
        rev = rev * 10 + digit;   
    }
    num2 = rev;
    while(num2>0)
    {
        digit2 = num2 % 10;
        num2 = num2 / 10;
        switch(digit2)
        {
            case 0 : cout<<"zero "; break;
            case 1 : cout<<"one "; break;
            case 2 : cout<<"two "; break;
            case 3 : cout<<"three "; break;
            case 4 : cout<<"four "; break;
            case 5 : cout<<"five "; break;
            case 6 : cout<<"six "; break;
            case 7 : cout<<"seven "; break;
            case 8 : cout<<"eight "; break;
            case 9 : cout<<"nine "; break;
        }
    }
    return 0;
}
