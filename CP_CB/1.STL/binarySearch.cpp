#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
   int arr[]={1,2,2,2,2,40,40,40,100,101};
   int n= sizeof(arr)/sizeof(int);
   int key;
   cin>>key;
   bool present = binary_search(arr,arr+n,key);
   if(present)
   cout<<key<<"Present"<<endl;
   else
   cout<<key<<" Not Present"<<endl;
   
   //Lower bound and Upper bound
   auto it  = lower_bound(arr,arr+n,key);
   if(it-arr==n)
   cout<<key<<"key is not present"<<endl;
   auto it1 = upper_bound(arr,arr+n,key);
   cout<<key<<" Frequency is "<<it1-it<<endl;








    return 0;
}