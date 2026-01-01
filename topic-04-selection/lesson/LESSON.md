# Topic 04: Selection Structures

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20230424101456/Conditional-Statements-in-c.webp" alt="Decision Making Flowchart" width="650">
</p>
<p align="center"><em>Different types of conditional statements available in C++</em></p>

## Learning Objectives

By the end of this lesson, you will be able to:
- Use relational operators to compare values
- Write `if` and `if-else` statements to make decisions
- Combine conditions using logical operators
- Create nested selection structures for complex decisions
- Use `switch` statements for multi-way branching

## Why This Matters

Real programs need to make decisions. A login system checks if passwords match. A game determines if a player won or lost. A shopping cart applies discounts based on conditions. Without selection structures, programs would do the same thing every time regardless of input.

## Core Concepts

### Concept 1: Relational Operators

Relational operators compare two values and return `true` or `false`:

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `<` | Less than | `5 < 10` | true |
| `>` | Greater than | `5 > 10` | false |
| `<=` | Less than or equal | `5 <= 5` | true |
| `>=` | Greater than or equal | `10 >= 5` | true |
| `==` | Equal to | `5 == 5` | true |
| `!=` | Not equal to | `5 != 10` | true |

**Common Mistake:**
```cpp
if (x = 5)   // WRONG: Assignment, not comparison!
if (x == 5)  // CORRECT: Comparison
```

### Concept 2: The if Statement

The `if` statement executes code only when a condition is true:

```cpp
if (condition) {
    // Code here runs only if condition is true
}
```

Example:
```cpp
int age = 20;

if (age >= 18) {
    cout << "You are an adult." << '\n';
}
```

### Concept 3: The if-else Statement

Use `else` to specify what happens when the condition is false:

```cpp
if (condition) {
    // Runs if condition is true
} else {
    // Runs if condition is false
}
```

Example:
```cpp
int score = 75;

if (score >= 60) {
    cout << "You passed!" << '\n';
} else {
    cout << "You did not pass." << '\n';
}
```

### Concept 4: The else-if Chain

For multiple conditions, use `else if`:

```cpp
int score = 85;

if (score >= 90) {
    cout << "Grade: A" << '\n';
} else if (score >= 80) {
    cout << "Grade: B" << '\n';
} else if (score >= 70) {
    cout << "Grade: C" << '\n';
} else if (score >= 60) {
    cout << "Grade: D" << '\n';
} else {
    cout << "Grade: F" << '\n';
}
```

**Important:** Conditions are checked in order. Once one is true, the rest are skipped.

### Concept 5: Logical Operators

Combine multiple conditions:

| Operator | Meaning | Example |
|----------|---------|---------|
| `&&` | AND (both must be true) | `age >= 13 && age <= 19` |
| `\|\|` | OR (at least one must be true) | `day == 'S' \|\| day == 'U'` |
| `!` | NOT (reverses true/false) | `!isRaining` |

**AND (&&):** Both conditions must be true
```cpp
int age = 25;
bool hasLicense = true;

if (age >= 16 && hasLicense) {
    cout << "You can drive." << '\n';
}
```

**OR (||):** At least one condition must be true
```cpp
char day = 'S';

if (day == 'S' || day == 'U') {
    cout << "It's the weekend!" << '\n';
}
```

**NOT (!):** Reverses the condition
```cpp
bool isRaining = false;

if (!isRaining) {
    cout << "No umbrella needed." << '\n';
}
```

### Concept 6: Nested if Statements

You can put `if` statements inside other `if` statements:

```cpp
int age = 25;
bool hasTicket = true;

if (age >= 18) {
    if (hasTicket) {
        cout << "You may enter the venue." << '\n';
    } else {
        cout << "You need to buy a ticket." << '\n';
    }
} else {
    cout << "You must be 18 or older." << '\n';
}
```

Often, nested `if` statements can be simplified using `&&`:
```cpp
if (age >= 18 && hasTicket) {
    cout << "You may enter the venue." << '\n';
}
```

### Concept 7: The switch Statement

Use `switch` when comparing one variable against many specific values:

```cpp
int day = 3;

switch (day) {
    case 1:
        cout << "Monday" << '\n';
        break;
    case 2:
        cout << "Tuesday" << '\n';
        break;
    case 3:
        cout << "Wednesday" << '\n';
        break;
    case 4:
        cout << "Thursday" << '\n';
        break;
    case 5:
        cout << "Friday" << '\n';
        break;
    default:
        cout << "Weekend" << '\n';
}
```

**Important:** Always include `break` after each case, or execution will "fall through" to the next case.

**When to use switch vs if-else:**
- Use `switch` for exact value matching (integers, characters)
- Use `if-else` for ranges, inequalities, or complex conditions

### Concept 8: Comparing Strings

You can compare strings using `==` and `!=`:

```cpp
string name = "Alice";

if (name == "Alice") {
    cout << "Hello, Alice!" << '\n';
} else if (name == "Bob") {
    cout << "Hello, Bob!" << '\n';
} else {
    cout << "Hello, stranger!" << '\n';
}
```

For alphabetical comparison, use `<` and `>`:
```cpp
if (name < "M") {
    cout << "Your name is in the first half of the alphabet." << '\n';
}
```

## Putting It Together

```cpp
// Program: Ticket Price Calculator
// Demonstrates multiple selection structures

#include <iostream>
using namespace std;

int main() {
    int age;
    char dayType;  // 'W' for weekday, 'E' for weekend

    cout << "Enter your age: ";
    cin >> age;

    cout << "Weekday (W) or Weekend (E)? ";
    cin >> dayType;

    double price;

    // Determine base price by age
    if (age < 5) {
        price = 0;  // Free for under 5
    } else if (age < 13) {
        price = 8.00;  // Child price
    } else if (age >= 65) {
        price = 9.00;  // Senior price
    } else {
        price = 12.00;  // Adult price
    }

    // Apply weekend surcharge
    if (dayType == 'E' || dayType == 'e') {
        price += 2.00;
    }

    cout << "Your ticket price: $" << price << '\n';

    return 0;
}
```

## Quick Reference

### Relational Operators
```cpp
<  >  <=  >=  ==  !=
```

### Logical Operators
```cpp
&&  ||  !
```

### Selection Structures
```cpp
// Simple if
if (condition) { }

// if-else
if (condition) { } else { }

// else-if chain
if (cond1) { } else if (cond2) { } else { }

// switch
switch (var) {
    case val1: ...; break;
    case val2: ...; break;
    default: ...;
}
```

## Common Errors

### 1. Assignment Instead of Comparison
```cpp
if (x = 5)  // Wrong! This assigns 5 to x
if (x == 5) // Correct! This compares x to 5
```

### 2. Missing break in switch
```cpp
switch (choice) {
    case 1: cout << "One";     // Falls through!
    case 2: cout << "Two";     // Also executes
}
```

### 3. Incorrect Range Check
```cpp
if (age > 13 && age < 19)   // Excludes 13 and 19
if (age >= 13 && age <= 19) // Includes 13 and 19
```

### 4. Using || When && is Needed
```cpp
// Wrong: This is always true!
if (age < 13 || age > 65)  // "Child OR Senior"

// If you want "between 13 and 65":
if (age >= 13 && age <= 65)
```
