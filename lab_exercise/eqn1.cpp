#include <iostream>

int main() {
    // Declare variables for x and y
    double x, y;

    // Prompt the user for input
    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;

    // Calculate (x + y)^2
    double result = (x + y) * (x + y);

    // Display the result
    std::cout << "The result of (x + y)^2 is: " << result << std::endl;

    return 0;
}