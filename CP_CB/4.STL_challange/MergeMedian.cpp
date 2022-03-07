#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int c[n+n],i=0,j=0,x=0;
    while(i<n&&j<n)
    {
     if(a[i]<=b[j])
     {
         c[x]=a[i];i++;x++;
     }
     else
     {
      c[x]=b[j];j++;x++;
     }
    }
   cout<<c[n]<<endl;


    return 0;
}