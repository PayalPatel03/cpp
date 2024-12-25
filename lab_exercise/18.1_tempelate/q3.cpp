#include<iostream>
using namespace std;

template<typename T>
T factorial(int val){
    if(val==0){
        return 1;
    }
    return val*factorial<int>(val-1);
}

int main(){
    int num,result;
    cout<<"Enter number of factorial : ";
    cin>>num;
    result=factorial<int>(num);
    cout<<"Factorial is : "<<result;
}