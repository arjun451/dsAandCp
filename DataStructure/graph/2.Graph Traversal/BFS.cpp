#include<iostream>
using namespace std;
#include<bits/stdc++.h>
template <typename T>
class Graph{
     T v;
     map<T,vector<T> >mp;
     public:
     void addEdge(T x,T y)
     {
      mp[x].push_back(y);
      mp[y].push_back(x);
     }
     void printBFS(T sorce)
     {
         queue<T> q;
         map<T,bool>visited;
         q.push(sorce);
         visited[sorce]=true;
         while(!q.empty())
         {
             T node = q.front();
             q.pop();
             for(auto x:mp[node])
             {
                 if(!visited[x])
                 {
                     q.push(x);
                     visited[x]=true;
                 }
             }
                 cout<<node<<" ";
         }
     }
};
int main()
{
Graph <int> g;
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(3,2);
g.addEdge(3,0);
g.addEdge(4,3);
g.printBFS(0);

    return 0;
}