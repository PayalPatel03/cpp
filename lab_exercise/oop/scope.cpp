//Scope of variable(::)
#include<iostream>
#include<string>
using namespace std;

//Global Variable
int x=100;

int main(){
    //local variable
    int x=50;
   cout << "Global Variable:" << ::x << endl;
   cout << "Local Variable:" << x;
    return 0;
}