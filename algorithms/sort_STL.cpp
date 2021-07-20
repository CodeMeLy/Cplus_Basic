#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,2,4,5,5,4};
    sort(arr+0,arr+4);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}