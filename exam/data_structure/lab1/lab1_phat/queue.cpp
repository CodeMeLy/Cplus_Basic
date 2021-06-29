#include <iostream>
#include <string>
#include <queue>
using namespace std;
void enter(queue<string> &arr);
void add(queue<string> &arr);
void remove(queue<string> &arr);
void print(queue<string> arr);
int main(){
    queue<string> list;
    enter(list);
    print(list);
    add(list);
    print(list);
    remove(list);
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
void add(queue<string> &arr){
    string name;
    cout<<"Enter info: ";
    fflush(stdin);
    getline(cin, name);
    arr.push(name);
}
void remove(queue<string> &arr){
    arr.pop();
}
void print(queue<string> arr){
    while(!arr.empty()){
        cout<<arr.front()<<" ";
        arr.pop();
    }
    cout<<endl;
}