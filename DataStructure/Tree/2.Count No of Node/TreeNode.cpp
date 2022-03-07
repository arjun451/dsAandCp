#include<iostream>
using namespace std;
#include<vector>
class Tree{
   int data;
   vector < Tree *>child;
   public:
   Tree(int data)
   {
    this->data = data;
   }
   void Take_input_help(Tree *node)
   {
       cout<<"Enter the num of child of:"<<node->data<<endl;
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           int data;
           cin>>data;
           Tree *n= new Tree(data);
           node->child.push_back(n);
           Take_input_help(child[i]);
       }
   }
   void takeInput()
   {
        cout<<"Enter the root of the tree:"<<endl;
        int data;
        cin>>data;
        Tree *node = new Tree(data);

   }
   
};