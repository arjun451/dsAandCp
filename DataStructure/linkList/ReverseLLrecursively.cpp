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
Node *RRLL(Node *h)
{
     Node *B = NULL;
        Node *T;
    if(h->next!=NULL)
    {
        Node *A=RRLL(h->next);
       
        if(B==NULL)
        {
            B=A;
            A->next=NULL;
            T=A;
        }
        else{
            T->next=A;
            A->next=NULL;
            T=T->next;
        }
    }
    else
    return h;
    return B;
}
int main()
{

Node *h = takeInput();
print(h);
h = RRLL(h);
print(h);

return 0;
}