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

    void addAtPosition(int data,int position){
        Node *newNode=new Node(data);
        if(position==0){
            newNode->next=this->head;
            this->head=newNode;
        }
        else{
            Node *ptr=head;
            for(int i=0;i<position-1;i++){
                ptr=ptr->next;
            }
            newNode->next=ptr->next;
            ptr->next=newNode;
        }
        this->count++;
    }
    void viewAllNodes(){
        Node *ptr=this->head;
        while(ptr!=NULL){
            ptr=ptr->next;
            cout << ptr->data << "  ";
            ptr=ptr->next;
        }
        cout << endl;
    }

    void update(int element,int position){

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
        cout << "Press 4 for updating node" << endl;
        cout << "Press 9 for viewing  all node of the list" << endl;
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
            break;

            case 3:
            cout << "Enter element: " << endl;
            cin >> element;
            cout << "Enter position : " << endl;
            cin >> position;
            list.addAtPosition(element,position);
            cout << "Node inserted successfully..." << endl;
            break;

            case 4:
            cout << "Enter element: " << endl;
            cin >> element;
            cout << "Enter position : " << endl;
            cin >> position;
            list.update(element,position);
            cout << "Element update successfully..." << endl;


            case 9:
            list.viewAllNodes();
            break;

            default:
            cout<<"Enter valid choice....."<<endl<<endl;
            break;
        }

    } while (choice!=0);
    
    return 0;
}
