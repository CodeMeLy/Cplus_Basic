#include<iostream>
using namespace std;
enum Confirmed {YES,NO};
int main(){
    char confirm = YES; 
    switch(confirm){
        case YES:
            cout<<"yes";
            break;
        case NO:
            cout<<"no";
        default:
            cout<<"invalid response!";
    }
    return 0;
}