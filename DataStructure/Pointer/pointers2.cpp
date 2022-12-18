#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int * p = &i;
    cout<<sizeof(p)<<endl;
    cout<<*p<<endl;
    
    i++;
    cout<<i<<endl;
    cout<<*p<<endl;
    int *p1;//very very bad never do this 
    cout<<p1<<endl;
    cout<<*p1<<endl;
    return 0;
} // namespace std;

