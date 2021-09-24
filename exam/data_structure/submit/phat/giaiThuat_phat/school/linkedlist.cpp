#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
struct Slist{
    Node *head;
    Node *tail;
    long size;
    Slist();
    ~Slist();
    Node* createNode(int v);
    void addFirst(const int v);
};
Node* Slist::createNode(int v){
    Node* p = new Node;
    p->data = v;
    p->next = NULL;
    return p;
}
void Slist::addFirst(const int v){
    Node* p = createNode(v);
    p->next = head;
    head = p;
    size++;
}
int main(){

}