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

## Integer Modifers
only applied on `int` type
There are two types integer data types:
1. unsigned int: stores only positive range of integer.
   Formula for Range: $[0 ~ 2^{n-1}]$
2. Signed Range: stores both positive and negative numbers but the range is halved 
   Formula: $[-2^{n-1} ~ 2^{n-1} - 1]$

other modifer that can be applied:
1. `long`: lengthens the data
2. `short`: shortens the data

Example:
Read how the modfiers affect the data occupied the variable:
```cpp
 //short and long
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; // 
    unsigned short int unsigned_short_int {456};
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66};//
    signed int signed_int {77};//
    unsigned int unsigned_int{77};
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};
```
## How to get size of variable
Use `sizeof(VarName)` to get size of var in BYTES
```cpp
int x = 5;
cout << sizeof(x);
```

## Fractional number or FLOATING types
Ways to store fractional number;
| Type | Size (bytes) | Precision | Comment | 
|------|------|-----------|---------|
|float | 4 | 7 | - |
|double | 8 | 15 | Recommended by default |
|long double| 12 | greater than double | - |

**Precision :** means how many significant decimal digits it can store accurately

```cpp
    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;
    std::cout << std::setprecision(20); // Control the precision from std::cout.
     //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion

    std::cout << "number4 : " << number4 << std::endl;


    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
```

it gives error when we give floating point handle more than the required digit.
```cpp
float x{88997788} // this will give error has float can store seven digits
```
It can also give result as infinity unlike int
```cpp
   double number10{ -5.6 };
   double number11{};//Initialized to 0
   double number12{};  //Initialized to 0

   //Infinity
   double result { number10 / number11 };
   // Result can be both positive or negative infinity
   // If it is 0.0 / 0.0 then result is NaN

   std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
```

Floating-point suffixes tell the compiler the exact type of the literal:
```cpp
   auto a = 3.14;    // double (default)
   auto b = 3.14f;   // float
   auto c = 3.14L;   // long double

   double a = 3.14;    // default type
   float b = 3.14f;    // float suffix
   long double c = 3.14L; // long double suffix   
```

## Boolean

```cpp
bool red_light {false};
bool green_light{true};
```

Use in if and else statement :
```cpp
if(red_light == true){
      std::cout << "Stop!" << std::endl;
   }else{
      std::cout << "Go through!" << std::endl;
   }

   if(green_light){
      std::cout << "The light is green!" << std::endl;
   }else{
      std::cout << "The light is NOT green!" << std::endl;
   }
```

Printing a bool in c++
```cpp
//Printing out a bool
   //1 -->> true
   //0 -->> false
   std::cout << std::endl;
   std::cout << "red_light : " << red_light << std::endl;
   std::cout << "green_light : " << green_light << std::endl;
```
`std::boolalpha` is an I/O manipulator in C++ that makes bool values print as true or false instead of 1 or 0.
```cpp
bool state{false};

std::cout << state << "\n";       // Output: 0
std::cout << std::boolalpha;
std::cout << state << "\n";       // Output: false
```

## Characters and Text
`char` is a data type that stores a single character (like 'A'), represented as a small integer using 1 byte (8 bits). It can also store numeric ASCII values (e.g., char `c = 65; // 'A'`).
Signed char: range −128 to 127

Unsigned char: range 0 to 255

Used for text, character arrays, and strings.
``` cpp
char character1{'a'};
std::cout << character1 << std::endl;

char value = 65; //ASCII character code for 'A'
std::cout << "value : " << value << std::endl; // A
``` 
**It is possible to assign a valid ASCII code to a char variable, and the corresponding character will be stored in. You can choose to interpret that either as a character or a regular integral value.**

## Auto type
**It lets the compiler deduce the type.**
It is used when you dont want to explicitly type the type of variable and let the compiler deduce the type.

```cpp
auto var1 {12};
auto var2 {13.0};
auto var3 {14.0f};
auto var4 {15.0l};
auto var5 {'e'};

//int modifier suffixes
auto var6 { 123u}; // unsigned
auto var7 { 123ul}; //unsigned long
auto var8 { 123ll}; // long long
```


## Assignments
Bro u know how to assign value to variable
Just a note:
```cpp
//Auto type deduction
//Careful about auto assignments
auto var3 {333u}; // Declare and initialize with type deduction

var3 = -22; // Assign negative number. DANGER!

std::cout << "var3 : " << var3 << std::endl;

```


