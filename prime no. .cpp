#include<iostream>
using namespace std;
int main()
{
    int a,j;
    cout<<"Enter a no. for inspection"<<endl;
    cin>>a;
    if(a==0 || a==1)
        cout<<"Its not a prime no."<<endl;
 else if(a==2)
    cout<<"2 is a prime no."<<endl;
    else
    {
    for(j=--a; j>1 ; j-- )
        {
            if(a%j!=0)
            break;
        }
    }
}
