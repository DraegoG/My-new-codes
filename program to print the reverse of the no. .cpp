#include <iostream>
using namespace std;
int main()
{
    int num, n=0, rem;
    cout<<"Enter a number :";
    cin>>num;
    while(num!=0)
    {
        rem = (num%10);
        n = (n*10) + rem ;
        num= num/10;
    }
    cout<<"\nThe number in reverse order is: "<<n;
    return 1;
}
