#include <bits/stdc++.h>
#include<utility>
using namespace std;
#define M 100
#define N 100
std::pair<int,int> foo(int a, int b){
    return make_pair(a+b,a-b);
}
std::pair<int,int> findIndex(int a[M][N], int m, int n, int x){// tìm vị trí đầu tiên xuất hiện x
    std::pair<int,int> index = make_pair(-1,-1);
    bool check = true;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            if(a[i][j]==x){
                index = make_pair(i,j);
                check = false;
            }
            if(!check){
                break;
            }
        }
        if(!check){
            break;
        }
    }
    return index;
}
int main(){
    
    int a[M][N] = {{1,2,3},{2,3,4},{3,2,2}};
    int x = 4;
    std::pair<int,int> result = findIndex(a,3,3,x);
    cout<<"a["<<result.first<<"]["<<result.second<<"]"<<endl;
    return 0;
}