#include<iostream>
using namespace std;
#include "fraction.cpp"
int main()
{
   
      Fraction f1(3,4),f2(7,2);
      f1.display();
      f2.display();
      f1.add(f2);
      f1.display();
      f1.multiply(f2);
      f1.display();


}
