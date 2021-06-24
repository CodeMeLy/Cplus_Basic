// khởi tạo stack
// push() thêm 1 phần tử vào trong stack
// pop() loại bỏ 1 phần tử cuối ra khỏi stack
// top() lấy giá trị của phần tử trên cùng
// empty() kiểm tra phần tử đó có rỗng hay không?
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> disc = stack<string>();
    disc.push("Bài tình ca mùa đông, v.1");
    disc.push("chờ người. v1");
    // xuất
    while(!disc.empty()){
        cout<< disc.top()<<" ";// lấy phần tử trên cùng
        disc.pop();
    }
    return 0;
}