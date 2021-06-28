#include <iostream>
#include <stack>
#include <string>
using namespace std;
void enter(stack<string> &arr);
void print(stack<string> arr);
int main(){
    stack<string> list;
    enter(list);
    print(list);
}
void enter(stack<string> &arr){
    string name;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--){
        cout<<"Enter music name "<<n<<endl;
        fflush(stdin);
        getline(cin, name);
        arr.push(name);
    }
}
void print(stack<string> arr){
    while(!arr.empty()){
        cout<<arr.top()<<" ";
        arr.pop();
    }
}