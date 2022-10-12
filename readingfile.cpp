#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("My.txt");
    string str,str2;
    fin>>str>>str2;
    cout<<str<<endl<<str2<<endl; 
    fin.close();
    return 0;
}