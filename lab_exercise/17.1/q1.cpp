//WAP to create Array with DMA and check whether the
// memory created or not.
#include <iostream>
using namespace std;

int main() {
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    
    int* array = new(nothrow) int[size];

    
    if (array == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    } else {
        cout << "Memory allocated successfully!" << endl;
    }

    
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1; 
    }

    cout << "Array contents: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    delete[] array;

    return 0;
}
