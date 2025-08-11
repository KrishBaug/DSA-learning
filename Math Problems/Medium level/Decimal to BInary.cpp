#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// The code checks binary
//
int main(){
    int a;
    a = 31;
    string binary;
    cout << "Enter a number to convert to binary :";
    cin >> a;
    binary = "";
    

    while (a > 0){
        if (a % 2 == 1){
            a = a - 1;
            a = a / 2;
            binary = to_string(1) + binary;
        }
        else {
            a = a / 2;
            binary = to_string(0) + binary;
        }
    }

    cout << "This is binary :" << binary;


    return 0;
}
