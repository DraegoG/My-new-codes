#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            for(j=1; j<=i/2; j++)  cout<<"01";
        }
        else
        {
            cout<<"1";
            for(k=1; k<=i/2; k++)  cout<<"01";
        }
        cout<<endl;
    }
}
