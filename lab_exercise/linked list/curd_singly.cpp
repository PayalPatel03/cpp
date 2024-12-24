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
    
    void addAtBeginning(int data){
        Node *newNode=new Node(data);
        newNode->next=this->head;
        this->head=newNode;
        this->count++;
    }

    void addAtEnd(int data){
        Node *newNode=new Node(data);
        if(this->head == NULL){
            this->head =newNode;
        }
        else{
            Node *ptr=this->head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newNode;      //1111
        }
        this->count++;

    }
};
int main(){
    LinkedList list;
    int choice,element,position;

    do
    {
        cout << "Press 1 for inserting node at begnning of the list" << endl;
        cout << "Press 2 for inserting node at end of the list" << endl;
        cout << "Press 3 for inserting node at any position of the list" << endl;
        cout << "Press 4 for viewing  all node of the list" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter Your choice:" << endl;
        cin >> choice;

        switch(choice){
            case 1:
            cout << "Enter element: " << endl;
            cin >> element;
            list.addAtBeginning(element);
            cout << "Element inserted at behinning successfully..." << endl;
            break;

            case 2:
            cout << "Enter element: " << endl;
            cin >> element;
             list.addAtEnd(element);
            cout << "Element inserted at End successfully..." << endl;

            case 3:
            cout << "Enter element: " << endl;
            cin >> element;

        }

    } while (choice!=0);
    
    return 0;
}