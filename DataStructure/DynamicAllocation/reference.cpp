#include<iostream>
using namespace std;
void increment(int& n)
{
    n++;
}
//both are bad pratice
int& f1(int n)
{
    int a=n;
    return a;
}
int* f2(int n)
{
    int a=n;
    return &a;
}
int main()
{
  int i=10;
  int& j=i;
  int&k = f1(i);
  int* p = f2(i);
  increment(i);
  cout<<i<<endl;
  i++;
  cout<<j<<endl;
   j++;
   cout<<i<<endl;


    return  0;
}