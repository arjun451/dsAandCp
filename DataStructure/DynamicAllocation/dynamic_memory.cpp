#include<iostream>
using namespace std;
int main()
{
  int* p = new int;
  *p = 10;
  cout<<*p<<endl;
  cout<<"Enter the number of Element:";
  int n;
  cin>>n;
  int* ar = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  }
  int mx=-1;
  for(int i=0;i<n;i++)
  {
    if(ar[i]>mx)
    {
        mx=ar[i];
    }
  }
cout<<"Max of the above array element:"<<mx<<endl;
    return 0;
}