#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    vector<int> list;
    while(T--){
        int n;
        cin>>n;
        int a[100];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int temp = 0;
        for(int i = 0; i < n; i++){
            temp += a[i];
        }
        list.push_back(temp);
    }
    for(auto i : list){
        cout<<i<<" ";
    }
    return 0;
}