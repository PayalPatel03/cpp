#include<iostream>
using namespace std;
class India{
    public:
    void wearing(){
        cout << "Dhoti-Kurta!!" << endl;
    }
};
class Pak :public India{
    public:
    void wearing(){
        cout << "Pathani_kurto!!" << endl;
        // India obj;
        // obj.wearing();

        //or

        India::wearing();
    }

};


int main(){
    Pak aman;
    aman.wearing();


    return 0;
}