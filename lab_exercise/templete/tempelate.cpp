#include<iostream>
using namespace std;
template <typename T1, typename T2>
class Collection{
    private:
    int size;
    T1 *arr;
    
    public:
        int setData(int size){
            this->size= size;
            arr = new T1[size];
            if(arr != NULL){
                cout << "Array created successfullly..." << endl;
            }
            else{
                 cout << "Array creation failed..." << endl;
            }
        }

        void getData(){
            cout << "Collection is: " << endl;
            for(int i=0;i<size;i++){
                cout << arr[i] << endl;
            }
        }

        void addItem(int index, T2 element){
            if(index>=0 && index <this-> size){
                arr[index]=element;
                cout << "Element added successfully!!" << endl;
            }
            else{
                cout << "Error!!" << endl;
            }
        }
};

int main(){
    Collection<int,int> int_array;
    int_array.setData(5);
    int_array.getData();
    int_array.addItem(0,99);

    return 0;
}