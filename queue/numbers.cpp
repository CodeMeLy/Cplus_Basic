// push: thêm 1 phâng tử vào queue
// front: vị trí đầu queue
// pop: xóa phần tử đầu ra khỏi queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> numbers = queue<int>();// khởi tạo biến number
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    while(!numbers.empty()){
        cout<<numbers.front()<<" ";
        numbers.pop();
    }
    return 0;
}