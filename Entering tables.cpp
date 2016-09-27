#include <iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Enter the number to print tables upto: ";
    cin>>a;
    for(i=1; i<=a ; i++)
    {
        for(b=1; b<=10; b++)
        {
            cout<<i<<" * "<<b<<" = "<<i*b<<endl;
        }
        cout<<endl;
    }
}
