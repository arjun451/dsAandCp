#include<iostream>
using namespace std;
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
    int f;
    cout<<"Enter the Frequency of the Number:"<<endl;
    cin>>f;

int b[32];
for(int i=0;i<32;i++)
{
    b[i]=0;
}
for(int i=0;i<n;i++)
{
    int c=0;
    while(a[i]>0)
    {
        if(1&a[i])
        b[c]++;
        a[i]=a[i]>>1;
        c++;
    }
}
int s=0,p=1;
for(int i=0;i<32;i++)
{
    s+=p*(b[i]%f);
    p=p*2;
}

cout<<s<<endl;


    return 0;
}