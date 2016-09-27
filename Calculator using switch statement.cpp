#include<iostream>
using namespace std;
int main()
{
    int c;
    float a,b,op;
    cout<<"Enter the two numbers you want to do calculations for: \nEnter no. one: ";
    cin>>a;
    cout<<"\nEnter no. two: ";
    cin>>b;
cout<<"\nNow enter what operation you want to do:\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n Your choice: ";
cin>>c;
switch(c)
{
case 1:
    cout<<"The sum is: "<<a+b;
    break;
case 2:
    cout<<"The subtraction is: "<<a-b;
    break;
case 3:
    cout<<"The product is: "<<a*b;
    break;
case 4:
    op=(a/b);
    cout<<"The division is: "<<op;
    break;
}
}
