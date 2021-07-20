#include <bits/stdc++.h>
using namespace std;
template<typename Incrementable, typename OutputIterator>
void generate_sequence(Incrementable from, Incrementable to, OutputIterator output){
    for(Incrementable i = from; i<to;i++){
        *output = i;
         output++;
    }
}
int main(){
    vector<int> digits;
    generate_sequence(0,10,back_inserter(digits));// back inserted: chèn sau vector
    for(auto i:digits){
        cout<<i<<" ";
    }
    return 0;
}