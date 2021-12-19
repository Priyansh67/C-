#include<iostream>
#include<string>

using namespace std;

int main()
{
    char X[10]="Hii";
    char *x="Hey";
    char S[]={'H','e','l','l','o','\0'};
    string s="string";
    
    cout<<X<<endl;
    cout<<S<<endl;

    cout<<x<<endl;
    cout<<s<<endl;

    string str;                 //string class (string datatype)
    //cin>>str;
    getline(cin,str);
    cout<<str<<endl;
   
    return 0;

}