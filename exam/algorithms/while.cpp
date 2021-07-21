#include <bits/stdc++.h>
using namespace std;
bool win(){
    return true;
}
bool timeLimit(){
    return true;
}
int main(){
    int a[3][3];
    while(true){
        if(win()){
            cout<<"Winner";
            break;
        }
        if(timeLimit()){
            cout<<"game over!";
            break;
        }
    }
    
}