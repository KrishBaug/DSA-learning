// Creating calculators

#include <iostream>


int main(){
    double num1 {}, num2 {};
    char op{};
    std::cout << "Enter the first number : " ;
    std::cin >> num1;

    std::cout << "Enter the second number : ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /) : " ;
    std::cin >> op;

    int result;

    switch (op) {
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;
        case '*': result = num1 * num2;
        break;
        case '/': result = num1 / num2;
        break;

        default: std::cout << "Invalid character used : " << op << std::endl;
    
    }

    std::cout << "Result : " << result << std::endl;



    return 0;
}