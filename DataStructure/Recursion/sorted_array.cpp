#include<iostream>
using namespace std;
bool is_sorted(int ar[],int size)
{
   if(size==0||size==1)
	   return true;
   if(ar[0]>ar[1])
   {
	   return false;
   }
   bool result = is_sorted(ar+1,size-1);
   return result;
}
bool is_sorted2(int ar[],int size)
{
   if(size==0||size==1)
           return true;
  
   bool result = is_sorted(ar+1,size-1);
   if(!result)
	   return result;
   else
   {
	   if(ar[0]>ar[1])
	   {
		   return false;
	   }
	   else
	   {
               return true;
	   }
  }
}

int main()
{
   cout<<"Enter the num of arrary Element:";
   int n;
   cin>>n;
   int *ar = new int[n];
   for(int i=0;i<n;i++)
   {
     cin>>ar[i];
   }

   cout<<is_sorted(ar,n)<<endl;
   cout<<is_sorted2(ar,n)<<endl;


}

