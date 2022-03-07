#include<iostream>
using namespace std;
#include"TreeNodeClass.h"
void print(treeNode<int> *root)
{
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
int main()
{

     treeNode<int> *root = new treeNode<int >(1);
     treeNode<int> *n1 = new treeNode<int >(2);
     treeNode<int> *n2 = new treeNode<int >(3);
     root->children.push_back(n1);
     root->children.push_back(n2);
     print(root);

    

    return 0;
}