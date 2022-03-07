#include<iostream>
using namespace std;
#include"linkListClass.h"
void print(Node *h)
{
    while(h->next!=NULL)
    {
        cout<<h->data<<" ";
        h = h->next;
    }
    cout<<h->data<<endl;
}
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
Node *mergeLL(Node *h1,Node *h2)
{
    Node *h;
    if(h1->data>=h2->data)
    {
        h = h2;
        h2 = h2->next;
    }
    else
    {
        h=h1;
        h1=h1->next;
    }
    Node *T=h;
    while(h1->next!=NULL&&h2->next!=NULL)
    {
       if(h1->data>=h2->data)
       {
           T->next=h2;
           h2=h2->next;
           T = T->next;
       }
       else{
           T->next=h1;
           h1=h1->next;
           T = T->next;
       }
    }
    if(h1==NULL&& h2==NULL)
    {
       if(h1->data<=h2->data)
       {
           T->next=h1;
           h1->next=h2;
       }
       else
       {
            T->next=h2;
           h2->next=h1;
       }
    }
    else if(h1==NULL)
    {
      if(h1->data<=h2->data)
      {
          T->next=h1;
          h1->next=h2;
      }
      else{
          int t=1;
          while(h2->next!=NULL)
          {
              if(h1->data>=h2->data)
              {
                  h2=h2->next;
                  T=T->next;
              }
              else
              {
                  T->next=h1;
                  h1->next=h2;
                  t=-1;
              }
          }
          if(t!=-1)
          {
              T->next = h1;
          }
      }
    }
    else{
          if(h1->data>=h2->data)
      {
          T->next=h2;
          h2->next=h1;
      }
      else{
          int t=1;
          while(h1->next!=NULL)
          {
              if(h1->data<=h2->data)
              {
                  h1=h1->next;
                  T=T->next;
              }
              else
              {
                  T->next=h2;
                  h2->next=h1;
                  t=-1;
              }
          }
          if(t!=-1)
          {
              T->next = h2;
          }
      }

    }
    return h;
}
int main()
{
  cout<<"Enter the first list"<<endl;
  Node *h1 = takeInput();
  cout<<"L1 =:";print(h1);
  cout<<"Enter the Second LList"<<endl;
  Node *h2= takeInput();
  cout<<"L2 =:";print(h2);
  Node *h =mergeLL(h1,h2);
cout<<"L =:";print(h);
  return 0;
}
