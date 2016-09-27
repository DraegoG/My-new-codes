#include<iostream>
using namespace std;
int main()
{
    int n,b,i;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(b=1; b<=n; b++)
    {
        for(i=(n-b); i>0; i--)
        {
            cout<<" ";
        }
        for(i=1; i<=b; i++)
        {
            cout<<"*";
        }
     cout<<endl;
    }
}
