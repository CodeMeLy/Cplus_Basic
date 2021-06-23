#include<iostream>
using namespace std;
void enter(int &a, int &b);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float division(int a, int b);
int main(){
    int a, b;
    enter(a, b);
    cout<<"add: "<<add(a,b)<<endl;
    cout<<"sub: "<<sub(a,b)<<endl;
    cout<<"mul: "<<mul(a,b)<<endl;
    cout<<"div: "<<division(a,b)<<endl;
}
void enter(int &a, int &b){
    cout<<"Enter a and b: ";
    cin>>a>>b;
}
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
float division(int a, int b){
    return (float)a/b;
}