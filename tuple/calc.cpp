#include<bits/stdc++.h>
using namespace std;
tuple<int,int,double,float> calc(int a, int b){
    return std::make_tuple(a+b,a-b,a*b, (float)a/b);
}
int main(){
    int a = 3,b=4;
    tuple<int,int,double,float> result = calc(a,b);
    cout<<a<<"+"<<b<<std::get<0>(result)<<" ";
    cout<<a<<"-"<<b<<std::get<1>(result)<<" ";
    cout<<a<<"*"<<b<<std::get<2>(result)<<" ";
    cout<<a<<"/"<<b<<std::get<3>(result)<<" ";    
    return 0;
}