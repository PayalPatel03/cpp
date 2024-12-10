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
    virtual void wearing(){
        cout << "Pathani_kurto!!" << endl;
        // India obj;
        // obj.wearing();

        //or

        // India::wearing();
    }

};


int main(){
   Pak *obj; //pak need then and india then India *obj
   India o1;
   Pak o2;

   obj=&o2;
   //if pakistani kutra need then &o2 and for than virtual keyword
//    obj=&o2;
   obj->wearing();


    return 0;
}