# User Defined Types

## Structures
A `struct` groups related variables into a single type.
```cpp
struct Vector {
    double* elem; // pointer to elements
    int sz;       // number of elements
};
```
* `double* elem` --> Points to dynamically allocated array of `double`s.
* `int sz` --> Stores how many elements are in the vector.

### Why initialized is needed
if we just write:
```cpp
Vector v;
```
* `v.elem` points to nothing yet (uninitialized)
* `v.sz` contains garbage value.
  we need to allocate memory before using it.

### Initializing the Vector.
```cpp
void vector_init(Vector& v, int s) {
    v.elem = new double[s]; // allocate memory on heap
    v.sz = s;               // store size
}
```
* `Vector& v` --> Pass by refrence so we can modify the original vector.
* `new double[s]`--> Allocates array of `s` doubles from free store (heap)

### Using the Vector
```cpp
double read_and_sum(int s) {
    Vector v;
    vector_init(v, s); // allocate and set size

    for (int i = 0; i != s; ++i)
        cin >> v.elem[i]; // input each element

    double sum = 0;
    for (int i = 0; i != s; ++i)
        sum += v.elem[i];

    return sum;
}
```
* We must manually delete memmory later
* For now, this is a simple demo - cleanup will be shown later with destructors.


### Accessing struct members
We use:
* `.` (dot) for normal variables and references 
* `->` for pointers

```cpp
void f(Vector v, Vector& rv, Vector* pv) {
    int i1 = v.sz;     // access through object name
    int i2 = rv.sz;    // access through reference
    int i3 = pv->sz;   // access through pointer
}
```


## Classes
A C++ class lets you group data and operation while hiding internal details. Public members form the interface (functions users call), private members store the hidden data.
`Vector` uses a pointer to store elements on the heap and a size variable, with a constructor to set them, `operator[]` for access, and `size()` for length.

```cpp
class Vector {
public:
    Vector(int s)                  // Constructor
        : elem{new double[s]},     // Allocate s doubles on heap
          sz{s} {}                 // Store size

    double& operator[](int i) {    // Index operator
        return elem[i];            // Gives access to element
    }

    int size() { return sz; }      // Returns number of elements

private:
    double* elem;                  // Pointer to heap array
    int sz;                        // Number of elements
};
```

```cpp
Vector v(6);       // Create vector with 6 doubles
v[0] = 3.14;       // Set element
int n = v.size();  // Get size
```
**Idea** Object = fixed size handle -> manages variable size data on heap, accessed only via public functions.

## Enumerations
`enum class` in C++ creates a scoped, strongly typed set of named constants, preventing accidentall mixing between different enums or with integers.
`enums` which allows implicit integer conversion and unscoped names.

```cpp
// Strongly typed and scoped enumeration
enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

Color col = Color::red;              // OK
Traffic_light light = Traffic_light::red; // OK

// Prevents accidental mix
// Color x1 = red;                   // ❌ error: no scope
// Color y2 = Traffic_light::red;    // ❌ wrong type

// Explicit integer conversion
int i = int(Color::red);              // OK
Color c = Color{2};                   // OK: explicit init

// Define operator for enum
Traffic_light& operator++(Traffic_light& t) {
    switch (t) {
        case Traffic_light::green:  return t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
        case Traffic_light::red:    return t = Traffic_light::green;
    }
}

// Abbreviate with 'using enum'
Traffic_light& operator++(Traffic_light& t) {
    using enum Traffic_light;
    switch (t) {
        case green:  return t = yellow;
        case yellow: return t = red;
        case red:    return t = green;
    }
}

```

```cpp
// Plain enum (unscoped, implicit int conversion)
enum ColorPlain { red, green, blue };

int col = green;     // col = 1
ColorPlain c2 = red; // No scope needed
```

**Idea:**
* `enum class` --> Safer, scoped, type-checked, no implicit int conversion.
* `enum` --> older, unscoped, allows implicit int conversion, easier to misuse.

## Union
* A `union` is like a `struct`, but all mmembers share the same memory address.
* **Memory**: Size of union = size of its largest member.
* **Limitation**: Can store a value for only one member at a time.

Ex without Union
```cpp
enum class Type { ptr, num };

struct Entry {
    string name;
    Type t;
    Node* p; // valid if t == ptr
    int i;   // valid if t == num
};
```
* **Problem**: `p` and `i` never used together, but memory is allocated for both --> waste.


Ex - with Union
```cpp
union Value {
    Node* p;
    int i;
};

struct Entry {
    string name;
    Type t; // "tag" to track which value is stored
    Value v;
};

```
* Memory Optimization: 
  * `Value::p` and `Value::i` occupy the same location in memory.
  * Only the larger of the two sizes determines total size.

### Safer Alternative - std::Variant
```cpp
struct Entry {
    string name;
    variant<Node*, int> v;
};

void f(Entry* pe) {
    if (holds_alternative<int>(pe->v))
        cout << get<int>(pe->v);
}

```
* `variant` automatically remembers the stored type.
* Safer and simpler than a raw union.
* Slightly more overhead than a union, but avoids type mismatch errors


