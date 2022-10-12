#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[20]="Programming";
    char s2[20]="gram";

    if(strstr(s1,s2)!=NULL)
        cout<<strstr(s1,s2)<<endl;      //string substring function
    else
        cout<<"Not Found";

    char s3[20]="minor";
    char s4[20]="elder";

    cout<<strcmp(s3,s4)<<endl;          //string compare function

    return 0;    
}