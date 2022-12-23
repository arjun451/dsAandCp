#include<iostream>
using namespace std;
int countZero(int n)
{
	if(n==0)
		return 0;
      int n1 =n/10;
	int result =  countZero(n1);
         if(n%10==0&&n>0)
	 result++;
	 return result;
}
int main()
{

	int n;
	cin>>n;
	cout<<"Numer of zere :"<<countZero(n);
}
