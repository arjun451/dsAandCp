#include<iostream>
using namespace std;
void printSubset(string s,int n)
{
   int j=0;
   while(n>0)
   {
       int last_bit = 1&n;
       if(last_bit)
       cout<<s[j];
       j++;
       n=n>>1;
   }
}
int main()
{
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;
    int mask = 1<<s.length();
    for(int i=0;i<mask;i++)
    {
       printSubset(s,i);
       cout<<endl;
    }
    return 0;
}