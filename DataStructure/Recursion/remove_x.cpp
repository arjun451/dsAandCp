#include<iostream>
using namespace std;
#include<string.h>
string removeX(string s,int size)
{
     if(size==-1)
	     return "";
     string result = removeX(s,size-1);
     if(s[size]!='x')
	     result+=s[size];
     return result;


}
int main()
{
       string str;
       cin>>str;
       cout<<removeX(str,str.length()-1);
   
  

}
