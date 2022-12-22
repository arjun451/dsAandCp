#include<iostream>
using namespace std;
int sum(int ar[],int size)
{
   if(size==0)
   {
     return 0;
   }

	int result = ar[0]+sum(ar+1,size-1);
	return result;

}
int main()
{
    cout<<"Enter the value of n :";
    int n;
    cin>>n;
    int *ar = new int[n];
    cout<<"Enter the array element: "<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>ar[i];
    }
    cout<<sum(ar,n)<<endl;

}
