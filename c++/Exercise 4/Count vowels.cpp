// Count vowels in a C-string.

#include <cctype>
#include <cstddef>
#include <iostream>
#include <cstring>

int main(){
    int vowel{};
    char sentence[100];
    std::cout << "Enter the sentence : ";
    std::cin.getline(sentence, 100);

    for (size_t i=0; i<std::strlen(sentence); i++){
        switch (std::tolower(sentence[i])) {
            case 'a': vowel++; break;
            case 'e': vowel++; break;
            case 'i': vowel++; break;
            case 'o': vowel++; break;
            case 'u': vowel++; break;
        }
    }
    std::cout << "No. of vowels : " << vowel;
    return 0;
}

