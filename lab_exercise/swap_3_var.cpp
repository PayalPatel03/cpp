#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter value of a";
    cin >> a >> endl;
    cout << "Enter value of b";
    cin >> b >> endl;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
      int temp = a; 
    a = b;   
    b = temp; 

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;

}