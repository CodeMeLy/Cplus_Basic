#include<iostream>
using namespace std;
int main(){
    int a = -1;
    if(a<0){
        throw std::invalid_argument("a phải lớn hơn hoặc bằng 0!");
    }
    return 0;
}