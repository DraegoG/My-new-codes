#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=16; //For typing the password length of 16;
    while(getch()&&a!=1)
    {
        cout<<"*";
        a--;
    }
}
