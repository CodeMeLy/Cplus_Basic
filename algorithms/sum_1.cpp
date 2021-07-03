#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0;
        cin>>n;
        int a[n];
        int temp=n;
        while(n--){// nhập từng phần tử
            cin>>a[temp-n];
            s+=a[temp-n];
        }
        cout<<s;
    }
    return 0;
}