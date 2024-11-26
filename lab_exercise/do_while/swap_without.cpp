//Swap without 3 variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a:" << endl;
    cin >> a;
      cout << "Enter b:" << endl;
    cin >> b;
     cout << "Before swaping a is:" << a << endl;
    cout << "Before swaping b is:" << b << endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout << "=============================" << endl;
    cout << "After swaping a is:" << a << endl;
    cout << "After swaping b is:" << b ;

    return 0;

}