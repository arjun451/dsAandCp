#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int i=0,j=n-1;
    while(i<j&&k>0)
    {
        if(a[i]>a[j])
            i++;
        else if(a[i]<a[j])
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;
            k--;
        }
        else
        {
            i++;
        }
    }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }



    return 0;
}