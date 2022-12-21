#include<iostream>
using namespace std;
int numOfDigit(int n)
{
       if(n==0)
       {
	       return 0;
       }
       n=n/10;
       int result = numOfDigit(n);
       return result+1;
}
int main()
{
  cout<<"Enter the numer :";
  int n;
  cin>>n;
  cout<<numOfDigit(n);
}
