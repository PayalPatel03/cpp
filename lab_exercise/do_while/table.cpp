//WAP to print multiplication tbale of n number using any loop
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer n to print its multiplication table: ";
    cin >> n;

    cout << "Multiplication table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl; 
    }

    return 0;
}