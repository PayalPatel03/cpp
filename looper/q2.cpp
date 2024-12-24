#include <iostream>

using namespace std;

int main() {
   
    int number, digit = 0;  

    cout << "Enter number of your choice:" << endl;
    cin >> number;

    while (number != 0) {
        number = number / 10;
        digit++;
    }

    cout << "Here, the result is " << digit << endl;

    return 0;
}