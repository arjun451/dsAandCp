#include<iostream>
using namespace std;
int main()
{
   int a,n;
    cin>>a>>n;
long long p=a,s=1;
while(n>0)
{
    if(n&1)
    {
        s=s*p;
    }
    n=n>>1;
    p=p*p;
}
cout<<s<<endl;





    return 0;
}