//WAP to convert string in togglecase without using any string function
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100); 

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {

            str[i] = str[i] - 32;
        }
        
        else if (str[i] >= 'A' && str[i] <= 'Z') {

            str[i] = str[i] + 32;
        }
    }

    cout << "Toggle case string: " << str << endl; 

    return 0;
}