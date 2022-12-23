#include<iostream>

using namespace std;
#include<string.h>
int stringToInt(string str ,int size)
{


	if(size==-1)
	{
		return 0;
	}

	int result = stringToInt(str,size-1);
	result = result*10+str[size]-'0';
	return result;
}
		
int main()
{


	string str;
	cin>>str;
	cout<<stringToInt(str,str.length()-1);
}
