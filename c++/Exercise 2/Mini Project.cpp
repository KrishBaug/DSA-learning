#include <iostream>

int main() {
    int N;
    std::cout << "Enter number of students: ";
    std::cin >> N;

    // dynamically allocate array
    int *marks = new int[N];

    // input marks
    for (int i = 0; i < N; i++) {
        std::cout << "Enter marks of student " << i + 1 << ": ";
        std::cin >> marks[i];
    }

    // compute average, highest, lowest
    int sum = 0, highest = marks[0], lowest = marks[0];

    for (int i = 0; i < N; i++) {
        sum += marks[i];
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];
    }

    double average = static_cast<double>(sum) / N;

    std::cout << "\nResults:\n";
    std::cout << "Average Marks: " << average << "\n";
    std::cout << "Highest Marks: " << highest << "\n";
    std::cout << "Lowest Marks : " << lowest << "\n";

    // free memory
    delete[] marks;

    return 0;
}
