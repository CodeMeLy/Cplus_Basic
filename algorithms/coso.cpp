#include <iostream>
using namespace std;
bool solution(int a,int m);
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,m;
        int count = 0;
        cin>>a>>b>>m;
        for(int i=a;i<=b;i++){
            if(solution(i,m)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
bool solution(int a, int m){
    bool flag = true;
    char str[1000000];
    int t = 0;
    while(a>0){
        int k = a%m;
        a /= m;
        str[t] = k;
        t++;
    }
    for(int i = 0; i<t/2;i++){
        if(str[i]!=str[t-i-1]){
            flag = false;
            break;
        }
    }
    return flag;
}