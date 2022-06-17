#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("My.txt");
    fout<<"hello\nmy_file\n";
    fout.close();
    return 0;
}