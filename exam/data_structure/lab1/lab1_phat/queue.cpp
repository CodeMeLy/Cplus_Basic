#include <iostream>
#include <string>
#include <queue>
using namespace std;
void enter(queue<string> &arr);
void print(queue<string> arr);
int main(){
    queue<string> list;
    enter(list);
    print(list);
}
void enter(queue<string> &arr){
    string name;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        cout<<"Enter info "<<n<<endl;
        fflush(stdin);
        getline(cin, name);
        arr.push(name);
    }
}
void print(queue<string> arr){
    while(!arr.empty()){
        cout<<arr.front()<<" ";
        arr.pop();
    }
}