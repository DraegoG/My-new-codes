#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,s;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s=1;
        for(j=1; j<=i; j++)
        {
            cout<<s;
            ++s;
            if(j==i)
                s--;
        }
        for(k=1; k<i; k++)
        {
            --s;
            cout<<s;
        }
        cout<<endl;
    }
}
