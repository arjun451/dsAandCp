#include<iostream>
using namespace std;
#include"linkListClass.h"
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
int midPoint(Node *Head)
{
    Node *T=Head;
    int c=1;
    while(T->next!=NULL)
    {
        c++;
        T=T->next;
    }
  int mid = (c-1)/2;
  while(mid>0)
  {
      Head = Head->next;
      mid--;
  }
  return Head->data;
    
}
int midPOint2(Node *head)
{
    Node *t1=head,*t2=head;
    while(t2->next!=NULL&&t2->next->next!=NULL)
    {
        t2=t2->next->next;
        t1=t1->next;
    }
    return t1->data;
}
int main()
{

 Node *head = takeInput();
 cout<<midPoint(head);
cout<<endl<<midPOint2(head);



    return 0;
}
