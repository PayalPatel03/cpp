
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear, endYear;

    cout << "Enter the starting year: ";
    cin >> startYear;
    cout << "Enter the ending year: ";
    cin >> endYear;

    if (startYear > endYear) {
        cout << "Starting year must be less than or equal to ending year." << endl;
        return 1; 
    }

    cout << "Leap years between " << startYear << " and " << endYear << " are:" << endl;

    int currentYear = startYear;

    while (currentYear <= endYear) {
        if (isLeapYear(currentYear)) {
            cout << currentYear << endl; 
        }
        currentYear++; 
    }

    return 0;
}
