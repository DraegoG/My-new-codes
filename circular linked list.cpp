#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node* next=NULL;
    node()
    {
        cout<<"\nEnter the value to store: ";
        cin>>data;
    }
}*HEAD=NULL,*ptr=NULL,*START=NULL;
    static int i=0,c=0;
    int a,opt,create(),disp(int),display_rev(),arr[30],l_size(),search_item(),insert_newnode(),update(),remove_item(),concat(),split();

int main()
{
    cout<<"<-------  Creating a circular linked list  -------->\n";
    while(1)
    {
        cout<<"\nEnter the operation you want to perform:\n1.Create a linked list\n2.Display the list\n3.Display the list in reverse\n4.Size of the list\n5.Search an item\n6.Insert a new node\n7.Remove an item\n8.Create another linked list and concatenate both\n9.Split the linked list into two lists\n10.Update a node\n11.Exit\n ";
        cout<<"\nYour choice: ";
        cin>>opt;
        switch(opt)
        {
            case 1: create(); break;
            case 2: disp(i); break;
            case 3: display_rev(); break;
            case 4: l_size(); break;
            case 5: search_item(); break;
            case 6: insert_newnode(); break;
            case 7: remove_item(); break;
            case 8: concat(); break;
            case 9: split(); break;
            case 10: update(); break;;
            case 11: exit(10);
                default: cout<<"Incorrect option, please try again/n";
        }
    }
}
//Creating node
int create()
{
    char optn='y';
    while(optn=='y')
    {
    node*p=new node;
    if(i==0){ HEAD=p;}
 else
 {
 ptr->next=p;
 }
 ptr=p;
 i+=1;
 p->next=HEAD;  //Since in circular link list the last node will point to the very first node
cout<<"Do you want to continue? y/n: ";
cin>>optn;
}
}

 //Displaying the link list
 int disp(int x)
 {
     int a=x;
     node*pr=HEAD;
     cout<<endl;
     while(a)
     {
         cout<<"-->[ "<<pr->data<<" ]";
         a--;
         pr=pr->next;
     }
     return 1;
 }
 //Displaying the linked list in reverse;
int display_rev()
{
    int a=i,j=0;
    node*pr=HEAD;
    cout<<endl;
    while(a)
    {
        arr[j]=pr->data;
        j++;
        a--;
        pr=pr->next;
    }
    a=j;
    j--;
     cout<<"Printing link list in reverse: ";
    while(a)
    {
       cout<<"["<<arr[j]<<"]<--";
        j--;
        a--;
    }
}
//Size of linked list
int l_size()
{
    cout<<"The size of linked list is: "<<i<<endl;
}
//Searching an item
int search_item()
{
    int item,count=0,flag=0,a=i;
    node*pr=HEAD;
    cout<<"\nEnter the item you want to search for: ";
    cin>>item;
    while(a&&flag==0)
    {
        if(pr->data==item) flag=1;
        pr=pr->next;
    count++;
    a--;
    }
    if(flag==1) cout<<"The item was found at: "<<count<<endl;
    else cout<<"Element was not found "<<endl;
}
//Updating an item
int insert_newnode()
{
    int pos,a=i;
    disp(i);
    cout<<"\nEnter the position you want to insert the new node at: ";
    cin>>pos;
    node*p=new node;
    if(pos==1)
    {
        node*pr=HEAD;
        int a=i-1;
        while(a)
        {
            pr=pr->next;
            a--;
        }
        p->next=HEAD;
        HEAD=p;
        pr->next=HEAD;
    }
    else if(pos==i)
    {
        node*pr=HEAD,*ptr=NULL;
        while(a)
        {
            ptr=pr;
            pr=pr->next;
            a--;
        }
        ptr->next=p;
        p->next=HEAD;
    }
    else
    {
        a=pos-1;
        node*pr=HEAD,*ptr=NULL;
        while(a)
        {
            ptr=pr;
            pr=pr->next;
            a--;
        }
        ptr->next=p;
        p->next=pr;
    }
    i++;
    disp(i);
}
//Remove an element
int remove_item()
{
    node*pr=HEAD;
    node*ptr=NULL;
    int item,a,flag=0,b;
    disp(i);
    cout<<"\nEnter the position you want to delete: ";
    cin>>item;
    if(item==1)  //Deleting first node
    {
        a=i-1;
        HEAD=HEAD->next;
        while(a)
        {
            pr=pr->next;
            a--;
        }
        pr->next=HEAD;
    }
    else if(item==i)  //Deleting last node
    {
        a=i-2;
        while(a)
        {
            pr=pr->next;
            a--;
        }
        pr->next=HEAD;
    }
    else         //Deleting in between
    {
        b=item-1;
        while(b)
        {
            b--;
            ptr=pr;
            pr=pr->next;
        }
    ptr->next=pr->next;
    }
    i--;
    disp(i);
}
//Combining or concatinating two linked lists
int concat()
{
    node*pr=HEAD,*ptr=NULL;
    int a=i-1;//b=c;
    char res='y';
    cout<<"\nCreating a new linked list"<<endl;
while(res=='y')
{
    node*p=new node;
    if(c==0){ START=p;}
    else
    {
        ptr->next=p;
    }
 ptr=p;
 c+=1;
 p->next=START;  //Since in circular link list the last node will point to the very first node
 cout<<"Do you want to continue? y/n :";
 cin>>res;
}
ptr=NULL;
while(a)
{
    a--;
    pr=pr->next;
}
pr->next=START;
int b=c-1;
ptr=START;
while(b)
{
ptr=ptr->next;
b--;
}
ptr->next=HEAD;
i+=c;
disp(i);
}
//Splitting linked list
int split()
{
    node*pr=HEAD,*ptr=NULL,*temp=HEAD;
    int q=i-1,r;
    disp(i);
  cout<<"\nEnter the position you want to split from: ";
  cin>>r;
  if(r==1){cout<<"Invalid value"; }
  else{
  while(q)    //Finding the last node
  {
      cout<<"first"<<endl;
      temp=temp->next;
      q--;
  }
  int s=r-1;
  while(s)     //finding the end of the node to be splitted
  {
      s--;
      cout<<"second"<<endl;
      ptr=pr;
      pr=pr->next;
  }
     ptr->next=HEAD;
     START=pr;
     temp->next=START;
     c=i-r+1;
     i=r-1;
     disp(i);
     cout<<"\nAnd the second list is: "<<endl;

     int a=c;
     node*pr=START;
     cout<<endl;
     while(a)
     {
         cout<<"-->[ "<<pr->data<<" ]";
         a--;
         pr=pr->next;
     }

  }
}
//Update an element
int update()
{
    node*ptr=HEAD;
    int a,b;
    cout<<"\nEnter the no. of node: ";
    cin>>a;
    cout<<"\nEnter the new value: ";
    cin>>b;
    a--;
    while(a)
    {
        ptr=ptr->next;
        a--;
    }
    ptr->data=b;
    disp(i);
}
