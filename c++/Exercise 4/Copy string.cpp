//Copy one string into another using strcpy and then without it.

#include <iostream>
#include <cstring> // for strcpy

int main() {
    // ---------- Using strcpy ----------
    char source1[] = "Hello, World!";
    char destination1[50]; 

    strcpy(destination1, source1);

    std::cout << "[Using strcpy]" << std::endl;
    std::cout << "Source: " << source1 << std::endl;
    std::cout << "Destination: " << destination1 << std::endl << std::endl;

    // ---------- Without strcpy (manual copy) ----------
    char source2[] = "Hello, C++!";
    char destination2[50]; 

    int i = 0;
    while (source2[i] != '\0') {
        destination2[i] = source2[i];
        i++;
    }
    destination2[i] = '\0'; // add null terminator

    std::cout << "[Manual copy]" << std::endl;
    std::cout << "Source: " << source2 << std::endl;
    std::cout << "Destination: " << destination2 << std::endl;

    return 0;
}
