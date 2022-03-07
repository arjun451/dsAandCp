#include<iostream>
using namespace std;
#include<vector>
int main()
{
//Gelecaration of Vector
vector<int>v{1,2,3,4,8};
vector<int>v1(10,5);


// Vector iterator 
// for(auto x:v1)
// {
//   cout<<x<<":";
// }
// cout<<endl;

//Some Function that are used useualy
v1.push_back(9);
cout<<v1.size()<<endl;
cout<<v1.capacity()<<endl; 
cout<<v1.max_size()<<endl;
v.pop_back();
v1.clear();
cout<<v.front()<<" "<<v.back()<<endl;;
// To Avoid Doubling we used 
v.reserve(1000);
v.insert(1,3);











for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
for(int i=0;i<v1.size();i++)
{

    cout<<v1[i]<<" ";

}

cout<<endl;



    return 0;
}