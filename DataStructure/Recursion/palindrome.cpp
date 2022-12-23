#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindorem(string str,int first,int last)
{
     if(first>=last)
     {
	     return true;
     }
     if(str[first]!=str[last])
     {
	     return false;
     }
     bool result = checkPalindorem(str,first+1,last-1);
     return result ;
}
int main()
{

	string str;
	cin>>str;
	cout<<checkPalindorem(str,0,str.length()-1);
}
