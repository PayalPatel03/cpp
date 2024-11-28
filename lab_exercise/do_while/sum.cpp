//WAP to print sum of all numbers from 1 TO n using for loop
#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0; 

    cout << "Enter a positive integer n: ";
    cin >> n;
  
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }
    
    cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}