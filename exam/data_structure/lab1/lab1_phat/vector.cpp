#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void enter(vector<string> &arr, int &n);
void print(vector<string> arr);
int main(){
    vector<string> list;
    int n;
    enter(list, n);
    print(list);
}
void enter(vector<string> &arr, int &n){
    string a[100];
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"Enter animal "<<i+1<<endl;
        fflush(stdin);
        getline(cin, a[i]);
        arr.push_back(a[i]);
    }
}
void print(vector<string> arr){
    vector<string>::iterator it;
    for(it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
}