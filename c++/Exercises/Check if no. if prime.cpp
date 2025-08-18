// check if no. is prime or not

#include <iostream>

int main(){
    
    int num{};
    std::cout << "Enter number to check if prime number : ";
    std::cin >> num;
    int counter{};

    for (size_t i=1; i<num; i++){
        std::cout << i;
        if (num % i == 0){
            counter += 1;
        }
    }
    std::cout<< counter <<std::endl;

    if (counter <= 1){
        std::cout << "The number is prime.";
    } else {
        std::cout << "The number is not prime.";
    }
    
    return 0;
}