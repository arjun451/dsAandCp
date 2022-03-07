#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Lift shift
int Numsetbit(int n)
{
    int c=0;
    while(n>0)
    {
        if(n&1>0)
        c++;
        n=n>>1;
    }
    return c;
}
// Using And 
int fastNumsetbit(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n=n&(n-1);
    }
    return c;
}
int main()
{

int q;
cout<<"Enter the Num of test cases:"<<endl;
cin>>q;
while(q--)
{
    int n;
    cout<<"Enter the Num :"<<endl;
      cin>>n;
    cout<<"Set bit in "<<n<<" is:"<<fastNumsetbit(n)<<endl;
}


    return 0;

}