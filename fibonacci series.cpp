#include<iostream>
using namespace std;
int main()
{
    int num=1, n, i, arr[50]={0,1};
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(i=2; i<=n; i++)
    {
        arr[i]=arr[i-1] + arr[i-2];
    }
       cout<<"The fibonacci series upto "<<n<<" terms is: ";
    for(i=1; i<=n; i++)
    {
        cout<<"  "<<arr[i];
    }
    cout<<endl;
    return 1;
}
