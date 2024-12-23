#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next; 
};
int main(){

    Node *ptr=NULL;

    Node *HEAD=new Node();
    HEAD->data=13;
    HEAD->next=NULL;

    ptr=HEAD;

    Node *current =new Node();
    current->data=28;
    current->next=NULL;
    HEAD->next=current;

    current=new Node();
    current->data=56;
    current->next=NULL;
    HEAD->next->next=current;

    current=new Node();
    current->data=96;
    current->next=NULL;
    HEAD->next->next->next=current;

    while(ptr !=NULL){
        cout << ptr->data << endl;
        ptr=ptr->next; 
    }

    // cout << "Head: " << HEAD->data << "  Address: " << HEAD->next << endl;
    // cout << "n2: " << current->data << "  Address: "  << HEAD->next << endl;
    // cout << "n3: " << current->data << "  Address: "  << HEAD->next << endl;
    // cout << "n4: " << current->data << "  Address: "  << HEAD->next << endl;


    return 0;
}