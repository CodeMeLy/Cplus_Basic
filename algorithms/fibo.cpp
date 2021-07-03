#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// số nguyên tố
int main(){
    int t;
    cin >> t;// nhập số test
    while(t--){// kiểm tra từng test
        int n,a;
        int sum = 1;// tổng dãy fibo thực
        cin>>n;
        int pre = 0;
        int count = 0;
        int check = true;
        while(n--){
           cin>>a;
           if((count==0||count==1)&&a!=1){// lần đầu: 1 1
               check = false;
           }
           if(check){
               if(a!=sum){
                   check = false;
               }
               else{
                   sum = pre +a;
               }
           }
           pre = a;
           count++;
        }
        cout<<check<<" ";
    }
    return 0;
}