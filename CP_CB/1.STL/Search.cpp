#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int arr[]={1,5,23,78,51,6,8};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    auto it = find(arr,arr+n,key);
   
     //cout<<it<<endl; 
     int i = it-arr;
     if(i==n)
     cout<<key <<" Not found in the array"<<endl;
     else
     cout<<key<<" found at index "<<i<<endl;

    return 0;

}