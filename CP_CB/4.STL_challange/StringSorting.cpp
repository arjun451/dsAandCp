#include<iostream>
#include<vector>
using namespace std;
bool comp(string s1,string s2)
{
    if(s1.length()<=s2.length()&&s2.substr(0,s1.length())==s1)
     return false;
    else if(s2.length()<=s1.length()&&s1.substr(0,s2.length())==s2)
     return false;
     else
     return s1>s2;
}
int main()
{
  int n;
  cin>>n;
  vector<string> v;
  for(int i=0;i<n;i++)
  {
      string s;
      cin>>s;
      v.push_back(s);
  }
  sort(v.begin(),v.end(),comp());






    return 0;
}