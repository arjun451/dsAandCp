#include<iostream>
using namespace std;
void clearbit(int &n,int i)
{
    int bit = ~(1<<i);
    n=n&bit;
}
int main()
{
int n;
cout<<"Enter the Num:"<<endl;
cin>>n;
int q;
cout<<"Enter the Test cases:"<<endl;
cin>>q;
while(q--)
{
    int i;
    cout<<"Enter the bit to be clear:"<<endl;
    cin>>i;
    clearbit(n,i);
    cout<<n<<endl;

}






    return 0;
}