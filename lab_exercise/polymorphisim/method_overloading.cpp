#include<iostream>
using namespace std;
class Vehicle{
    public:
    void truck(){
        cout << "Empty truck running!!" << endl;
    }
    void truck(int a){
        cout << "Truck is running with " << a << " passengers!!" << endl;
    }
     void truck(int a,int g){
        cout << "Truck is running with " << a << "passengers and " << g << " goods" << endl;
    }
};

int main(){
    Vehicle obj;
    obj.truck();
    obj.truck(10);
    obj.truck(5,20);
    
    return 0;
}