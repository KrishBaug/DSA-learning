// Compare memory addresses of two variables using references and pointers.

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    // References
    int &refA = a;
    int &refB = b;

    // Pointers
    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Using references:" << endl;
    cout << "Address of a (via refA) : " << &refA << endl;
    cout << "Address of b (via refB) : " << &refB << endl;

    cout << "\nUsing pointers:" << endl;
    cout << "Address of a (ptrA holds) : " << ptrA << endl;
    cout << "Address of b (ptrB holds) : " << ptrB << endl;

    return 0;
}
