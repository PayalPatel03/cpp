//WAP to print factorila of n number using for loop
#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a non-negative integer n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i; 
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;

    return 0;
}