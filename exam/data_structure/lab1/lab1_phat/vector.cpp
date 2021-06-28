#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void enter(vector<string> &arr);
void print(vector<string> arr);
int main(){
    vector<string> list;
    enter(list);
    print(list);
}
void enter(vector<string> &arr){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        string a;
        cout<<"Enter animal "<<n<<endl;
        fflush(stdin);
        getline(cin, a);
        arr.push_back(a);
    }
}
void print(vector<string> arr){
    vector<string>::iterator it;
    for(it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
}