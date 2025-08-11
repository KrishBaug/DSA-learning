# C++ Basics

### Functions:

A function is a named block of code that does something.

* Name of the function.
* Return type (what it gives back)
* Paramater types (what it needs)

```cpp
#include <iostream>
#include <cmath>  // for sqrt()

// Function declarations
double square(double x);  // takes a double, returns a double
void greet();             // takes nothing, returns nothing

int main() {
    greet();
    double s2 = sqrt(2);      // OK: double argument
    double s4 = square(4);    // OK: uses our function
    std::cout << "Square: " << s4 << "\n";
    return 0;
}

// Function definitions
double square(double x) {
    return x * x;
}

void greet() {
    std::cout << "Hello!\n";
}

```

### Functional Overloading:

Same function name, different parameter types.

```cpp
#include <iostream>
using namespace std;

void print(int x)       { cout << "int: " << x << "\n"; }
void print(double x)    { cout << "double: " << x << "\n"; }
void print(string text) { cout << "string: " << text << "\n"; }

int main() {
    print(42);          // calls int version
    print(9.65);        // calls double version
    print("Hello");     // calls string version
    return 0;
}

```

### Types & Variables

* **Types** --> defines possible values + allowed operations
* Variables --> named piece of memory holding a value.

~~~cpp
bool   flag = true;       // true or false
char   letter = 'A';      // characters
int    inch = 42;         // integers
double pi = 3.14;         // floating-point
unsigned count = 100;     // non-negative integer
~~~

### Literals
```cpp
42         // decimal
0b101010   // binary
0x2A       // hex
052        // octal
3.14       // floating-point
314e-2     // floating-point with exponent
1'000'000  // digit separator for readability
```

### Arithematic 
```cpp
+   // addition
-   // subtraction
*   // multiplication
/   // division
%   // remainder (integer only)
```

### Comparison Operator
```cpp
==  // equal
!=  // not equal
<   // less than
>   // greater than
<=  // less or equal
>=  // greater or equal
```

### Logical & Bitwise Operator
```cpp
&&   // logical AND
||   // logical OR
!    // logical NOT

//Bitwise (operator on bits)
&    // bitwise AND
|    // bitwise OR
^    // bitwise XOR
~    // bitwise NOT

```


