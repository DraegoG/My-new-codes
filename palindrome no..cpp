#include<iostream>
using namespace std;
int main()
{
    int a, num , rem , b , rev=0;
    cout<<"Enter a no. : ";
    cin>>a;
    num=a;
    while(a!=0)
    {
        rem = (a%10);
        rev = (rev*10)+rem;
        a = (a/10);
    }
    if(num==rev)
    {
        cout<<"\nThe no. is a palindrome.";
    }
    else { cout<<"\nThe no. is not a palindrome.";}

}
