#include<bits/stdc++.h>
#define For(i, a, b) for (int i = a; i ^ b; i++)
using namespace std;
int main(){
    array<int,4> data;
    data.fill(0);// cài đặt tất cả đều có giá trị bằng 0
    For(i,0,4){
        cout<<data[i]<<" ";
    }
    cout<<endl; 
    For(i,0,4){
        data[i] = i;
    }
    For(i,0,4){
        cout<<data[i]<<" ";
    }
    return 0;
}