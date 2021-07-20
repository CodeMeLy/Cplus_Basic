#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,sum;
    cin>>t;
    while(t--){// các test
        sum = 0;
        cin>>n;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}