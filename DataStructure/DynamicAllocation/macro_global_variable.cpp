#include<iostream>
using namespace std;
#define Pi 3.14
int a; //bad partice avoid never used global variable insted of used reference variable and pointer
void f1()
{
  a++;
  cout<<a<<endl;
}
void f2()
{
  f1();
 a++;
  cout<<a<<endl;
}
int main()
{
  cout<<"Enter the radious of circule:";
  int r;
  cin>>r;
  cout<<"Are of the circule: "<<Pi*r*r<<endl;
  a=10;
  cout<<a<<endl;
  f2();
    return 0;
}