//Implement dynamic array resizing with new and delete.

#include <cstddef>
#include <iostream>

void print_arr(int arr[], int size){
    std::cout << "Your array : ";
    for (size_t i=0; i<size; i++){
    std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main(){

    std::cout << "Dynmaic array Simulation" << std::endl;
    bool state = true;
    int size = 2;
    int temp{};

    while (state){
        int *dynamic_array {new int[size]{}};
        print_arr(dynamic_array, size);

        std::cout<<"Enter the size of the array you want to change to : ";
        std::cin >> size;

        delete [] dynamic_array;
        dynamic_array = nullptr;

    }

    return 0;
}