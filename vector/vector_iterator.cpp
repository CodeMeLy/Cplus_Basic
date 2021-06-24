#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers = {1,2,3,4};
    vector<int>::iterator current;
    // push thêm phần tử vào vector
    numbers.push_back(5);
    // duyệt vector
    for(auto number: numbers){
        cout<<number<<" ";
    }
    cout<<endl;
    // cách 2: duyệt theo địa chỉ
    current = numbers.begin();
    while(current!=numbers.end()){
        cout<<*current<<" ";
        current++;
    }
    cout<<endl;
    // tìm khoảng cách 2 distance
    cout<< std::distance(numbers.begin(),current);
    return 0;
}