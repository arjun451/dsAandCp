#include<iostream>
using namespace std;
#include"TreeNodeClass.h"
int main()
{
    cout<<"Enter the root:"<<endl;
    int v;
    cin>>v;

    treeNode<int>* root = new treeNode<int>(v);
    root->takeinpute();


    return 0;
}