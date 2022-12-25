#include<iostream>
using namespace std;
#include "complex.cpp"
int main()
{

	Complex c1(2,3),c2(-2,-5);
	cout<<"c1-> ";c1.display();
	cout<<"c2-> ";c2.display();
	c1.add(c2);
	cout<<"add-> ";
	c1.display();
	c1.multiply(c2);
	cout<<"multiply-> ";
	c1.display();

}

