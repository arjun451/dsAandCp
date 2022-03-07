#include<vector>
template<typename T>
class treeNode{
   T v;
   vector<treeNode<T>*> child;
   public:
    treeNode(T v)
    {
        this->v = v;
    }
    void taleinputeHelp(treeNode<T> *root)
    {
        cout<<"Enter the no of Child"<<root->v<<" :"<<endl;;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            T v;
            cin>>v;
            root->child.push_back(v);
            taleinputeHelp(child[i]);
        }

    }
    treeNode<T>* takeinpute()
    {
        cout<<"Enter the root data:"<<endl;
        T v;
        cin>>v;
        treeNode<int>* root = new treeNode<int>(v);
         taleinputeHelp(root);
         return root;
    }
    void print(treeNode* root)
    
    {unordered_queue<treeNode>p;
    p.push(root)
       for(int i=0;i<root->child.size();i++)
       {

       }
    }
};