// Write a lambda inside a loop to filter only even numbers.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : nums) {
        // lambda inside loop
        auto isEven = [](int x) {
            return x % 2 == 0;  // true if even
        };

        if (isEven(n)) {
            cout << n << " ";
        }
    }

    return 0;
}








