# Variable and DataTypes

A variable in C++ is a named storage location in memory that holds a value, which can change during program execution.

## DataTypes

### 1. Number Systems:
```cpp
#include <iostream>


int main(){
   
   int number1 = 15; // Decimal
   int number2 = 017; // Octal
   int number3 = 0x0F; // Hexadecimal
   int number4 = 0b00001111; // Binary
   
    return 0;
}
```

## Initializers
1. Braced Initializers:
   ```cpp
    /*
    //Variable may contain random garbage value . WARNING
    int elephant_count;
    This is Because in C++, a local variable like int elephant_count; is uninitialized, so it holds whatever random data was already in that memory location — called a garbage value.
    You must assign a value before using it.
    
    int lion_count{};//Initializes to zero
    
    int dog_count {10}; //Initializes to 10
    
    int cat_count {15}; //Initializes to 15
    
    //Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    //
    //int new_number{doesnt_exist};

   // int narrowing_conversion {2.9};//Compiler error
   ```
2. Functional Initializers:
   ```cpp
    //Functional Initialization
   /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    //int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

    //Information lost. less safe than braced initializers
    int narrowing_conversion_functional (2.9);
   ```

Functional vs Braced Assignment
| Feature | Functional() | Braced {}|
|---------|--------------|----------|
|Syntax | int x(5) | int x{5} |
|Name | Direct-initialization | List-initialization |
|Narrowing conversion | Allowed (int x(2.5)) | Error (int x{2.5}) |
|Constructor calls | Yes | Yes |
|Safety | Less safe | More safe |
