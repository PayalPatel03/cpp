#include<iostream>
using namespace std;
//single/simple inheritance
class Bird{
    public:
    void eat(){
        cout << "Eating seeds!!" << endl;
    }
};
class Crow : public Bird{
 
};
int main(){
    Crow obj;
    obj.eat();
    return 0;
}