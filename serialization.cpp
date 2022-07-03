#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    string branch;

public:
    Student() {}
    Student(string n, int r, string b)
    {
        name = n;
        roll_no = r;
        branch = b;
    }
    friend ofstream &operator<<(ofstream &fout, Student s);
    friend ifstream &operator>>(ifstream &fin, Student &s);
    friend ostream &operator<<(ostream &os, Student &s);
};
ofstream &operator<<(ofstream &fout, Student s)
{
    fout << s.name << endl;
    fout << s.roll_no << endl;
    fout << s.branch << endl;
    return fout;
}
ifstream &operator>>(ifstream &fin, Student &s)
{
    fin >> s.name;
    fin >> s.roll_no;
    fin >> s.branch;
    return fin;
}
ostream &operator<<(ostream &os, Student &s)
{
    os << "Name " << s.name << endl;
    os << "Roll " << s.roll_no << endl;
    os << "Branch " << s.branch << endl;
    return os;
}
int main()
{
    ofstream fout("Student.txt");
    Student s1("Jack", 10, "CS");
    fout << s1;
    fout.close();
    ifstream fin("Student.txt");
    fin >> s1;
    cout << s1;
    return 0;
}