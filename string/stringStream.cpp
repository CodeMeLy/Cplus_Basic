// sstream: thư viện hỗ trợ việc truy xuất dữ liệu tiện hơn
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    ostringstream stream;
    string result;
    stream<<"bạn sinh năm "<<2001;
    result = stream.str();
    cout<<result;
    return 0;
}