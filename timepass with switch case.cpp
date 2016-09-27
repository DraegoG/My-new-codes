#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the rank of the student ";
    cin>>a;
    cout<<"Selected for: "<<endl;
     if(a>=0&&a<=10)
            b=1;
        else if(a>=10&&a<20)
            b=2;
        else if(a>=20&&a<30)
            b=3;
        else if(a>=30&&a<40)
        b=4;
        else
            b=5;

    switch(b)
    {
    case 1:
        cout<<"\nIIT Delhi "<<endl;
        break;
    case 2:
        cout<<"\nIIT Bombay"<<endl;
        break;
    case 3:
        cout<<"\nIIT Chennai"<<endl;
        break;
    case 4:
        cout<<"\nIIT Kanpur"<<endl;
        break;
    case 5:
        cout<<"\nIIT Kharagpur"<<endl;
        break;
    }
}
