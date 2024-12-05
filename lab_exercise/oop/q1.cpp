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
 };

int main(){
Student std1;
std1.id =7679;
cout <<"ID: " << std1.id <<endl;

std1.name = "Payal";
cout<< "Name: " << std1.name << endl;

std1.age =19;
cout << "Age: " << std1.age << endl;

std1.course = "Full Stack";
cout<< "Course: " << std1.course << endl;

std1.per =79;
cout << "Percentage: " << std1.per << endl;

cout << "====================================" << endl;

//Stuednt2
Student std2;
std2.id =7656;
cout <<"ID: " << std2.id <<endl;

std2.name = "Komal";
cout<< "Name: " << std2.name << endl;

std2.age =22;
cout << "Age: " << std2.age << endl;

std2.course = "Full Stack";
cout<< "Course: " << std2.course << endl;

std2.per =80;
cout << "Percentage: " << std2.per << endl;


return 0;
}