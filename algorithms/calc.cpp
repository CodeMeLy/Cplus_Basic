#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"a,b: ";
    cin>>a>>b;
    cout<<setprecision(2)<<fixed;// làm tròn 2 chữ số
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
    cout<<a<<"/"<<b<<"="<<(float)a/b<<endl;
    return 0;
}