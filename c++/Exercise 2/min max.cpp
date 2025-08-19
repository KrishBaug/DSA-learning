// Find Min Max

#include <iostream>


int main(){

    int arr[]{3, 6, 7, 4, 9, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max{};
    int min{arr[0]};

    for (size_t i=0; i<size; i++){
        if (arr[i] > max){
            max = arr[i];
        } else if(arr[i] < min){
            min = arr[i];
        }
    }
    std::cout<<"Max : " << max<<std::endl;
    std::cout << "Min : "<< min << std::endl;
    return 0;
}