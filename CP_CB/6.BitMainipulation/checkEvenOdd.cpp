#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n&1==1)
    cout<<"Number "<<n<<" is odd"<<endl;
    else
    cout<<"Number "<<n<<" is even"<<endl;
    return 0;
    
}