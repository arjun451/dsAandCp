#include<iostream>
using namespace std;
int firstIndex(int ar[],int size,int x)
{

	if(size==-1)
	{
		return -1;
	}
	int result = firstIndex(ar,size-1,x);
	if(result==-1)
	{
		if(ar[size]==x)
			return size;
		else
			return -1;
	
	}
	else
		return result;
}
int firstIndex2(int ar[],int size,int x)
{

        if(size==-1)
        {
                return -1;
        }
	if(ar[0]==x)
		return 0;
        int result = firstIndex(ar+1 ,size-1,x);
       if(result!=-1)
       {
	       return result+1;
       }
       return result ;
}



int main()
{

	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int *ar = new int[n];
	cout<<"Enter the element of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}

	cout<<"Enter the number to find the index: "<<endl;
	int x;
	cin>>x;
	cout<<firstIndex(ar,n-1,x)<<endl;
	cout<<firstIndex2(ar,n-1,x)<<endl;
	
}
