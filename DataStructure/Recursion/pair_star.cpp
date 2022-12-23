#include<iostream>
using namespace std;
#include<string.h>
string pairStar(string st,int size)
{
     if(size==-1)
	     return "";
     string result = pairStar(st,size-1);
     result+=st[size];
     if(st[size]==st[size+1])
     {
	     result+='*';
     }
     return result;


}
int main()
{

	string str;
	cin>>str;
	cout<<pairStar(str,str.length()-1);
}
