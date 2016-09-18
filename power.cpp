#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b=1;
    cout<<"Enter an integer: ";
    cin>>i;
    cout<<" to the power: ";
    cin>>j;
    for(a=1; a<=j; a++)
    {
        b=b*i;
    }
    cout<<"\nThe answer is : "<<b;
}
