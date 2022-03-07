#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>
bool comp(string s1,string s2)
{
    if(s1.length()==s2.length())
    {
        if(s1.compare(s2))
        return 1;
        else
        return 0;
    }
    else
    return 0;
}
int main()
{
   // Declaration of string
   string s("Hello");
   string s1="I am A.K Singh";
   string s2(s1);
   string s3=s+" "+s1;
   string s0;
   if(s0.empty())
   {
       cout<<"String is Empty"<<endl;
   }
s0.append("I love C++.");
//Remove string
s0.clear();

 if(s0.empty())
   {
       cout<<"String is Empty"<<endl;
   }
//Campare Two string 
cout<<s1.compare(s0)<<endl; // It campare the Lexcographical

// Find Sustring 
cout<<s1.find(("Singh"))<<endl;

// Remove a Word from a string 
s1.erase(9,5);

string s5 = "I want to have apple juice";
//Iterate over the string
// for(int i=0;i<s.length();i++)
// {
//     cout<<s[i]<<":";
// }
// cout<<endl;
// for(auto it=s1.begin();it!=s1.end();it++)
// {
//     cout<<*it<<"->";
// }
// cout<<endl;
// for(auto x:s2)
// {
//     cout<<x<<endl;
// }

// How to take inpute an array of string
// int n;
// cin>>n;
// cin.get();
// string s6[100];
// for(int i=0;i<n;i++)
// {
//     getline(cin,s6[i]);
// }
// for(int i=0;i<n;i++)
// {
//     cout<<s6[i]<<endl;
// }

// Sorting 
// string s7[]={"Apple","Banana","Mango","Gavava","Cooconet"};
// for(int i=0;i<5;i++)
// {
    // cout<<s7[i]<<endl;
// }
// sort(s7,s7+5,comp);
// cout<<"After Sorting: "<<endl;
// for(int i=0;i<5;i++)
// {
// cout<<s7[i]<<endl;
// }
// Return Token

// cout<<s0<<endl;
// cout<<s<<endl;
// cout<<s1<<endl;
// cout<<s2<<endl;
//  cout<<s3<<endl;


    return 0;
}