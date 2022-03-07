#include<unordered_map>
#include<iostream>
using namespace std;
#include<cstring>
#include<vector>
class Graph{
public:
unordered_map<string ,vector<pair<string,int> >>p;

void AddEdge(string x,string y,bool bidir,int w)
{
    p[x].push_back(make_pair(y,w));
    if(bidir)
    {
        p[y].push_back(make_pair(x,w));
    }
}
void print()
{
    for(auto a :p)
    {
        string s1=a.first;
       vector<pair<string,int>> y = a.second;
       cout<<s1<<":";
       for(auto b:y)
       {
           cout<<"("<<b.first<<","<<b.second<<")"<<" ";
       }
       cout<<endl;
    }
}
};
int main()
{
    Graph g;
    g.AddEdge("a","b",false,50);
    g.AddEdge("a","c",true,30);
    g.AddEdge("a","d",true,10);
    g.AddEdge("b","c",true,20);
    g.AddEdge("c","d",true,40);
 g.print();
    return 0;
}