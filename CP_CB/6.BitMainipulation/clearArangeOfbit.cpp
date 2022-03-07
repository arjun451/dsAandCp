#include<iostream>
using namespace std;
#include<algorithm>
int clearArangeBit(int n,int i,int j)
{
   int bitMask = ~(-1<<(j-i)+1);
   bitMask = ~(bitMask<<i);
    n=n&bitMask;
    return n;
}
int main()
{
   int n;
   cout<<"Enter the Num:"<<endl;
   cin>>n;
   int q;
   cout<<"Enter the Num of test cases:"<<endl;
   cin>>q;
   while(q--)
   {
       int i,j;
       cout<<"Enter the Starting and ending range:"<<endl;
       cin>>i>>j;
       cout<<clearArangeBit(n,min(i,j),max(i,j))<<endl;
   }

    return 0;
}