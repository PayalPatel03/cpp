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

    void setData(){
         cout << "Enter ID: ";
         cin >> id;
         cout << "Enter Name: ";
         cin >> name;
         cout << "Enter age: ";
         cin >> age;
         cout << "Enter your course:";
         cin >> course;
         cout << "Enter percentage:";
         cin >> per;
}

void getData(){
    cout << "ID:" << id 
    << ", NAme :" << name
    << ", Age :" << age
    << ", Course :" << course
    << ", Percentage: " << per << endl;
}
};

int main(){
    
    int n;
    cout << "Enter your size";
    cin >> n;

    Student students[n];
    
    for( int i=0;i<n;i++)
    {
        students[i].setData();
    }

    for(int i=0;i<n;i++)
    {
         students[i].getData();

    }

    return 0;
}