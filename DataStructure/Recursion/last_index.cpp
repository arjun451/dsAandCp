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
	cout<<lastIndex(ar,n-1,x);


}
