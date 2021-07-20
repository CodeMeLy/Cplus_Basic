#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> map;
    map.insert(std::pair<string,int>("id01",1));
    map.insert(std::pair<string,int>("id02",2));
    map.insert(std::pair<string,int>("id03",3));
    map.insert(std::pair<string,int>("id04",4));

    // duỵet
    std::map<string,int>::iterator it = map.begin();
    for(it;it!=map.end();it++){
        cout<<it->first<< ":"<<it->second<<endl;
    }
    return 0;
}