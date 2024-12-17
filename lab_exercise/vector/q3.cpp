#include<iostream>
#include<vector>
using namespace std;

class Collection{
    vector<int> v;
    public:
    
    void addElement(int element){
        v.push_back(element);
        cout << "Element added successfully!!!" << endl;
    }

    void updateElement(int index, int element){
        if(index>=0 && index<v.size()){
            v[index] =element;
            cout << "Element updated succeffully!!!" << endl;
        }
        else{
            cout << "Error!!!" << endl;
        }
    }

    void deleteElement(int index){
        if(index>=0 && index < v.size()){
            v.erase(v.begin() + index);
            cout << "Element deleted succseefully!!!" << endl;
        }
        else{
            cout << "Error!!" << endl;
        }

    }

    void getAllElements(){
        cout << "Vector is:" << endl;
        for(int i =0;i<v.size();i++){
            cout << v[i] << "  ";
        }
        cout << endl;

    }
};
int main(){
    Collection obj;
    int choice;
    do{
        cout << "Press 1 for add an element " << endl;
        cout << "Press 2 for update an element " << endl;
        cout << "Press 3 for delete an element " << endl;
        cout << "Press 4 for view all element " << endl;
        cout << "Press 5 for exit " << endl;

        cout << "Enter your choice!!" << endl;
        cin >> choice;

        switch(choice){
            case 1:
            int element;

            cout << "Enter elemenet";
            cin >> element;

            obj.addElement(element);
            break;

            case 2:

            break;
            case 3:
            break;
            case 4:
            break;
            case 0:
            break;
            default:
            cout << "Invalid choice!!!" << endl;
        }

    }while(choice !=0);

    return 0;
}