#include<iostream>
using namespace std;
int main()
{
//const int variable 
       const int i=10;
	cout<<i<<endl;
  
	int k=20;
// const reference variable of int variable
       const int& k1 = k;
	k++;
	cout<<k1<<endl;
//const reference varable of const int variable
        int const &k2 = i;
	cout<<k2<<endl;
// refrence variable of const int not allow 
	return 0;
}

