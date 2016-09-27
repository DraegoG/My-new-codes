#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Enter the no. of rows: ";
    cin>>a;
    for(b=1; b<=a; b++)
    {
        for(i=1; i<=b; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
