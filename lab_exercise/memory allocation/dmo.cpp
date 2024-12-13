#include <iostream>
using namespace std;
class Myclass{
    private:
    int *arr;
    int size;

    public:
    Myclass(int size){
        this->size =size;
        arr=new int(this->size);
        if (arr==NULL){
            cout << "Memory allocation is failed!!!" << endl;
        }
        else{
            cout << "Memory allocation is successfull!!!" << endl;
        }
    }

    ~Myclass(){
        delete[] arr;
        arr=NULL;
        if(arr==NULL){
            cout << "Memory deallocation is successful!!" << endl;
        }
        else{
            cout << "Memory dellocation is failed!!" << endl;
        }
    }

    void addElement(int index,int element){
        if(index==0 && index<this->size){
            this->arr[index]=element;
            cout << "Element added successfully!!" << endl;
        }
        else{
            cout << "Error...." << endl;
        }
    }
};
int main(){
    Myclass obj(5);
    obj.addElement(0,99);

    return 0;
}