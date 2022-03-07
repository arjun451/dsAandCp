#include<iostream>
using namespace std;
#include<bits/stdc++.h>
template<typename T>
class G{
    T v;
     map<T,list<T>> M;
     public:
     void addEdge(T x,T y)
     {
         M[x].push_back(y);
     }
       
};