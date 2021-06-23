#include<iostream>
using namespace std;
void enter(int &first, int &second);
int add(int first,int second);
int main(){
    int a, b;
    enter(a,b);
    cout<<"sum: "<<add(a,b)<<endl;
    return 0;
}
void enter(int &first,int &second){
    cout<<"enter data:";
    cin>>first>>second;
}
int add(int first,int second){
    return first + second;
}