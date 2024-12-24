//41
//41  42
//41  42  43
//41  42  43  44
//41  42  43  44  45

#include <iostream>
using namespace std;

int main() {
    int i, j, n = 41;
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            cout << " " << n + j << " ";
        }
        cout << endl;
    }
    return 0;
}