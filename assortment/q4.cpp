//sum of row and cols
#include <iostream>
using namespace std;

int main() {
    int row, col;
    int arr[10][10];

    cout << "Enter array row size: ";
    cin >> row;
    cout << "Enter array column size: ";
    cin >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Sum of a specific row
    int rownumber;
    cout << "Enter row number: ";
    cin >> rownumber;

    if (rownumber >= 0 && rownumber < row) {
        int rowsum = 0;
        cout << "Elements of row " << rownumber << ": ";
        for (int j = 0; j < col; j++) {
            cout << arr[rownumber][j] << " ";
            rowsum += arr[rownumber][j];
        }
        cout << "\nThe sum of row " << rownumber << ": " << rowsum << endl;
    } else {
        cout << "Invalid row number." << endl;
    }

    // Sum of a specific column
    int colnumber;
    cout << "Enter column number: ";
    cin >> colnumber;

    if (colnumber >= 0 && colnumber < col) {
        int colsum = 0;
        cout << "Elements of column " << colnumber << ": ";
        for (int i = 0; i < row; i++) {
            cout << arr[i][colnumber] << " ";
            colsum += arr[i][colnumber];
        }
        cout << "\nThe sum of column " << colnumber << ": " << colsum << endl;
    } else {
        cout << "Invalid column number." << endl;
    }

    return 0;
}