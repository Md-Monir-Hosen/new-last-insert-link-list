#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
void lastinsert(int);
struct node
{
    int data;
    struct node*next;
};
struct node *head;
void lastinsert(int item)
{
    struct node *newnode= new node;
    struct node *temp;
    if(newnode==NULL)
    {
        cout<<"\n Overflow";
    }
    else
    {
        newnode->data=item;
        if(head==NULL)
        {
           newnode->next=NULL;
           head=newnode;
           cout<<"\n node inserted";
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
        cout<<"\n node inserted";
        }
    }
}
int main()
{
    int choice,item;
    do{
        cout<<"\n enter your item ";
        cin>> item;
        lastinsert(item);
        cout<<"\n press 0 insert more ";
        cin>>choice;
    }
    while(choice==0);
    getch();
    return 0;
}

