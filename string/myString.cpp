#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    ostringstream ss;//ostream trong dùng chuyên để nhập vào chuỗi
    // nhập 2 chuỗi
    getline(cin,a);
    getline(cin,b);
    // dùng osstringstream để nhập 2 chuỗi
    ss<<a<<b;
    cout<<ss.str();
    cout<<endl;
    // kiểm tra xem b có là chuỗi con của a hay không?
    if(a.find(b)!=string::npos){ 
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    if(a>b){
        cout<<"a>b";
    }
    else{
        cout<<"a<b";
    }
    return 0;
}