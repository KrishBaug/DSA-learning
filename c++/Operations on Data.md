# Operations of Data Types

# Basics operations
You can do basic operations like
* add `+`
* substract `-`
* Multiply `*`
* Division `/`

**Note :** when dividing with integral datatypes `int` when result is a fraction then it would round of to lower integer just like greatest integer function [G.I.F]

* Modulus `%` used to get the remainder after divion.
```cpp
int x = 3 % 2;
// x is 1
int y = 5 % 3;
//y is 2
```

In C++, operator **precedence** decides which operator runs first, and **associativity** decides direction when precedence is equal.

Precedence: Higher precedence → evaluated first.

Associativity:

Left-to-right (e.g., + - * / % < > ==): evaluate from left side first.

Right-to-left (e.g., = += -= *=, ?:, ++ -- (prefix)): evaluate from right side first.

```cpp
int x = 2 + 3 * 4;    // * before + → x = 14
int y = a = b = c;    // = is right-to-left → a = (b = c)
```

## Prefix and postfix addition
In C++:

* Prefix (++x / --x) → Changes the value before using it in the expression.

* Postfix (x++ / x--) → Uses the value first, then changes it after.

```cpp 
int x = 5;
cout << ++x; // 6 (increment, then print) (suffix)
cout << x++; // 6 (print, then increment to 7) (Postfix)
// In this line is excuted with x = 6, then increment to x = 7
```

## Compound Operators
compound assignment operators perform an operation and assignment in one step.

```cpp
int x = 10;

x += 5;   // x = x + 5 --> 15
x -= 3;   // x = x - 3 → 7
x *= 2;   // x = x * 2 → 24
x /= 4;   // x = x / 4 → 6
x %= 4;   // x = x % 4 → 2

x &= 1;   // x = x & 1 (bitwise AND) → 0
x |= 2;   // x = x | 2 (bitwise OR)  → 2
x ^= 3;   // x = x ^ 3 (bitwise XOR) → 1

x <<= 2;  // x = x << 2 (left shift) → 4
x >>= 1;  // x = x >> 1 (right shift)→ 2
```

## Relational operators
relational operators compare two values and return a bool (true or false).

| Operator | Meaning                  | Example (`a=5, b=3`) | Result |
| -------- | ------------------------ | -------------------- | ------ |
| `==`     | Equal to                 | `a == b`             | false  |
| `!=`     | Not equal to             | `a != b`             | true   |
| `<`      | Less than                | `a < b`              | false  |
| `>`      | Greater than             | `a > b`              | true   |
| `<=`     | Less than or equal to    | `a <= b`             | false  |
| `>=`     | Greater than or equal to | `a >= b`             | true   |

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << (a == b) << "  // Equal to\n";             // false (0)
    cout << (a != b) << "  // Not equal to\n";         // true (1)
    cout << (a < b)  << "  // Less than\n";            // false (0)
    cout << (a > b)  << "  // Greater than\n";         // true (1)
    cout << (a <= b) << "  // Less than or equal to\n";// false (0)
    cout << (a >= b) << "  // Greater than or equal to\n";// true (1)

    return 0;
}
```

## Logical operators
| Operator | Meaning     | Example (`a=true, b=false`) | Result |
| -------- | ----------- | --------------------------- | ------ |
| `&&`     | Logical AND | `a && b`                    | false  |
| `\|\|`   | Logical OR  | `a \|\| b`                  | true   |
| `!`      | Logical NOT | `!a`                        | false  |

used in if and else statement


## Output formatting
In C++, output formatting controls how data is displayed using std::cout and manipulators from <iomanip>, <ios>

1. `std::endl` : inserts a newline (\n) into the output stream and flushes the buffer.
2. `std::flush`: std::flush forces the output buffer to be written to the output immediately without adding a newline.
3. `std::setw`: sets the width of the next output field to n characters (from <iomanip>).
   Example:
   ``` cpp
    //std::setw() : Adjusts the field with for the item about to be printed. 
    //The setw() manipulator only affects the next value to be printed.
    
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;
    
    std::cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

   ```

4. Justification: 
   In C++, justification controls text alignment in an output field (needs <iomanip>):

    * std::left → align to left.

    * std::right → align to right (default).

    * std::internal → pad between sign and number.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 42;

    cout << left     << setw(10) << num << "Left aligned\n";
    cout << right    << setw(10) << num << "Right aligned\n";
    cout << internal << setw(10) << -num << "Internal aligned\n";

    return 0;
}

```

5. `std::fill` -> To set the fill charaxter in place of space empty character.
6. `std::boolaplha` & `std::noboolalpha`:
   In C++:

std::boolalpha → prints true / false instead of 1 / 0.

std::noboolalpha → switches back to printing 1 / 0.

``` cpp
#include <iostream>
using namespace std;

int main() {
    bool flag = true;

    cout << flag << "\n";           // 1 (default)
    cout << boolalpha << flag << "\n";  // true
    cout << noboolalpha << flag << "\n"; // 1

    return 0;
}
```

## Limits 
Using limit library `<library>`
```cpp

```

| Type                 | Min (`min()`)              | Max (`max()`)              | Lowest (`lowest()`) |
| -------------------- | -------------------------- | -------------------------- | ------------------- |
| `signed char`        | -128                       | 127                        | -128                |
| `unsigned char`      | 0                          | 255                        | 0                   |
| `short`              | -32,768                    | 32,767                     | -32,768             |
| `unsigned short`     | 0                          | 65,535                     | 0                   |
| `int`                | -2,147,483,648             | 2,147,483,647              | -2,147,483,648      |
| `unsigned int`       | 0                          | 4,294,967,295              | 0                   |
| `long` (32-bit)      | -2,147,483,648             | 2,147,483,647              | -2,147,483,648      |
| `unsigned long`      | 0                          | 4,294,967,295              | 0                   |
| `long long`          | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807  | same as min         |
| `unsigned long long` | 0                          | 18,446,744,073,709,551,615 | 0                   |
| `float`              | \~1.17549e-38              | \~3.40282e+38              | \~-3.40282e+38      |
| `double`             | \~2.22507e-308             | \~1.79769e+308             | \~-1.79769e+308     |
| `long double`\*      | \~3.3621e-4932             | \~1.18973e+4932            | \~-1.18973e+4932    |

## Math functions
Using cmath library `<cmath>`
the <cmath> library provides mathematical functions and constants for floating-point and integer operations

1. Basic Arithematic Functions
    | Function         | Purpose                  | Example              |
    | ---------------- | ------------------------ | -------------------- |
    | `std::abs(x)`    | Absolute value           | `abs(-5) → 5`        |
    | `std::fabs(x)`   | Absolute (float/double)  | `fabs(-3.14) → 3.14` |
    | `std::fmod(x,y)` | Floating-point remainder | `fmod(5.3, 2) → 1.3` |


