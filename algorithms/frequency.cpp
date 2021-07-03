#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// số nguyên tố
int main(){
    int t,k;
    cin >> t;// nhập số test
    cin>>k;
    while(t--){// kiểm tra từng test
        int n;
        cin>>n;
        int temp = n;
        int count = 0;
        int a[n];
        while(n--){
           cin>>a[temp-n];
           count = (a[temp-n]==k)?count+1:count;
        }
        cout<<count<<endl;
    }
    return 0;
}