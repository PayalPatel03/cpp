// Develop a menu-driven program to implement arithmetic operations such as +,-,*,/,% using UDF,switch case and looping.Make sure the program is endless unti a csetain letter is pressed.
#include <iostream>
using namespace std;

//  prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int per(int a, int b);

//  definitions
float add(float a, float b) 
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    return a / b;
}

int per(int a, int b) 
{
    return a % b;
}

int main() 
{
    char choice;
    do 
    {
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "Enter your choice (1-5)  ";
        cin >> choice;

        if (choice >= '1' && choice <= '5') 
        {
            float num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice)
             {
                case '1':
                    cout << "Result: " << add(num1, num2) << endl;
                    break;
                case '2':
                    cout << "Result: " << subtract(num1, num2) << endl;
                    break;
                case '3':
                    cout << "Result: " << multiply(num1, num2) << endl;
                    break;
                case '4':
                    if (num2 != 0)
                     {
                        cout << "Result: " << divide(num1, num2) << endl;
                    } else 
                    {
                        cout << "Error: Division by zero!" << endl;
                    }
                    break;
                case '5':
                    cout << "Result: " << per(num1,num2) << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } 

    } while(choice!=0);
    return 0;
}