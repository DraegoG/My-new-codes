#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next=NULL;
    node()
    {
        cout<<"\nEnter the data in the node: ";
        cin>>data;
    }

} *start=NULL,*head=NULL,*ptr=NULL,*prev=NULL;
    static int j,k;
    int a,b,s,arr[20],i,count=0,create(),print(),revprint(),siz(),srch(),insert_new(),update(),remov(node*),concat(),split();

int main()
{
    cout<<"\t\t\tStart a link list "<<endl;
    while(1){
    cout<<"\nWhat operation do you want to operate on the link list:\n1.Create a linked list\n2.Print data\n3.Reverse print\n4.Size of link list\n5.Search\n6.Insert a new node\n7.Remove an element\n8.Combining two linked lists\n9.Split two linked lists\n10.Update a node\n11.Exit"<<endl;
    cin>>s;
    switch(s)
    {
     case 1: create(); break;
     case 2: print(); break;
     case 3: revprint(); break;
     case 4: siz(); break;
     case 5: srch(); break;
     case 6: insert_new(); break;
     case 7: remov(start); break;
     case 8: concat(); break;
     case 9: split(); break;
     case 10: update(); break;
     case 11: exit(0);
    }
}
    return 1;
}
//Creating the linked list
int create()
{
    char opt='y';
    while(opt=='y')
    {
        node*p=new node;
        if(j==0)start=p;
        else
        {
            ptr->next=p;
        }
        ptr=p;
        j++;
        cout<<"Do you want to continue? y/n: ";
        cin>>opt;
    }
}
int print()
{
    cout<<"\nNow printing the data in link list:"<<endl;
    ptr=start;
    while(ptr)      //since when ptr=NULL it is a false value and thus stops the while loop.
    {   cout<<"-->[ "<<ptr->data<<" ]";   ptr=ptr->next;  }
    cout<<endl; //for(ptr=start; ptr; ptr=ptr->next) { cout<<"\ndata: "<<ptr->data; }
}
int revprint()
{
    cout<<"\n\nNow printing the link list in reverse:"<<endl;
    ptr=start;
    for(i=0; i<4; i++,ptr=ptr->next)
    {
        arr[i]=ptr->data;
    }
    i-=1;
    cout<<"The no. in reverse are: "<<endl;
    while(i!=-1)
        {
             cout<<"[ "<<arr[i]<<"]<-- ";
             i--;
        }
    cout<<"The end"<<endl;
    return 0;
}
int siz()
{
    ptr=start;
    while(ptr!=NULL)
    { count++; ptr=ptr->next; }
    cout<<"\nThe size of link list is: "<<count<<endl;
}
int srch()
{
    ptr=start;
    int fnd,a=0,cnt=0;
    cout<<"\nEnter the no. you want to search for: ";
    cin>>fnd;
    while(ptr!=NULL&&a==0)
        {
            if(ptr->data==fnd)  a=1;
            ptr=ptr->next;
            cnt++;
        }
        if(a==1)  cout<<"The data was found on node no. "<<cnt<<endl;
        if(a==0)  cout<<"The element was not found in the link list"<<endl;
}
int insert_new()
{
    print();
    ptr=start;  count=0;
    cout<<"Now enter the position you want to update: ";
    cin>>a;
    cout<<"\nNow enter the data you want to update with: ";
    cin>>b;
    while(count!=a)
    {
        ptr=ptr->next;  count++;
    }
    ptr->data=b;
    cout<<"\nThe list is updated"<<endl;
    print();
}

int remov(node*ptr)
{
    int a;
    prev=ptr;
    print();
    cout<<"\nNow enter the element you want to remove: ";
    cin>>a;
    int i=0;
    while(!(ptr->data==a||ptr==NULL))
        {
            prev=ptr;
            ptr=ptr->next;
            i++;
        }
        if(i==0)  start=ptr->next;
        prev->next=ptr->next;
        print();
}
//Combining two linked lists
int concat()
{
    int a=j-1;
    node*ptr=NULL;
    char res='y';
    cout<<"\nCreating a new linked list:\n";
    while(res=='y')
    {
      node*p=new node;
      if(k==0){head=p;}
      else
        {
            ptr->next=p;
        }
        ptr=p;
        k++;
        cout<<"Do you want to continue? y/n : ";
        cin>>res;
    }
    ptr=start;
    while(a)
    {
        ptr=ptr->next;
        a--;
    }
    ptr->next=head;
    j=j+k;
    print();
}
//Splitting linked list into two
int split()
{
    print();
    node*pr=start,*ptr=NULL;
    int optn;
    cout<<"Enter the position you want to break the list after: ";
    cin>>optn;
    while(optn)
    {
        ptr=pr;
        pr=pr->next;
        optn--;
    }
    ptr->next=NULL;
    head=pr;
    print();
    cout<<"\nAnd the second list is:"<<endl;
    while(pr!=NULL)
    {
        cout<<"-->[ "<<pr->data<<" ]";
        pr=pr->next;
    }
}
//Update an element
int update()
{
    node*ptr=start;
    int a,b;
    cout<<"\nEnter the no. of node you want to update: ";
    cin>>a;
    cout<<"\nEnter the new value at node no. "<<a;
    cin>>b;
    a--;
    while(a)
    {
        ptr=ptr->next;
        a--;
    }
    ptr->data=b;
    print();
}
