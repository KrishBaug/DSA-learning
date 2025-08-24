// Write a function that returns a reference to the larger of two integers

#include <iostream>

// Function that returns reference to larger integer
int& larger(int& a, int& b) {
    return (a > b) ? a : b;   // return reference to larger one
}

int main() {
    int x = 10, y = 20;

    std::cout << "Before: x = " << x << ", y = " << y << '\n';

    // Get reference to the larger variable
    int& big = larger(x, y);

    std::cout << "Larger value is: " << big << '\n';

    // If we modify the reference, original variable changes
    big += 5;

    std::cout << "After modifying larger: x = " << x << ", y = " << y << '\n';

    return 0;
}
