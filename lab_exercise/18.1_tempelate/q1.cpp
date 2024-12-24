//WAP to add two values using template
#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    int x,y;
    cout << "Enter value of x" ;
    cin >> x;

    cout << "Enter value of y" ;
    cin >> y;

    int result=add(x,y);
    cout << "Addition is :" <<  result;

    return 0;
}