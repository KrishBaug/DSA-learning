#include <iostream>

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a{}, b{};
    std::cout<<"Enter first num : ";
    std::cin >> a;

    std::cout << "Enter the second num : " ;
    std::cin >> b;

    std::cout << "Output : " << max(a, b);
    
    return 0;
}