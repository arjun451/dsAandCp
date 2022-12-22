#include<iostream>
using namespace std;

int fibonacci(int n)
{
   if(n==0||n==1)
	   return n;
   int result = fibonacci(n-1)+fibonacci(n-2);
   return result;

}
int main()
{

	cout<<"Enter the value of n: ";
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
}
