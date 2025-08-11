#include <iostream>

using namespace std;

// Nth term of fibonnacci series

int main(){
    int a,b, result;
    int num;
    cin >> num;
    a = 1;
    b = 1;
    result = 1;
    for (int i = 0; i < num; i++){
        a = b;
        b = result;
        result = a + b;
    }
    cout << result <<endl;
}