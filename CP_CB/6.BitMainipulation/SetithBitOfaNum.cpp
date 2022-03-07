#include<iostream>
using namespace std;
void setiThBit(int &n,int i)
{
    int bit= 1<<i;
    n=n|bit;
}
int main()
{
 int n;
 cout<<"Enter the Number:"<<endl;
 cin>>n;
 int t;
 cout<<"Enter the Test cases:"<<endl;
 cin>>t;
 while(t--)
 {
     int i;
    cout<<"Enter the position of bit to be set:"<<endl;
    cin>>i;
    setiThBit(n,i);
    cout<<n<<endl;
 }
 return 0;

}