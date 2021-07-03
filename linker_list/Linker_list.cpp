#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){this->data = data; this->next = NULL;}// hàm khởi tạo có data
};
class LinkerList{
    private:
        Node *head;
    public:
        LinkerList(){head = NULL;}// hàm khởi tạo mặc định
        void addFront(int val);// thêm giá trị vào đầu dslk
        string toString();
};
void LinkerList::addFront(int val){
    Node *node = new Node(val);
    if(head==NULL){
        head = node;
        head->next = NULL;
    }
    else{
        Node *temp = head;
        head = node;
        head->next = temp;
    }
};
string LinkerList::toString(){
    ostringstream ss;
    Node *temp = head;
    while(temp!=NULL){
        ss<<temp->data<<" ";
        temp = temp->next;
    }
    return ss.str();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        LinkerList list;
        int val;
        while(cin>>val){
            list.addFront(val);
            cout<<list.toString();
            cout<<endl;
        }
        cin.clear();
        cin.ignore();
        cout<<"------------"<<endl;
    }
    return 0;
}