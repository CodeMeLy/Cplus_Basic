#include <bits/stdc++.h>
using namespace std;
int main(){
    // string su dung nhu 1 so
    // s.size();
    string myString = "Hello world";
    cout<<"size: "<<myString.size();
    cout<<myString.c_str();// char*
    cout<<*(myString.begin()+3);

    return 0;
}