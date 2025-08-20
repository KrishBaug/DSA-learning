#include <iostream>
#include <string>

int main(){
    int num;
    std::string binary_var{};
    std::cout<<"Enter a number to convert to binary : " ;
    std::cin >> num;


    while (num != 0){
        if (num % 2 == 1){
            num -= 1;
            num /= 2;
            binary_var = '1' + binary_var;
        } else {
            num /= 2;
            binary_var = '0' + binary_var;
        }
    }
    std::cout << binary_var;

    return 0;
}