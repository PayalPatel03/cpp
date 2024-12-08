#include<iostream>
using namespace std;
class City
{
    public:
    int id;
    //Deafult constructor
    City(){
        id=5;
        cout << "Welcome city "<< this-> id << endl;
    }

    //Paramertised constructor
    City(int n){
        this-> id = n;
        cout << "ID is:" << this-> id << endl;
    }

    //Copy Constructor
    City(City &obj){
        obj.id=7;
        this-> id =obj.id;
    }
    //Destructor
     ~City(){
        cout<<"Object is destroyed...."<<endl;
    }
};

int main(){
    City c1; //deafault
    City c2(3); //Paramertised


    City c3=c2; //shallow copy
    City c4(c2); // deep copy

    cout << c4.id << endl;
    cout << c2.id << endl;

    return 0;
}