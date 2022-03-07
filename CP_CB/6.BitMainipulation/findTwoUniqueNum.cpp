#include<iostream>
using namespace std;
int findsetbit(int n)
{
    int c=0;
    while(n>0)
    {
        if(1&n>0)
         break;
        n=n>>1;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter the Num of Element:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

 int x=0;
 for(int i=0;i<n;i++)
 {
     x=x^a[i];
 }
int setbit = findsetbit(x);
int bitmask = 1<<setbit;
int y=0;
for(int i=0;i<n;i++)
{
    if(bitmask&a[i])
    y=y^a[i];
}
int z=x^y;
cout<<y<<" "<<z;


    return 0;
}