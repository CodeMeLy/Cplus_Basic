#include<iostream>
#include<string>
using namespace std;
void print(string output[]);
int main(){
    string list[10]={"c","c_plus","c#","java","python"};
    print(list);
    return 0;
}
void print(string output[]){
    for(int i=0;i<10;i++){
        cout<<output[i]<<" ";
    }
}