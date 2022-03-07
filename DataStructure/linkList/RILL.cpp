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
Node *RILL(Node  *h)
{
    Node *A=NULL;
    while(h->next!=NULL)
    {
        Node *p=h;
        h = h->next;
        p->next=NULL;
        if(A==NULL)
        {
            A=p;
        }
        else
        {
            p->next=A;
            A=p;
        }
       
    }
    h->next=A;
    return h;
}
int main()
{
    Node *h=takeInput();
    print(h);
    h= RILL(h);
    print(h);
    return 0;
}