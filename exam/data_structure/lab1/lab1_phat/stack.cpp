#include <iostream>
#include <stack>
#include <string>
using namespace std;
void enter(stack<string> &arr);
void add(stack<string> &arr);
void remove(stack<string> &arr);
void print(stack<string> arr);
int main(){
    stack<string> list;
    enter(list);
    print(list);
    add(list);
    print(list);
    remove(list);
    print(list);
}
void enter(stack<string> &arr){
    string name;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        cout<<"Enter disc "<<n<<endl;
        fflush(stdin);
        getline(cin, name);
        arr.push(name);
    }
}
void add(stack<string> &arr){
    string name;
    cout<<"Enter disc: ";
    fflush(stdin);
    getline(cin, name);
    arr.push(name);
}
void remove(stack<string> &arr){
    arr.pop();
}
void print(stack<string> arr){
    while(!arr.empty()){
        cout<<arr.top()<<" ";
        arr.pop();
    }
    cout<<endl;
}