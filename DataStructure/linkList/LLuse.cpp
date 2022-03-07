#include<iostream>
#include"linkListClass.h"
using namespace std;
 
//       public:
//       int data;
//     int *next;
//       Node(int  data)
//       {
//           this->data = data;
//           next =NULL;
//       }
// };
Node *takeInput()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *Temp = head;
    while(data!=-1)
    {
       
        Node *newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
            Temp = head;
        }
        else
        {
         Temp->next= newNode;
         Temp=Temp->next;
        }
        cin>>data;
    }
    return head;
}
// Insert a Node At a specifice position
Node *InsertAnode(Node *head,int position,int data)
{
        Node *newNode = new Node(data);

    if(position==0)
    {
        newNode->next=head;
        return newNode;
    }
int c=0;
Node *Temp = head;
while(c!=position-1&&head->next!=NULL)
{
    head = head->next;
    c++;
}
if(head->next!=NULL)
{
    newNode->next = head->next;
    head->next=newNode;
}
return Temp;
}
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
// Delete a Node
Node *delteNode(Node *head,int position)
{
    if(position==0)
    {
        Node *T = head;
        head = head->next;
        delete(T);
        return head;
    }
    else
    {
        int c=0;
        Node *T=head;
        while(c!=position-1&&head->next!=NULL)
        {
            head= head->next;
            c++;
        }
        if(head->next->next==NULL)
        {
            Node * X=head->next;
            delete(X);
            head->next=NULL;
        }
        else
        {
            Node *t=head->next;
            head = head->next->next;
            delete(t);
        }

        
        return T;
    }
}
int main()
{
 Node *head = takeInput();   
print(head);
cout<<endl;
int x,data;
cout<<"Enter the position at the  u want to add node:"<<endl;
cin>>x;
cout<<"Enter the Data:"<<endl;
cin>>data;
cout<<endl;
head = InsertAnode(head,x,data);
print(head);
cout<<endl;
cout<<"Enter the position of element which u want to delete:"<<endl;
int d;
cin>>d;
head = delteNode(head,d);
cout<<endl;
print(head);
return 0;
}