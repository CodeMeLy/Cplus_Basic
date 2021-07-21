// sắp xếp nổi bọt
#include<bits/stdc++.h>
using namespace std;
void sort(int a[], int n);
void print(int a[], int n);
int main(){
    int t,x;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,n);
        print(a,n);
    }
    return 0;
}
// 3 4 3 2 1
//3 3 2 1 4
// 3 2 1| 3 4
// 2 1| 3 3 4
// 1| 2 3 3 4
void sort(int a[], int n){
    // dồn số lớn nhât về cuối
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        print(a,n);
    }
}
void print(int a[], int n){
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}