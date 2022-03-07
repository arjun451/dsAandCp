#include<iostream>
using namespace std;
#include<list>
int main()
{
    //Decelaration of the list
    list<int>l;
    list<int>l1{1,2,3,4,5,6,7,8};
    l1.push_back(10);
    l.push_back(5);
    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<l1.front()<<endl;
    l1.reverse();
    l1.pop_back();
    for(auto x:l1)
    {
        cout<<x<<" ";
        l.push_back(15);
    }
    cout<<endl;
    for(auto x:l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    l.remove(15);
    for(auto x:l)
    cout<<x<<" ";






    return 0;
}