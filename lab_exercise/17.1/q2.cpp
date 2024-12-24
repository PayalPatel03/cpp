//WAP to create Arrays and insert values using functions


#include <iostream>
using namespace std;

void insertValues(int arr[], int size) {
    cout << "Enter " << size << " values:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void displayValues(int arr[], int size) {
    cout << "The values in the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];      

    insertValues(arr, SIZE);
    
    displayValues(arr, SIZE);

    return 0;
}