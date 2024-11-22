#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a:" << endl;
    cin >> a;
      cout << "Enter b:" << endl;
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << a;
    cout << b;
    return 0;

}