#include<iostream>

// Function to calculate the factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    // Input from the user
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;  // Exit the program with an error code
    }

    // Calculate and display the factorial
    int result = factorial(number);
    std::cout << "Factorial of " << number << " = " << result << std::endl;

    return 0;  // Exit the program successfully
}
