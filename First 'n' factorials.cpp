#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;
    cout<<"Enter the number to print first 'n' factorials upto: ";
    cin>>a;
    if(a==1)
        cout<<"1! = 1";
    else
        {
          cout<<"1! = 1";
            for(i=2; i<=a; i++)
            {
                c=1;
                for(b=i; b>1; b--)      //function for factorial
                {
                    c= c*b;
                }
                 cout<<"\n"<<i<<"! = "<<c;
            }
        }

}
