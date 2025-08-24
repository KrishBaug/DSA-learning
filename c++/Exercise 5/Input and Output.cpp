//Write a function that returns both the min and max of an array (use output parameters).

#include <iostream>

void findMinMax(const int arr[], int size, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    int numbers[] = {5, 3, 9, 1, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int minNum, maxNum;
    findMinMax(numbers, size, minNum, maxNum);

    std::cout << "Min: " << minNum << "\n";
    std::cout << "Max: " << maxNum << "\n";

    return 0;
}














