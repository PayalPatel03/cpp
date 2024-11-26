/*- - - - 5
  - - - 4 4
  - - 3 3 3
  - 2 2 2 2
  1 1 1 1 1
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    for (int i = rows; i >= 1; i--) {

        for (int k = 1; k <i; k++) {
            cout << "  "; 
        }

        for (int j = i; j <= 5; j++) {
            cout << i << " ";
        }
        
        cout << endl;
    }

    return 0;
}