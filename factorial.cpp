#include <iostream>
using namespace std;
int main()
{
    int a,c=1,j;
    cout<<"Enter the no."<<endl;
    cin>>a;
    if(a==0)
    {
        cout<<"1";
    }
else
    {
   while(a>1)
    {
        c=c*a;
        --a;
    }

   /*for(j=a; j>=1; j--)
    {
        c = c*j;
    }
    */
    cout<<"\n" <<c;
    }
    return 1;
}
