#include<iostream>
using namespace std;

//FUNCTION BASED TEMP

template <typename T>
T add(T a, T b){
    return a+b;
}

int main(){

    int result=add(5,10);
    cout << result;

    return 0;
}