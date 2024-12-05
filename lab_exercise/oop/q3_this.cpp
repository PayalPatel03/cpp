//Setter Getter
#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int age;
    string course;
    float per;

    void setData(int id, string name, int age, string course, float per){
     this -> id =id;
     this -> name =name;
     this -> age = age;
     this -> course=course;
     this -> per=per;

}

void getData(){
    cout << "ID:" << this -> id 
    << " ,NAme :" <<  this -> name
    << " ,Age :" << this -> age
    << " ,Course :" << this -> course
    << " ,Percentage: " << this -> per << endl;
}
};

int main(){
      
    Student std1;
    std1.setData(7679,"Payal",19,"Full stack",70);
    std1.getData();

    Student std2;
    std1.setData(7654,"Komal",22,"Full stack",70);
    std1.getData();

    return 0;
}