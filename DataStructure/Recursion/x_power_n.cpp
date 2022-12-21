#include<iostream>
using namespace std;
int power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
     int result = power(x,n-1);
     return x*result;

}
int main()
{
  cout<<"Enter the number :";
  int x;
  cin>>x;
  cout<<"Enter the power 'n' to be calucated: ";
  int n;
  cin>>n;
  cout<<"x^n: "<<x<<"^"<<n<<"=> "<<power(x,n);

}
