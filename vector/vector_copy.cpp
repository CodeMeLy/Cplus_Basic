#include <algorithm>// sử dụng transform
#include<iostream>
#include<vector> 
#include <iomanip>// làm tròn
#include <iterator>
using namespace std;
int main(){
    std::vector<int> v = {1,2,3,6};
    cout<<std::setprecision(2);
    std::fixed(std::cout);
    // in vector: 1 2 3 6
    std::copy(v.begin(), v.end(), ostream_iterator<float>(std::cout," "));
    cout<<endl;
    return 0;
}