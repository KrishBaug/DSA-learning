//Prints Multiplaction table of desired no.

#include <iostream>


int main(){

    int num;

    std::cout << "Enter the no. to generate multiplcation table : ";
    std::cin >> num;

    for (size_t i=1; i<11 ; i++){
        std::cout<< num << "x" << i << '=' << num*i << std::endl; 
    }

    return 0;
}