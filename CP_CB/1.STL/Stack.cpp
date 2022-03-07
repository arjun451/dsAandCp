#include<iostream>
using namespace std;
#include<stack>
int main()
{
  //LIFO DataStructure
  stack<int>s;
  for(int i=0;i<5;i++)
  {
      s.push(i+1);
  }
 while(!s.empty())
 {
     cout<<s.top()<<" ";
     s.pop();
 }
    return 0;
}