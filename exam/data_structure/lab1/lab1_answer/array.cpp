// a.	In các ngôn ngữ lập trình
// b.	Thêm 1 ngôn ngữ lập trình vào danh sách
// c.	Xóa 1 ngôn ngữ lập trình ra khỏi danh sách
// d.	Sửa tên ngôn ngữ lập trình “c#” thành “c-sharp”
// e.	Tìm kiếm ngôn ngữ lập trình có tên “java”
#include<iostream>
using namespace std;
void add(string languages[], int &amount,const string added);
void remove(string languages[], int amount,const string deleted);
bool isExist(string languages[], int amount,const string checked);
void change(string languages[],int amount,const string from,const string to);
void print(string languages[], int amount);
int main(){
    const int MAX_LANGUAGES = 100;
    int languagesAmount = 5;
    string languages[MAX_LANGUAGES] = {"C","C++","java","c#","python"};
    string language;
    // thêm 1 ngôn ngữ lập trình vào danh sách
    cout<<endl<<"language:";
    cin>>language;
    add(languages,languagesAmount,language);
    print(languages,languagesAmount);
    // xóa 1 ngôn ngữ lập trình ra khỏi danh sách
    cout<<endl<<"language:";
    cin>>language;
    remove(languages,languagesAmount,language);
    print(languages,languagesAmount);
    return 0;
}
void add(string languages[], int &amount, string added){
    // kiểm tra xem ngôn ngữ đó có tồn tại hay chưa, nếu chưa tồn tại thì sẽ xóa
    if(!isExist(languages,amount,added)){
        languages[amount] = added;
        amount++;     
    } 
}
void remove(string languages[], int amount,const string deleted){
    if(isExist(languages,amount,deleted)){
        for(int index = 0;index< amount;index++){
            if(deleted == languages[index]){
                for(int next = index ; next < amount;next++){// dồn sang trái
                    languages[index] = languages[index+1];
                }
                amount--;
                break;
            }
        }     
    } 
}
void print(string languages[], int amount){
    // in các ngôn ngữ lập trình
    for(auto index = 0; index < amount;index++){
        cout<<languages[index]<<" ";
    }
}
bool isExist(string languages[], int amount,string checked){
    bool is_exists = false;
    for(int index = 0; index < amount;index++){
        if(languages[index]==checked){
            is_exists = true;
            break;
        }
    }
    return is_exists;
}
void change(string languages[],int amount,const string from,const string to){
    
}