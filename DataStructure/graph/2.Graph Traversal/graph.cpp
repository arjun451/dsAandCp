#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
class graph{
     int n;
     vector<pair<int,int> > *V;
     public:
     graph(int v)
     {
         n=v;
         V= new vector< pair<int,int> > [n];
     }
     void addEdge(int u,int v,int cost)
     {
         V[u].push_back(make_pair(v,cost));
         V[v].push_back(make_pair(u,cost));
     }
     int dfs_helper(int node,bool *visited,int *count,int &ans)
     {
         visited[node]=true;
         count[node]=1;
         for(auto nbr_pair:V[node])
         {
             int nbr=nbr_pair.first;
             int wt = nbr_pair.second;
             if(!visited[nbr])
             {
                 count[node]+=dfs_helper(nbr,visited,count,ans);
                 int nx= count[nbr];
                 int ny= n-nx;
                 ans+=2*min(nx,ny)*wt;
             }

         }
         return count[node];
     }
     int dfs()
     {
         bool *visited = new bool[n];
         int *count = new int[n];
         for(int i=0;i<n;i++)
         {
             visited[i]=false;
             count[i]=0;
         }
         int ans =0;
         dfs_helper(0,visited,count,ans);
         return ans;
     }
};
int main()
{
    int n;
    cin>>n;
    graph *g = new graph(n);
   for(int i=0;i<n-1;i++)
   {
       int x,y,z;
       cin>>x>>y>>z;
       g->addEdge(x,y,z);
   }
 cout<<g->dfs();

    return 0;
}