#include<iostream>
using namespace std;
#include<bits/stdc++.h>
template <typename T>
class G{
     T v;
     map<T,vector<T> >mp;
     public:
     void addEdge(T x,T y)
     {
         mp[x].push_back(x);
         mp[y].push_back(y);
     }
     void SrcDistance(T src)
     {
         queue<T>q;
         map<T,int> dist;
         q.push(src);
         for(auto fx:mp)
         {
             T node = fx.first;
             dist[node]=INT_MAX;
         }
         dist[src]=0;
         while(!q.empty())
         {
             T node = q.front();
             q.pop();
             for(auto fx:mp[node])
             {
                 if(dist[fx]==INT_MAX)
                 {
                     dist[fx]=dist[node]+1;
                     q.push(fx);
                 }
             }
         }
         for(auto fx:dist)
         {
             cout<<"Node "<<fx.first<<" Distance from SRc is :"<<fx.second<<endl;;
         }
     }
};
int main()
{
    G<int> g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(3,1);
    g.addEdge(3,2);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(4,7);
    g.addEdge(6,5);
    g.addEdge(6,7);
    g.SrcDistance(0);
    return 0;
}