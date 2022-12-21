#include<iostream>
using namespace std;
void f(int const *p)
{

}

void g(int const &a)
{
}

int main()
{
   int const i=20;
  // int *p = &i; not allowed
  int const *p = &i;
  cout<<*p<<endl;

  int j = 10;
  int const *p1 = &j;
  j++;
  cout<<*p1<<endl;




   return 0;
}

