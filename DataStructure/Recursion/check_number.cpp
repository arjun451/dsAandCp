#include<iostream>
using namespace std;
bool checkNum(int ar[],int size,int x)
{
	if(size==0)
	{
		return false;
	}
	if(ar[0]==x)
	{
		return true;
	}
       bool result = checkNum(ar+1,size-1,x);
       return result;
}

int main()
{
     int n;
     cout<<"Enter th size of the array: ";
     cin>>n;
     int *ar = new int[n];
     cout<<"Enter the array elements:"<<endl;
     for(int i=0;i<n;i++)
     {
	     cin>>ar[i];
     }
     int x;
     cout<<"Enter the number to be search: "<<endl;
     cin>>x;

     cout<<checkNum(ar,n,x)<<endl;
}
