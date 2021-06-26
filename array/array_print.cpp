#include<iostream>
#include<iomanip>
using namespace std;
void print(string languages[], int size);
int main(){
    // xuất mảng string
    int size = 5;
    string languages[] = {"C++", "java","C#","PHP","js"};// array initialization
    print(languages,size);
    return 0;
}
void print(string languages[], int size){
 for(int i = 0; i < size;i++){
        cout<<languages[i]<<" ";
    }
}