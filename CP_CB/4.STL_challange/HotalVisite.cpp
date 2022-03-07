#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    int q,k;
    cin>>q>>k;
    int c=0;
    while(q--)
    {
      int x;
      cin>>x;
      if(x==1)
      {
        int a,b;
        cin>>a>>b;
        int d=a*a+b*b;
        if(c<k)
        {
          pq.push(d);
          c++;
        }
        else
        {
          if(d<pq.top())
          {
              pq.pop();
              pq.push(d);
          }
        }

      }
      else if(x==2)
      {
        cout<<pq.top()<<endl;
      }
      else
      cout<<"Pleased entire the correct inpute"<<endl;

    }



    return 0;
}