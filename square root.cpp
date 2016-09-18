#include<iostream>
using namespace std;
int main()
{
    int a; float i;
    cout<<"Enter the no. : ";
    cin>>a;
    if(a==0 || a==1)
        cout<<"\nThe square root is: "<<a;
    else if(a>=2)
    {
        for(i=a/2; i>=2; i--)
            {
                if((a/i)==i)
                {
                    cout<<"\nThe no. is a perfect square & the square root is : "<<i<<endl;
                    break;
                }
            }
    }
              else
                {
                    cout<<"\nThe no. is not a perfect square";
                }

}
