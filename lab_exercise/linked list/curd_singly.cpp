#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; 

    Node(int data){
        this-> data =data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node *head;
    int count;

    LinkedList(){
        this->head=NULL;
        count=0;
    }
};
int main(){
    LinkedList list;
    return 0;
}