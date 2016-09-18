#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Write a no. to print the table for"<<endl;
    cin>>a;
    for(b=1; b<=10 ;b++)
    {
        cout<< a <<" * "<<b<<" = "<<a*b<<endl;
    }
}
