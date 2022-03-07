#include<iostream>
using namespace std;
void SetiBit(int &n,int i)
{
    int bitmask = ~(-1<<i);
    n=n|bitmask;
}
int main()
{
    int n;
    cout<<"Enter the Num:"<<endl;
    cin>>n;
    int q;
    cout<<"Enter the Num of Test cases:"<<endl;
    cin>>q;
    while(q--)
    {
        int i;
        cout<<"Enter the Num of bit you want to be set:"<<endl;
        cin>>i;
        SetiBit(n,i);
        cout<<n<<endl;

    }

    return 0;
}