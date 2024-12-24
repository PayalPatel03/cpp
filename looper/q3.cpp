#include <iostream>

using namespace std;

int main() {
   
    int num, digit1, digit2, result;

    cout << "Enter number of your choice:" << endl;
    cin >> num;

   
    digit2 = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    digit1 = num;

    result = digit1 + digit2;

   
    cout << "The required result is " << result << endl;

    return 0;
}