//        5
//      4 5 4
//    3 4 5 4 3
//  2 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1
#include <iostream>
using namespace std;

int main() {
    int num = 5, i, j, k;
    for (i = 0; i < num; i++) {
       
        for (k = 0; k < num - i; k++) {
            cout << "  ";
        }

        for (j = num - i; j <= num; j++) {
            cout << j << " ";
        }
        
        for (j = num - 1; j >= num - i; j--) {
            cout << j << " ";
        }
        cout << endl; 
    }
    return 0;
}