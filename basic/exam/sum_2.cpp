#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int t,n,sum;
    cin>>t;
    while(t--){// các test
        sum = 0;
        cin>>n;
        for(int i=1;i<=n;i++){
            sum+=pow(i,2);
        }
        cout<<sum<<endl;
    }
    return 0;
}