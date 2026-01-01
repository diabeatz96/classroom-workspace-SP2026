# Topic 06: Functions

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250721183542437329/Why-Use-Functions__.webp" alt="Why Use Functions" width="600">
</p>
<p align="center"><em>Functions help organize code into reusable, modular pieces</em></p>

## Learning Objectives

By the end of this lesson, you will be able to:
- Define and call functions
- Write functions with parameters and return values
- Understand the difference between void functions and value-returning functions
- Use function prototypes
- Explain variable scope
- Use pass by value and pass by reference appropriately

## Why This Matters

Functions are the building blocks of well-organized programs. Instead of writing one long main function, you break code into smaller, focused pieces. Each function does one job. This makes code reusable, testable, and easier to understand. Professional programs contain hundreds of functions.

## Core Concepts

### Concept 1: What is a Function?

A function is a named block of code that performs a specific task. You have already used functions like `main()` and `cout`.

**Basic function structure:**
```cpp
returnType functionName(parameters) {
    // Function body
    return value;  // if returnType is not void
}
```

**Example:**
```cpp
int add(int a, int b) {
    return a + b;
}
```

### Concept 2: Defining and Calling Functions

**Definition:** Create the function
```cpp
int square(int number) {
    return number * number;
}
```

**Call:** Use the function
```cpp
int result = square(5);  // result is 25
cout << square(3);       // outputs 9
```

### Concept 3: Parameters and Arguments

**Parameters:** Variables declared in the function definition
**Arguments:** Values passed when calling the function

```cpp
// num1 and num2 are parameters
int multiply(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int x = 5, y = 3;
    int product = multiply(x, y);  // x and y are arguments
    cout << multiply(4, 7);        // 4 and 7 are arguments
}
```

### Concept 4: Return Values

Functions can return a value to the caller:

```cpp
double calculateAverage(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    double avg = calculateAverage(80, 90, 85);
    cout << "Average: " << avg << '\n';
}
```

The `return` statement ends the function and sends the value back.

### Concept 5: Void Functions

Functions that do not return a value use `void`:

```cpp
void printGreeting(string name) {
    cout << "Hello, " << name << "!" << '\n';
    // No return statement needed (or use: return;)
}

int main() {
    printGreeting("Alice");  // Just call it, don't assign to variable
}
```

### Concept 6: Function Prototypes

A prototype declares a function before its full definition. This lets you define functions after main():

```cpp
#include <iostream>
using namespace std;

// Function prototypes (declarations)
int add(int a, int b);
void printResult(int value);

int main() {
    int sum = add(5, 3);
    printResult(sum);
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

void printResult(int value) {
    cout << "Result: " << value << '\n';
}
```

### Concept 7: Variable Scope

**Local variables:** Declared inside a function, only accessible there
```cpp
void myFunction() {
    int x = 10;  // x only exists inside this function
}

int main() {
    // cout << x;  // Error! x is not accessible here
}
```

**Parameters are local** to their function.

**Global variables:** Declared outside all functions (avoid these when possible):
```cpp
int globalVar = 100;  // Accessible everywhere (but not recommended)

void myFunction() {
    cout << globalVar;  // Can access it
}
```

### Concept 8: Pass by Value vs Pass by Reference

**Pass by Value:** Function gets a copy of the argument
```cpp
void increment(int num) {
    num++;  // Only changes the copy
}

int main() {
    int x = 5;
    increment(x);
    cout << x;  // Still 5! Original unchanged
}
```

**Pass by Reference:** Function can modify the original variable
```cpp
void increment(int &num) {  // Note the &
    num++;  // Changes the original variable
}

int main() {
    int x = 5;
    increment(x);
    cout << x;  // Now 6! Original changed
}
```

**When to use reference:**
- When the function needs to modify the original variable
- When passing large objects (for efficiency)
- When returning multiple values

**Example: Swap function**
```cpp
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    cout << x << " " << y;  // 10 5
}
```

## Putting It Together

```cpp
// Program demonstrating functions
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
double calculateCircleArea(double radius);
void displayResult(string label, double value);
void getPositiveNumber(double &num);

int main() {
    double radius;

    cout << "Circle Area Calculator" << '\n';
    cout << "=====================" << '\n';

    getPositiveNumber(radius);  // Pass by reference to get user input

    double area = calculateCircleArea(radius);
    displayResult("Area", area);

    return 0;
}

// Calculate circle area: returns the computed area
double calculateCircleArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

// Display a labeled result (void function)
void displayResult(string label, double value) {
    cout << label << ": " << value << '\n';
}

// Get a positive number from user (pass by reference)
void getPositiveNumber(double &num) {
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while (num <= 0);
}
```

## Quick Reference

### Function Definition
```cpp
returnType name(parameters) {
    // body
    return value;
}
```

### Void Function
```cpp
void name(parameters) {
    // body
}
```

### Function Prototype
```cpp
returnType name(parameters);
```

### Pass by Reference
```cpp
void modify(int &x) { }
```

## Common Errors

### 1. Missing Return Statement
```cpp
int getValue() {
    int x = 10;
    // Forgot return x;
}
```

### 2. Type Mismatch
```cpp
int calculate() {
    return 3.14;  // Returns 3, truncates!
}
```

### 3. Trying to Modify with Pass by Value
```cpp
void fix(int num) {  // Should be int &num
    num = 0;  // Does not change original!
}
```

### 4. Calling Without Parentheses
```cpp
myFunction;    // Wrong! Just refers to function
myFunction();  // Correct! Calls the function
```
