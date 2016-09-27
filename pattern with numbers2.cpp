#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    static int s=1;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<s;
            s++;
        }
        cout<<endl;
    }
}
