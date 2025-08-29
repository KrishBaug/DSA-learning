// Overload area() function for circle, rectangle, and triangle.

#include <iostream>

int area(int l, int b){
    return l * b;
}
int area(double r){
    return 2*3.14*r;
}


int area(double l, double h, double t){
    return l*h*(0.5);
}


int main(){

    std::cout << "Area of Rect : " << area(3, 4)<< std::endl;
    std::cout << "Area of circ : " << area(6) << "\n";
    std::cout << "Area of triangle : " << area(8, 4, 7) << std::endl;
    return 0;
}


