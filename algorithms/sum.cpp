#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,s=0;
        cin>>n;
        while(n--){
            cin>>a;
            s+=a;
        }
        cout<<s;
    }
    return 0;
}