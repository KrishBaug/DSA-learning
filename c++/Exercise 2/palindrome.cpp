#include <iostream>
#include <string>

int main(){
    std::string word; 

    std::cout << "Enter the word : ";
    std::cin >> word;
    bool if_palindrome = true;

    int size = word.length();

    for (size_t i = 0; i < size/2; i++){
        if (word[i] != word[size - i -1]){
            if_palindrome = false;
        }
    }

    if (if_palindrome){
        std::cout << word << " is a palindrome";
    } else {
        std::cout << word << " is not palindrome";
    }

    return 0;
}