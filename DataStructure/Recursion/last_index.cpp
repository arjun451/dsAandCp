#include<iostream>
using namespace std;
int lastIndex(int ar[],int size,int x)
{
	if(size==-1)
		return -1;
	if(ar[size]==x)
		return size;
	int result = lastIndex(ar,size-1,x);
	return result;
}

int lastIndex2(int ar[],int size,int x)
{
        if(size==-1)
                return -1;
       
        int result = lastIndex(ar+1,size-1,x);
	if(result==-1)
	{

		if(ar[0]==x)
		  result =0;
	}
	else
		result++;

        return result;
}
int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int *ar = new int[n];
	cout<<"Enter the element of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
        cout<<"Enter the element to find index: ";
	int x;
	cin>>x;
	cout<<lastIndex(ar,n-1,x)<<endl;
	cout<<lastIndex2(ar,n-1,x)<<endl;

         
}
