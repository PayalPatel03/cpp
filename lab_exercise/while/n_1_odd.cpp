//WAP to print N to 1 odd numbers using while loop
#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;


    while (N >= 1) {
        
        if (N % 2 != 0) {
            cout << N << "  "; 
        }
        N--; 
    }

    return 0;
}
