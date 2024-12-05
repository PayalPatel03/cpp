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

    void setData(int i, string n, int a, string c, float p){
    id =i;
      name =n;
     age = a;
      course=c;
      per=p;

}

void getData(){
    cout << "ID:" << id 
    << "NAme :" << name
    << "Age :" << age
    << "Course :" << course
    << "Percentage: " << per << endl;
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