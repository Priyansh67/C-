#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[20]="Good ";
    char s2[20]="Morning";
    
    cout<<"Lenght is "<<strlen(s1)<<endl;   //string lenght function
    
    strcat(s1,s2);          //string concatenate function
    cout<<s1<<endl;

    char s3[20]="Hello";
    char s4[20]="";

    strcpy(s4,s3);           //string copy function

    cout<<s4<<endl;

    return 0;    
}