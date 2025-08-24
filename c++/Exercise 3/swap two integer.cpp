// Write a function to swap two integers using references.

# include <iostream>

int main(){

    int a, b;
    a = 10;
    b = 5;

    std::cout << "(a, b)" << a << " , " << b << std::endl;

    int &refA = a;
    int &refB = b;

    int temp{};

    temp = refA;
    refA = refB;
    refB = temp;

    std::cout << "(a, b)" << a << " , " << b << std::endl;

    
    return 0;
}