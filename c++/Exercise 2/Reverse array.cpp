//Reverse an array using pointers.
#include <cstddef>
#include <iostream>


int main(){
    int arr1[]{10, 20, 30, 40, 50};
    int *arr = arr1;
    int size = sizeof(arr1)/sizeof(arr1[0]);

    std::cout << "Original Array : ";
    for(size_t i=0; i<size; i++){std::cout<<arr1[i] << " ";};
    
    // Using pointer arithematic
    for (size_t i=0; i<size/2; i++){
        int *temp = new int;
        *temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr1 + size - 1 - i) = * temp;
    }

    std::cout << "Reversed array : ";
    for(size_t i=0; i<size; i++){std::cout<<arr1[i] << " ";};
    
    return 0;
}