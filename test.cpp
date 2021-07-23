#include<iostream>
#include<stdlib.h>

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

// #define clear() std::cout<<"\033[H\033[J"
// #define gotoxy(x,y) std::cout<<"\033[%d;%dH"<<(y)<<(x)


int main()
{
  //  system("CLS");
    
    clear();
    
    gotoxy(3,4);
    system("color 0F");
  
     std::cout<<"hello";

}