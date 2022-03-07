#include<iostream>
using namespace std;
#include"GraphClass.h"
int main()
{
   Graph<int> g(4);
   g.AddEdge(0,3);
   g.AddEdge(2,3);
   g.AddEdge(0,1);
   g.AddEdge(1,2);
  g.pintGraph();
return 0;
}