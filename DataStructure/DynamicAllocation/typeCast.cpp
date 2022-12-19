#include<iostream>
using namespace std;
int main()
{
     int i = 65;
     char x = i;
     cout<<x<<endl;
    int *p = &i;
    char *pc =(char*) p;
    cout<<p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
     cout<<*(pc+2)<<endl;
      cout<<*(pc+3)<<endl;
    cout<<"***"<<endl;
    
    return 0;
}