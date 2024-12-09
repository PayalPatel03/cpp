#include<iostream>
using namespace std;
//Multilevel inheritance
class Bird{
    public:
    void eat(){
        cout << "Eating seeds!!" << endl;
    }
};
class Crow : public Bird{
   void sound(){
     cout << "Chriping!!" << endl;
   }
};

int main(){
   
    return 0;
}