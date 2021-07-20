#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vector;
    int temp;
    // nhap vector
    while(cin>>temp){
        vector.push_back(temp);
        cin.ignore();
        cin.clear();
    }
    // xuat vector
    cout<<"Elements: ";
    for(auto element:vector){
        cout<<" " <<element;
    }
    cout<<vector.at(4);// at index
    return 0;
}