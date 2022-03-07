#include<iostream>
using namespace std;
void DetoBi(int n)
{
    int lastbit,num=0,p=1;;
    while(n>0)
    {
        lastbit =1&n;
      num=num+lastbit*p;
      p=p*10;
        n=n>>1;
    }

    cout<<num<<endl;
}
int main()
{
    int q;
    cout<<"Enter the num of test cases:"<<endl;
    cin>>q;
    while(q--)
    {
        int n;
        cout<<"Enter the Num:"<<endl;
        cin>>n;
        DetoBi(n);
    }
    return 0;
}