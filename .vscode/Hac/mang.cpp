/*Cho một danh sách ngôn ngữ lập trình gồm các giá trị cho trước là tên của các ngôn ngữ lập trình.
a.    In các ngôn ngữ lập trình
b.    Thêm 1 ngôn ngữ lập trình vào danh sách
c.    Xóa 1 ngôn ngữ lập trình ra khỏi danh sách
d.    Sửa tên ngôn ngữ lập trình “c#” thành “c-sharp”
e.    Tìm kiếm ngôn ngữ lập trình có tên “java”*/
#include<iostream>
#include<iomanip>
using namespace std;
void print(string languages[], int size);
void add(string language[], int &size, string val, int pos);
int main(){
    // xuất mảng string
    int size = 5,pos;
    string languages[] = {"C++", "java","C#","PHP","js"},val;// array initialization
    print(languages,size);
    add(languages,size,val,pos);
    print(languages,size);
    return 0;
}
void print(string languages[], int size){
 for(int i = 0; i < size;i++){
        cout<<languages[i]<<" ";
    }
}
void add(string languages[], int &size, string val, int pos){
	cout<<"\nEnter the required language:";
    cin>>val;
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = size-1; i > pos; i--){
        languages[i] = languages[i-1];
    }
    // Chen val tai pos
    languages[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++size;
}