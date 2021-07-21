#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// số nguyên tố
int main(){
    int t;
    cin >> t;// nhập số test
    while(t--){// kiểm tra từng test
        int n;
        cin>>n;
        bool check[n+1];
        for(int i=2; i<=n;i++){// giả định tất cả các số đều là số nguyên tố
            check[i] = true;
        }
        for(int i=2;i<=n;i++){// sàng nguyên tố
            if(check[i]){
                for(int j=2*i;j<=n;j+=i){// loại bỏ đi các bội số của i
                    check[j] = false;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(check[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}