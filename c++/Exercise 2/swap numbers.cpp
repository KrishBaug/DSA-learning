#include <iostream>

int main() {
    int *a = new int(8);
    int *b = new int(9);

    std::cout << "A : " << *a << "\n";
    std::cout << "B : " << *b << "\n";

    int *temp = a;
    a = b;
    b = temp;

    std::cout << "A : " << *a << "\n";
    std::cout << "B : " << *b << "\n";

    delete a;
    delete b;

    return 0;
}