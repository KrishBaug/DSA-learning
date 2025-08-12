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
### Type conversions
```cpp
double d = 2.2;
int i = 7;

d = d + i;    // i converted to double
i = d * i;    // result truncated to int
```

### Compound assignment & Increment
```cpp
x += y;  // x = x + y
x -= y;  // x = x - y
x *= y;  // x = x * y
x /= y;  // x = x / y
x %= y;  // x = x % y

++x;     // increment before use
--x;     // decrement before use
```
### Initialization in C++
* Purpose: Assign Value before using a variable/objject/ Prevents undefined behaviour.
* Forms:
  1. Copy Initialization: `double d1 = 2.3;`
  2. Direct Initialization: `double d2{2.3};`
  3. Copy-list initialization: `double d3 = {2.3}` (same as direct list but with =)
    **Example**:
    ```cpp
    complex<double> z = 1;        // real=1, imag=0
    complex<double> z2{d1,d2};    // real=d1, imag=d2
    vector<int> v{1,2,3,4,5,6};   // list of ints
    ```
    **Uninnitialized:** Constant's can't be left uninitialized. Variables should be initialized unless in rare cases.
    **Type Deduction**:
    ```cpp
    auto b = true;    // bool
    auto ch = 'x';    // char
    auto i = 123;     // int
    auto d = 1.2;     // double
    auto z = sqrt(y); // type deduced from sqrt
    ```

### Scope in C++
scope is the area of a program where a variable or function can be accessed.
**Types :**
1. Local Scope: Inside a block/ function
2. Class Scope: Inside class definition, affected by access specifiers
3. Namespace Scope: Declared in a namespace
4. Global Scope: Declared outside all constructs

**Working**:
* Compiler resolves using nearest scope first 
* Use `::` to access global variable when shadowed by local

**Lifetime:**
1. Local: Created when entering its block/function, destroyed when leaving it.

2. Global/Namespace: Created before main() starts, destroyed after program ends.

3. Dynamic (new): Created at new, lives until explicitly deleted.

```cpp
#include <iostream>
using namespace std;

// Global variable (lifetime: entire program)
int globalVar = 10;

void demo() {
    // Local variable (lifetime: inside this function only)
    int localVar = 20;

    // Static local variable (created once, lives until program ends)
    static int staticLocalVar = 30;

    // Dynamic allocation (lifetime: until delete is called)
    int* dynamicVar = new int(40);

    cout << "Local: " << localVar << "\n";
    cout << "Static Local: " << staticLocalVar << "\n";
    cout << "Dynamic: " << *dynamicVar << "\n";
    cout << "Global: " << globalVar << "\n";

    delete dynamicVar; // free memory
}

int main() {
    demo();
    demo(); // staticLocalVar keeps its value here
}
```
**How it behaves:**
1. `localVar` is recreated each time demo() runs.

2. `staticLocalVar` is created only once, keeps value between calls.

3. `dynamicVar` exists until delete is called.

4. `globalVar` exists the whole time the program runs.

### Constants in C++
* `const`: Value cannot be changed after initialization; can be runtime-evaluated.
* `constexpr`: Must be compile time evaluable; enables placing data in read-only memory.
* `consteval`: Must be evaluated at compile time; cannot be used with runtime values.
* **Example:**
  ```cpp
    constexpr int dmv = 17;
    const double sqv = sqrt(var); // can be runtime
    constexpr double s2 = sum(v); // must be compile-time (error if v not const)

  ```
* `constexpr` Functions:
  * Can be called at compile time or runtime.
  * Must have no side effects, can be used loops/ local variables.
```cpp
consteval double square(double x){return x*x}
```
`consteval` function are always evvaluated at compile time; runtime argument not allowed

### Arrays
Its a contigous sequence of elements of the same type.
Declaration:
```cpp
int arr[5] = (1, 2, 3, 4, 5); // size a must be constant
```
**Access:** arr[0] --> first element
**Iteration:**
```cpp
for (int i = 0; i < 5; i++){
    cout << arr[i] << " ";
}
```
**Range for:**
```cpp
for (auto x : arr){
    cout << x << " ;
}
```

### Pointers
* **Definition:** Stores the memory address of a variable
* **Declaration**: 
   ```cpp
   int x = 10
   int* p = &x; // p stores address of x
   ```

**Dereferencing**:
`*p` --> value stored at the addressing in `p`.
**Example**:
```cpp
cout << "Value: " << *p << "\n"; //prints 10
cout << "Address: " << p << "\n"; // prints memory address
```

### References
It is an alias to an existing variable, must be initialized.
**Declaration:**
```cpp
int y = 20;
int& ref = y; // ref refers to y
ref = 30;     // changes y to 30
```
**No Null references**: Must always refer to valiid object.

### Const References
**Purpose**: Pass large data without copying, while preventing modification.
**Example**:
```cpp
void printArray(const int (&arr)[5]) {
    for (auto x : arr) cout << x << " ";
}
```

### Null pointer
**Purpose:** Represents "no object" for a pointer.
Example:
```cpp
int* ptr = nullptr;
if (ptr == nullptr) cout << "Pointer is empty";
```

### Selection Statement 
1. **If Statement:** 
   * Tests a condition; runs code if condition is true.
   * Can declare variables inside condition (scope limited to the statement).
```cpp
bool accept() {
    cout << "Proceed? (y/n): ";
    char answer = 0;
    cin >> answer;
    if (answer == 'y') return true;
    return false;
}
```
2. **Switch Statement**:
   * Tests a value against consent case labels.
   * Uses break to avoid falling through.
   * default executes if no match is found.

```cpp
bool accept2() {
    cout << "Proceed? (y/n): ";
    char answer = 0;
    cin >> answer;
    switch (answer) {
        case 'y': return true;
        case 'n': return false;
        default:  cout << "Taking that as no.\n"; return false;
    }
}
```
### Loops 
**While Loops:**
Repeats while condition is true.
```cpp
while (true) {
    cout << "Enter action: ";
    string act;
    cin >> act;
    if (act == "quit") break;
}
```

**For loops:**
Can declare variables in loop header.
```cpp
for (int i = 0; i < 5; i++)
    cout << i << " ";
```
Range-for

```cpp
for (char c : "hello")
    cout << c << " ";
```
### Variable Declaration in Condition
Improves readability and limits scope.

```cpp
if (auto n = v.size(); n != 0) {
    cout << "Vector not empty, size: " << n;
}
```

Shortter for `!=0`:

```cpp
if (auto n = v.size()) { /* ... */ }
```

### Mapping to Hardware
* C++ operation map closely to machine instruction (e.g., x+y --> single CPU add).
* Memory is seen as sequence of address; arrays are contiguous memory blocks.


### Assignment
**Assignment:** copies value from one object to another.

```cpp
int x = 2, y = 3;
x = y; // x becomes 3

```
**Pointers:**
```cpp
int x = 2, y = 3;
int* p = &x;
int* q = &y;
p = q; // both now point to y
```

**References**:
```cpp
int x = 2, y = 3;
int& r = x;
int& r2 = y;
r = r2; // assigns value of y to x
```

### Initialization Vs Assignment
* **Initialization** --> creating and binding an object when it's declared.
* **Assignment** --> replacing the value of an existing object.

```cpp
int x = 7;        // initialization
int& r = x;       // reference initialized to x
r = 99;           // assignment to x through r
```


