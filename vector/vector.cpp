#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int s = 0;
        int a;
        string str;
        while(cin>>a){
            v.push_back(a);
        }
        cin.clear();
        cin.ignore();
        for(auto i:v){
            s = (i%2==0)?s+i:s;
        }
        cout<<s<<endl;
    }
    return 0;
}