#include<iostream>
using namespace std;
int main()
{
    int num, n, i,total=0,rem ;
    cout<<"Enter the no. to check for: ";
    cin>>n;
    num=n;
    while(n!=0)
    {
        rem = n%10;
        total = total+(rem*rem*rem);
        n = n/10;
    }
    if(num==total)
    cout<<"\nThe no. is an Armstrong no. ";
    else
        cout<<"\nThe no. is not an Armstrong no.";

}
