# Basics

## C++ normal format for start

```cpp
#include <iostream>

int main(){

    return 0;
}
```

## **To print something to terminal :**
```cpp
std::cout << "Hello world";
```

Example:
```cpp
#include <iostream>

int main(){
    std::cout << "hello world"<< endl;
}
```

## Writing comments in C++:
```cpp
\\ use double slash to comment
\*  Multiline comment *\
```

## Types of error:
1. Compile time error: occurs during complilation (before program runs). Cause Syntax mistakes, type mismatches, undeclared variables, missing headers, etc.
2. Runtime error: Occurs while program is running (after successful compilation). Cause: Invalid operations like division by zero, invalid memory access, file not found, etc.
   
```cpp
#include <iostream>

int main(){
    int x = 0;
    cout << 10 / x;  // division by zero → run-time error

    int x = "hello";  // type mismatch → compile-time error

    return 0;
}
```

## Statements and Functions
**A statement** is a complete instruction that tells the computer to perform an action. Ends with `;` in most cases.
```cpp
x = 5;
```

**A function** is a block of code that performs a specific task, can be reused, and may return a value.
```cpp
return_type function_name(parameters) {
    // body
    return value;
}

```

**Example:**
```cpp
int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
```

## Input Output Statements
1. `std::cout`: Printing data to the console 
2. `std::cin`: Reading data input from console
3. `std::cerr`: Printing errors to the connsole
4. `std::clog`: Printing log messages to the console


## C++ layers: Core vs standard vs STL
1. **Core language features**: Basic syntax & rules defined by the ISO C++ standard.
Examples: variables, loops, functions, classes, templates, operators, inheritance.

2. **Standard library**: Built-in utility code provided by C++ standard (not syntax, but ready-made code).
Examples: iostream, string, vector, algorithms (sort, find).

3. **STL (Standard Template Library)**: A part of the standard library focused on generic, template-based components.
Examples: Containers (vector, list, map), Iterators, Algorithms (sort, reverse).






