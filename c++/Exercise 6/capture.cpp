// Create a lambda that captures a variable by reference and increments it.

#include <iostream>


int main(){
    int counter{};
    auto increment = [&counter](){
        counter++;
    };

    increment();
    increment();
    increment();

    std::cout << "Counter : " << counter;

    return 0;
}


