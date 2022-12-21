#include<iostream>
using namespace std;
int main()
{
    int i =10;
    int j =20;
    int const *p = &i;
      // (*p)++; //not allowed here path constant
       p = &j;
    int * const p1 = &i;
         (*p1)++;
      // p1 = &j; //not alllowed here pointer is constant

    int const * const p2 = &i;
   // (*p2)++;   //here both constant
  //  p2 = &j;
}
