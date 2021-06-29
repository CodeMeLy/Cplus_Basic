/*Cho một danh sách ngôn ngữ lập trình gồm các giá trị cho trước là tên của các ngôn ngữ lập trình.
a.    In các ngôn ngữ lập trình
b.    Thêm 1 ngôn ngữ lập trình vào danh sách
c.    Xóa 1 ngôn ngữ lập trình ra khỏi danh sách
d.    Sửa tên ngôn ngữ lập trình “c#” thành “c-sharp”
e.    Tìm kiếm ngôn ngữ lập trình có tên “java”*/
#include<iostream>
#include <string>

using namespace std;

void print(string languages[], int size);
void add(string language[], int &size, int pos);
void remove(string languages[], int &size, int pos);
void rename(string languages[],int size);
void findJava(string languages[], int size);

int main(){
    int size=5,pos;
    string languages[100] = {"C++", "java","C#","PHP","js"};
    print(languages,size);
    add(languages,size,pos);
    print(languages,size);
    remove(languages,size,pos);
    print(languages,size);
    rename(languages,size);
    print(languages,size);
    findJava(languages,size);
    return 0;
}
void print(string languages[], int size){
 for(int i = 0; i < size;i++){
        cout << languages[i] << " ";
    }
    cout << endl;
}
void add(string languages[], int &size, int pos){
    string val;
	cout<<"\nEnter the required language:";
    cin>>val;
    cout<<"\nEnter the required location:";
    cin>>pos;
    size ++;
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = size-1; i > pos; i--){
        languages[i] = languages[i-1];
    }
    // Chen val tai pos
    languages[pos] = val;
}
void remove(string languages[], int &size, int pos){
    size--;	
    cout<<"\nEnter the location to delete:";
    cin>>pos;
    for(int i = pos; i < size; i++){
        languages[i] = languages[i+1];
    }
}
void rename(string languages[],int size){
    string name;
	cout<<"\nEnter the name of the language to be edited:";
	fflush(stdin);
	cin>>name;
	for(int i=0;i<size;i++){
		if(languages[i]==name){	        
	        cout<<"\nEnter the name of the language: ";	
		    cin>>languages[i];
	        cout<<"\nHas been fixed\n";  
		}    
	}
}
void findJava(string languages[], int size){
    string java;
	for(int i=0;i<size;i++){
		if(languages[i]==java){
			cout<<languages[i];	
		}
	}
}