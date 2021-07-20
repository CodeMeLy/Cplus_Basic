// sắp xếp chọn
#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b);
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
// (3) 4 3 2 1
// (1) 4 3 2 3
// (1) (2) 3 4 3
// (1) (2) (3) 3 4
// (1) (2) (3) (3) 4
// (1) (2) (3) (3) (4)
void sort(int a[], int n){
    int min_index;
   for(int i=0;i<n-1;i++){
       min_index = i;
       for(int j=i+1;j<n;j++){
           if(a[j]<a[min_index]){
               min_index = j;
           }
       }
       swap(a[i],a[min_index]);
    //    cout<<"min:"<<a[min_index]<<endl;
    //    print(a,n);
   }
}
void print(int a[], int n){
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}