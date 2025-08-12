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

