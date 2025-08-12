#include <iostream>

using namespace std;


int main(){

    float a, b, result;
    char op;
    cout << "Enter first number : " ;
    cin >> a;

    cout << "Enter the operation (+, -, /, *) : " ;
    cin >> op;

    cout << "Enter the second number : ";
    cin >> b;

    if (op == '+'){
        result = a + b;
    }
    else if (op == '-'){
        result = a - b; 
    }
    else if (op == '*'){
        result = a * b;
    }
    else {
        result = a / b;
    }

    cout << "Result : " << result << endl;

    return 0;
}
    

    