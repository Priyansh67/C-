#include<iostream>
#include<fstream>
using namespace std;

void write()
{
    fstream fout;
    fout.open("binary.dat",ios::out);
    fout<<"hello"<<endl;
    fout<<"user"<<endl;
    fout.close();

}
void read()
{
    fstream fin;
    fin.open("binary.dat",ios::in);
    string str1,str2;
    fin>>str1>>str2;
    cout<<str1<<endl<<str2;
    fin.close();
}
int main()
{
    write();
    read();
}