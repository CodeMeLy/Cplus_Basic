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
void sort(int a[], int n){
   int key;
   int j;
   for(int i=1;i<n;i++){
       key = a[i];// quân bài
       j = i - 1;// chèn key vào vị tri trước mình đang xét
       while(j>=0&&a[j]>key){
           a[j+1] = a[j];// dồn sang phải
           j--;
       }
       a[j+1] = key;// chèn key vào vị trí phù hợp
       cout<<"key:"<<key<<endl;
       print(a,n);
   }
}
void print(int a[], int n){
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}