
// WAP to multiply two value values using template
#include<iostream>
using namespace std;

template <typename T>
T mul(T a, T b){
    
    return a*b;
}

int main(){
    int x,y;
    cout << "Enter value of x:";
    cin >> x;
    cout << "Enter value of y:";
    cin >> y;
    int result=mul(x,y);
    cout << "Multiplication is:" << result;

    return 0;
}
