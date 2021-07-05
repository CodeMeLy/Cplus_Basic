// tìm kiêm tuyến tính
#include<bits/stdc++.h>
using namespace std;
bool find(int a[],int n, const int x);
int main(){
    int t,x;
    cin>>t;
    cin>>x;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(find(a,n,x)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
bool find(int a[], int n,const int x){
    bool flag = false;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            flag = true;
            break;
        }
    }
    return flag;
}