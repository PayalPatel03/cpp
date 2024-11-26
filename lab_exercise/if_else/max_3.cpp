#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int min;

    if (num1 <= num2 && num1 <= num3) 
    {
        min = num1;
    } else if (num2 <= num1 && num2 <= num3)
     {
        min = num2;
    }
     else
      {
        min = num3;
    }

    cout << "The min of the three numbers is: " << min << endl;

    return 0;
}