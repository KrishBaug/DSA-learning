// Convert a given string to uppercase using character functions.

#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <string>

int main(){
    std::string sentence;
    std::cout << "Enter the string : ";
    std::getline(std::cin, sentence); // Takes full lines and does not break due to spaces
    

    std::string uppercase{};
    for (size_t i=0; i<sentence.size(); i++ ){
        uppercase += std::toupper(sentence[i]);
    }

    std::cout << "The sentence : " << uppercase;

    return 0;
}