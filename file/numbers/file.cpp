// fstream: thư viện đọc/xuất file
// ifstream: đọc file 
// osftream: xuất file
// is_open: kiểm tra file có mở được hay không?
// close: đóng file 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a[100];
    int size = 0;
    string input_path = "./file/numbers/data.in";
    string output_path = "./file/numbers/data.out";
    ifstream reader(input_path);
    ofstream writer(output_path);
    // đọc file
    if(reader.is_open()){
        reader>>size;
        cout<<size<<endl;
        for(int i=0; i<size;i++){
            reader>>a[i];
        }
    }
    // xuất mảng ra màn hình
    for(int i=0; i<size;i++){
        cout<<a[i]<<" ";
    }
    reader.close();
    // xuất mảng vào trong file
    for(int i=0; i<size;i++){
        if(a[i]%2==0) writer<<a[i]<<" ";
    }
    writer.close();
}