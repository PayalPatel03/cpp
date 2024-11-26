#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;

    int maximum = num1; 

    if (num2 > maximum) {
        maximum = num2;
    }
    if (num3 > maximum) {
        maximum = num3;
    }
    if (num4 > maximum) {
        maximum = num4;
    }
  
    cout << "The maximum of the four numbers is: " << maximum << endl;

    return 0;
}