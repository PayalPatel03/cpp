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
        if(position<0 || position >this->count){
            cout << "Invalid position..." << endl;
            return;
        }
        else{
            Node *ptr=this->head;
            for(int i=0;i<position;i++){
                ptr=ptr->next;
            }
            ptr->data=element;
        }
    }

     void deleteFromstart(){
        if(this->head==NULL || this->count==0){
            cout<<"List is empty...";
            return;
        }
        else{
            Node* temp=this->head;
            this->head=temp->next;
            delete temp;
            temp=NULL;
        }
    }

    void deleteFromend(){
        if(this->head==NULL || this->count==0){
            cout<<"List is empty...";
            return;
        }
        else{
            Node* temp=this->head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;

        }
    }

    void deleteFromPosition(int index){
        if(this->head==NULL || this->count==0){
            cout<<"List is empty...";
            return;
        }
        else{
            Node* prev=this->head;
            Node* temp=this->head;
            for(int i=1;i<index;i++){
                temp=temp->next;
            }
            for(int i=1;i<index-1;i++){
                prev=prev->next;
            }
            prev->next=temp->next;
            delete temp;
            temp=NULL;
            this->count--;
        }
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
        cout<<"Press 5 for delete an element at start."<<endl;
        cout<<"Press 6 for delete an element at end."<<endl;
        cout<<"Press 7 for delete an element at any position."<<endl;
        cout << "Press 8 for viewing  all node of the list" << endl;
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
            break;

               case 5:
            cout<<endl;
            list.deleteFromstart();
             cout<<"Element deleted successfully...."<<endl;
            break;

            case 6:
            cout<<endl;
            list.deleteFromend();
            cout<<"Element deleted successfully...."<<endl;
            break;

            case 7:
            cout<<"Enter position: ";
            cin>>position;
            cout<<endl;
            list.deleteFromPosition(position);
            cout<<"Element deleted successfully...."<<endl;
            break;

            case 8:
            list.viewAllNodes();
            break;

            default:
            cout<<"Enter valid choice....."<<endl<<endl;
            break;
        }

    } while (choice!=0);
    
    return 0;
}
