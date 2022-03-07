#include<iostream>
using namespace std;
#include<queue>
int main()
{
   //FIFO Data Structure
   //Declaration of list
//    queue<int> q;
//    for(int i=0;i<10;i++)
//    {
    //    q.push(i*i);
//    }
//    while(!q.empty())
//    {
    //    cout<<q.front()<<" ";
    //    q.pop();
//    }


  //Priority Queue
  priority_queue<int>pq;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      pq.push(a);
  }
 while(!pq.empty())
 {
     cout<<pq.top()<<" ";
     pq.pop();
 }
















    return 0;
}