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
            for(j=1; j<=i; j++)
            {
                if(j%2==0)
                    cout<<"1";
                else
                    cout<<"0";
            }
        }
        else
        {
            for(k=1; k<=i; k++)
            {
                if(k%2==0)
                    cout<<"0";
                else
                    cout<<"1";
            }
        }
        cout<<endl;
    }
}
