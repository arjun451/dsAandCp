#include<vector>
template<typename T>
class Graph{
   int v;
  vector< int > *l;
   public:
   Graph(int v)
   {
       this->v = v;
       l = new vector<int>[v];
   }
   void AddEdge(int x,int y)
   {
      l[x].push_back(y);
      l[y].push_back(x);
   }
  
   void pintGraph()
   {
       for(int i=0;i<v;i++)
       {
           cout<<i<<": ";
           for(int j:l[i])
           {
               cout<<j<<" ";
           }
           cout<<endl;
       }
   }
};