# Topic 03: Arithmetic and Expressions

## Learning Objectives

By the end of this lesson, you will be able to:
- Use arithmetic operators to perform calculations
- Understand the difference between integer and floating-point division
- Apply operator precedence rules correctly
- Use compound assignment and increment/decrement operators
- Convert between data types using casting

## Why This Matters

Almost every program performs calculations. Games calculate scores and physics. Business software computes prices and taxes. Scientific programs process data and run simulations. Understanding how C++ handles arithmetic is essential for writing correct, bug-free programs.

## Core Concepts

### Concept 1: Basic Arithmetic Operators

C++ provides five basic arithmetic operators:

| Operator | Operation | Example | Result |
|----------|-----------|---------|--------|
| `+` | Addition | `7 + 3` | 10 |
| `-` | Subtraction | `7 - 3` | 4 |
| `*` | Multiplication | `7 * 3` | 21 |
| `/` | Division | `7.0 / 3` | 2.333... |
| `%` | Modulo (remainder) | `7 % 3` | 1 |

```cpp
int a = 10, b = 3;

cout << a + b << '\n';  // 13
cout << a - b << '\n';  // 7
cout << a * b << '\n';  // 30
cout << a / b << '\n';  // 3 (integer division!)
cout << a % b << '\n';  // 1
```

### Concept 2: Integer vs. Floating-Point Division

This is one of the most common sources of bugs for beginners!

**Integer division** truncates (removes) the decimal part:
```cpp
int result = 7 / 2;     // result is 3, not 3.5!
cout << 10 / 4;         // outputs 2
cout << 1 / 2;          // outputs 0
```

**Floating-point division** keeps the decimal:
```cpp
double result = 7.0 / 2;    // result is 3.5
cout << 10.0 / 4;           // outputs 2.5
cout << 1.0 / 2;            // outputs 0.5

// At least one operand must be a floating-point type
cout << 7 / 2.0;            // outputs 3.5
cout << 7.0 / 2.0;          // outputs 3.5
```

**Common Mistake:**
```cpp
double average = (80 + 90 + 85) / 3;  // average is 85.0, not 85.0!
// 255 / 3 = 85 (integer division), then stored as 85.0

// Fix: Make at least one value a double
double average = (80 + 90 + 85) / 3.0;  // average is 85.0
```

### Concept 3: The Modulo Operator (%)

The modulo operator returns the **remainder** after division:

```cpp
cout << 10 % 3;   // 1 (10 = 3*3 + 1)
cout << 15 % 5;   // 0 (15 = 5*3 + 0)
cout << 7 % 10;   // 7 (7 = 10*0 + 7)
```

**Common uses:**
- Check if a number is even: `if (num % 2 == 0)`
- Get the last digit: `int lastDigit = num % 10;`
- Wrap around values: `int hour = (hour + 1) % 24;`

**Note:** Modulo only works with integers, not doubles.

### Concept 4: Operator Precedence

C++ follows standard mathematical order of operations:

1. Parentheses `( )`
2. Multiplication, Division, Modulo `* / %`
3. Addition, Subtraction `+ -`

```cpp
cout << 2 + 3 * 4;      // 14 (not 20)
cout << (2 + 3) * 4;    // 20

cout << 10 - 4 / 2;     // 8 (not 3)
cout << (10 - 4) / 2;   // 3
```

**When in doubt, use parentheses!** They make your code clearer and prevent mistakes.

### Concept 5: Type Casting

Sometimes you need to convert between types:

```cpp
int total = 255;
int count = 3;

// Integer division - wrong!
double average = total / count;  // 85.0 (lost precision)

// Type cast to force floating-point division
double average = static_cast<double>(total) / count;  // 85.0
```

**Syntax:** `static_cast<type>(expression)`

```cpp
double price = 19.99;
int dollars = static_cast<int>(price);  // 19 (truncates decimal)

char letter = 'A';
int asciiValue = static_cast<int>(letter);  // 65
```

### Concept 6: Compound Assignment Operators

These combine an operation with assignment:

| Operator | Equivalent To | Example |
|----------|---------------|---------|
| `+=` | `x = x + n` | `x += 5;` |
| `-=` | `x = x - n` | `x -= 3;` |
| `*=` | `x = x * n` | `x *= 2;` |
| `/=` | `x = x / n` | `x /= 4;` |
| `%=` | `x = x % n` | `x %= 10;` |

```cpp
int score = 100;

score += 10;   // score is now 110
score -= 25;   // score is now 85
score *= 2;    // score is now 170
score /= 10;   // score is now 17
```

### Concept 7: Increment and Decrement Operators

`++` adds 1, `--` subtracts 1:

```cpp
int count = 5;

count++;   // count is now 6
count--;   // count is now 5

++count;   // count is now 6
--count;   // count is now 5
```

**Prefix vs. Postfix** (advanced):
- `++x` increments, then returns the new value
- `x++` returns the current value, then increments

```cpp
int x = 5;
cout << ++x;  // outputs 6, x is 6
cout << x++;  // outputs 6, x is now 7
```

For beginners, just use these on their own line to avoid confusion.

## Putting It Together

```cpp
// Program: Grade Calculator
// Demonstrates arithmetic operations

#include <iostream>
using namespace std;

int main() {
    // Input: three test scores
    int test1 = 85;
    int test2 = 92;
    int test3 = 78;

    // Calculate sum
    int total = test1 + test2 + test3;

    // Calculate average (use 3.0 to force floating-point division)
    double average = total / 3.0;

    // Calculate percentage of perfect score (300)
    double percentage = (static_cast<double>(total) / 300) * 100;

    // Display results
    cout << "Test 1: " << test1 << '\n';
    cout << "Test 2: " << test2 << '\n';
    cout << "Test 3: " << test3 << '\n';
    cout << "Total: " << total << '\n';
    cout << "Average: " << average << '\n';
    cout << "Percentage: " << percentage << "%" << '\n';

    return 0;
}
```

## Quick Reference

### Arithmetic Operators
```cpp
+ - * / %
```

### Compound Assignment
```cpp
+= -= *= /= %=
```

### Increment/Decrement
```cpp
++ --
```

### Type Casting
```cpp
static_cast<double>(intVar)
static_cast<int>(doubleVar)
```

### Precedence (high to low)
1. `( )`
2. `* / %`
3. `+ -`

## Common Errors

### 1. Integer Division Surprise
```cpp
double half = 1 / 2;  // half is 0.0, not 0.5!
```
**Fix:** Use `1.0 / 2` or `1 / 2.0`

### 2. Modulo with Doubles
```cpp
double result = 5.5 % 2;  // Error!
```
**Fix:** Modulo only works with integers.

### 3. Precedence Mistakes
```cpp
int result = 10 + 5 * 2;  // 20, not 30
```
**Fix:** Use parentheses: `(10 + 5) * 2`

### 4. Overflow
```cpp
int big = 2000000000;
int result = big * 2;  // Overflow! Unpredictable value
```
**Fix:** Use `long long` for very large numbers.
