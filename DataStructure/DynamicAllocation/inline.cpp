#include<iostream>
using namespace std;

inline int max(int a,int b)//good pratice alway used inline function   
{
	return (a>b)?a:b; 
}
int main()
{
      int a,b;
      cin>>a>>b;
      cout<<"Max of "<<a<<","<<b<<" is :"<<max(a,b)<<endl;

	return 0;
}

