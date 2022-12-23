#include<iostream>
using namespace std;
int allIndex(int ar[],int size,int x,int output[])
{

    if(size==-1)
	    return 0;
    int result = allIndex(ar,size-1,x,output);
       if(ar[size]==x)
       {
	       output[result]=size;
	       result++;
       }
       return result;
}
int allIndex2(int ar[],int size,int x,int output[])
{
    if(size==-1)
            return 0;
    int result = allIndex2(ar+1,size-1,x,output);
    for(int i=0;i<result;i++)
    {
	    output[i]+=1;
    }

       if(ar[0]==x)
       {
              if(result>0)
	      {
	      for(int i=result;i>0;i--)
	      {
		      output[i]=output[i-1];
	      }
              output[0]=0;

             }
	      else
	      {
	      output[result]=0;
	      }


               result+=1;
       }
       return result;
}

int main()
{
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
	int *ar = new int[n];
	cout<<"Enter the element of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int x;
	cout<<"Enter the element to see all index :";
	cin>>x;
	int *output = new int[n];
	int *output2 = new int[n];
	int count = allIndex(ar,n-1,x,output);
	int count2 = allIndex2(ar,n-1,x,output2);
        cout<<"count :"<<count<<endl;
   
	for(int i=0;i<count;i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<endl;
   	cout<<"count2 :"<<count2<<endl;
        for(int i=0;i<count2;i++){
		cout<<output2[i]<<" ";
	}
    
}
