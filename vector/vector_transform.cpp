#include <algorithm>// sử dụng transform
#include<iostream>
#include<vector> 
#include <iomanip>// làm tròn
#include <iterator>// dùng ostream_iterator
using namespace std;
int main(){
    std::vector<int> v = {1,101,300,6};
    cout<<std::setprecision(2);
    std::fixed(std::cout);
    //in ra bình phương của các số
    std::transform(v.begin(), v.end(),ostream_iterator<int>(std::cout," "),[](int val){
        return val * val;
    });
    cout<<endl;
    // kiểm tra các số trong vector có >100 hay không?
    std::transform(v.begin(), v.end(), ostream_iterator<bool>(std::cout," "),[](int val){
        return val > 100;
    });
    return 0;
}