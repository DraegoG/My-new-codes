#include<iostream>
using namespace std;
int main()
{
    int a,b,i,flag;
    cout<<"Enter the no. upto which you want to search the prime numbers for: ";
    cin>>a;
    if(a==1)  cout<<"No prime no. upto 1"<<endl;
    else if(a==2)  cout<<" 2 only"<<endl;
    else if(a==3)  cout<<" 2 3"<<endl;
    else
    {
        cout<<" 2 3 ";
        for(b=4; b<=a; b++)
        {
            for(i=2; i<=(b/2); i++)      //code for prime no.
            {
                if(b%i==0) { flag=0;  break;}
                else if(i==(b/2)) { flag=1;  break;}
            }
            if(flag==0);
            else if(flag==1) cout<<b<<" ";
        }
    }
}

