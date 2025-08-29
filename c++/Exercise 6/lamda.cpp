// Create a lambda that squares a number.

#include <iostream>

int main(){
    int square{5};
    auto main = [](int square){
        return square*square;
    }(square);

    std::cout << "Square  : " << main;

    return 0;
}