#include <cctype>
#include <cstddef>
#include<iostream>
#include <string>


int main(){
    std::string username{};
    bool valid = true;
    while (true){
        valid = true;
        std::cout << "\nEnter the password : ";
        std::cin >> username;

        if (username.length() < 6){
            std::cout << "Invalid : Username must be more than 6 characters"<<std::endl;
            valid = false;
        }

        for (size_t i=0; i<username.length(); i++){
            username[i] = std::tolower(username[i]);
        }

        for (char ch: username){
            if (!(std::isalnum(ch))){
                std::cout << "Invalid : Username can only have alphabets and numbers" << std::endl;
                valid = false;
            }
        }
        if (valid){
            break;
        }
        
    }

    return 0;
}