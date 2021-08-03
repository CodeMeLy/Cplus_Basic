#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(){   
    faster()
    int n; cin>>n;
    int start[n], finish[n], temp[n];
    for(int i=1; i<=n ; i++){
        cin>>start[i]>>finish[i];
        temp[i] = false;
    }
    // greedy algorithm
    int i = 1, count = 1;
    temp[i] = true;
    for(int j = 2; j<= n; j++){
        if(finish[i] <= start[j]){
            count++;
            i = j;
            temp[i] = true;
        }
    }
    cout<<count<<endl;
    for(int i=1; i <= n; i++){
        if(temp[i]) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}