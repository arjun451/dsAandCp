#include<iostream>
using namespace std;
int digitSum(int n)
{
	if(n==0)
		return 0;
	int n1= n/10;
	int result = digitSum(n1);
	return result+n%10;
}
int main()
{
	int n;
	cin>>n;
	cout<<digitSum(n);
}
