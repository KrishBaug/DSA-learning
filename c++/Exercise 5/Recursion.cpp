// Implement a function to calculate factorial using recursion.

#include <iostream>

int factorial(int n) {
    if (n <= 1) {   // base case
        return 1;
    }
    return n * factorial(n - 1);  // recursive case
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " = " << factorial(num) << "\n";

    return 0;
}



