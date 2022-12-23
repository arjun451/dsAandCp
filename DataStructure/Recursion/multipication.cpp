#include<iostream>
using namespace std;
int multip(int x ,int y)
{
	if(x==0)
	 return 0;
	int result = y+multip(x-1,y);
	return result;
}

int main()
{
	int x,y;
	cin>>x>>y;
	
	cout<<"multi. :"<<multip(x,y)<<endl;

}
