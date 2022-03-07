#include<iostream>
using namespace std;
void cleariBit(int &n,int i)
{
   int bitmask = -1<<i;
   n= n&bitmask;
   }
int main()
{
 int n;
 cout<<"Enter the Num:"<<endl;
 cin>>n;
 int q;
 cout<<"Enter the Num of Test Cases:"<<endl;
 cin>>q;
 while(q--)
 {
     int i;
     cout<<"Enter the Num of Bit you want to clear:"<<endl;
     cin>>i;
     cleariBit(n,i);
     cout<<n<<endl;
 }

 return 0;
}