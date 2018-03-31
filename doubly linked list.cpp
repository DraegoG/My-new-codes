#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int info;
    struct node *prev=NULL,*next=NULL;
    node()
    {
        cout<<"\nEnter the value in the node: ";
        cin>>info;
    }
}*START=NULL,*ptr=NULL,*old=NULL;
int op,create(),print(),rev(node*),siz(),srch(),insert_newnode(),update(),rem(node*),concat(),split();
static int x=0,y=0,z=0;
int main()
{
    cout<<"<---------Doubly Linked list--------->"<<endl;
    while(1){
    cout<<"\nWhat operation do you want to perform:\n1.Create a doubly linked list\n2.Print the linked list\n3.Print the linked list in reverse\n4.Print the size of the linked list\n5.Search an item\n6.Insert a new node\n7.Update an item in the list\n8.Remove a node\n9.Combining two items\n10.Splitting the list\n11.Exit"<<endl;
    cin>>op;
    switch(op)
    {
        case 1: create(); break;
        case 2: print(); break;
        case 3: rev(START); break;
        case 4: siz(); break;
        case 5: srch(); break;
        case 6: insert_newnode(); break;
        case 7: update(); break;
        case 8: rem(START); break;
        case 9: concat(); break;
        case 10: split(); break;
        case 11: exit(0); break;
    }
    }
}
//Creating linked list
int create()
{
    node*ptr=NULL;
    char optn='y';
    while(optn=='y')
    {
        node*p=new node;
    if(x==0) START=p;
    else
        {
            ptr->next=p;
            p->prev=ptr;
        }
    ptr=p;
    x++;
    cout<<"Do you want to continue? y/n: ";
    cin>>optn;
    }
}
int print()
{
    node*ptr=START;
    cout<<endl;
    while(ptr)
    {
        cout<<"-->[ "<<ptr->info<<" ]";
        ptr= ptr->next;
    }
}
//Printing linked in reverse
int rev(node *ptr)
{
    int a=x-1;  //One less than the size of the linked list
    while(a)
    {
        ptr=ptr->next;
        a--;
    }
    cout<<"\nThe value in the linked list are: "<<endl;
    a=x;
    while(a)
    {
        cout<<"[ "<<ptr->info<<" ]<--";
        ptr=ptr->prev;
        a--;
    }
}
//Size of the linked list
int siz()
{
    cout<<"\nThe length of the link list is: "<<x<<endl;
}
//Searching an element in the linked list
int srch()
{
    int a=x,i,flag=0,count=0;
    node*ptr=START;
    cout<<"\n\nEnter the element you want to search for: ";
    cin>>i;
    while(a)
    {
        count++;
        a--;
        if(ptr->info==i) { a=0; flag=1; }
        ptr=ptr->next;
    }
    if(flag==1)  cout<<"\nThe element was found in node no. "<<count<<endl;
    else  cout<<"\nElement not present"<<endl;
}
//Updating an element
int insert_newnode()
{
    int count=0,i=x-1,j,flag=0;
    node*pr=START,*ptr=NULL;
    cout<<"\nAt what node no. you want to enter a new node after: ";
    cin>>j;
    node*p=new node;
    if(j==0) { p->next=START; START=p;}
    else if(j==x)
        {
            while(i)
            {
                pr=pr->next;
                i--;
            }
            pr->next=p;
            p->prev=pr;
        }
else{
    while(flag==0)
    {
        ptr=pr;
        count++;
        if(count==j)  flag=1;
        pr=pr->next;
    }
    p->prev=ptr;  p->next=pr;
    ptr->next=p;   pr->prev=p;
}
    x++;
    print();
}
//Updating an element
int update()
{
    node*ptr=START;
    int a,b,c;
    cout<<"\nEnter the no. of node you want to update: ";
    cin>>a;
    if(a>x) { cout<<"\nNo such node"; }
    else{
    b=a-1;
    cout<<"Enter the new value: ";
    cin>>c;
    while(b)
    {
        ptr=ptr->next;
        b--;
    }
    ptr->info=c;
    print();
    }
}
//Removing an element from the list
int rem(node*ptr)
{          //Or use:   node* ptr =START;
    node*pr=NULL;
    int a=x-2,b,flag=0,i;
    print();
    cout<<"\nEnter the node no. you want to remove: ";
    cin>>i;
    if(i==1) { ptr=ptr->next; START=ptr; ptr->prev=NULL; }
    else if(i==x)
     {
         while(a)
         {
             ptr=ptr->next;
             a--;
         }
         ptr->next=NULL;
     }
else{
  b=i-1;
    while(b)
    {
        pr=ptr;
        ptr=ptr->next;
        b--;
    }
    pr->next=ptr->next;  ptr=ptr->next;  ptr->prev=pr;
     }
    x--;
    print();
}
//Combining two linked list
int concat()
{
    int a=x-1;
    node*head=NULL,*p=START,*ptr=NULL;
    char optn='y';
    cout<<"\nCreating a new linked list: ";
    while(optn=='y')
    {
        node*p=new node;
        if(z==0) { head=p; }
        else
        {
            ptr->next=p;
            p->prev=ptr;
        }
        ptr=p;
        z++;
        cout<<"\nDo you want to continue? y/n:";
        cin>>optn;
    }
    while(a)
    {
        p=p->next;
        a--;
    }
    p->next=head;
    x=x+z;
    p=START;
    while(p!=NULL)
    {
        cout<<"-->[ "<<p->info<<" ]";
        p=p->next;
    }
}
//Splitting the linked list
int split()
{
    int s;
    node* pr=START,*head=NULL;
    cout<<"\nEnter the no. of node you want to split after: ";
    cin>>s;
    while(s)
    {
        pr=pr->next;
        s--;
    }
    head=pr;   pr=pr->prev;   head->prev=NULL;   pr->next=NULL;
    cout<<"\nThe two lists are: "<<endl;
    print();
    cout<<"\nThe splitted list is: ";
    pr=head;
    while(pr)
    {
        cout<<"-->[ "<<pr->info<<" ]";
        pr=pr->next;
    }
}

