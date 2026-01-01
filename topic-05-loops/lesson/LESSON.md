# Topic 05: Repetition Structures (Loops)

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250719173109620611/Forloop.webp" alt="For Loop Flowchart" width="400">
</p>
<p align="center"><em>The for loop flowchart showing initialization, condition check, and update steps</em></p>

## Learning Objectives

By the end of this lesson, you will be able to:
- Write `while` loops for condition-based repetition
- Write `for` loops for counting-based repetition
- Write `do-while` loops when at least one execution is required
- Use nested loops for multi-dimensional problems
- Use `break` and `continue` for loop control
- Implement counters and accumulators

## Why This Matters

Loops let you process thousands of records, validate user input until correct, animate graphics, and more. Any task that involves repetition needs loops. Without them, you would have to write the same code hundreds of times.

## Core Concepts

### Concept 1: The while Loop

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250719173109511150/While-loop.webp" alt="While Loop Flowchart" width="400">
</p>
<p align="center"><em>The while loop checks the condition before each iteration</em></p>

The `while` loop repeats code as long as a condition is true:

```cpp
while (condition) {
    // Code to repeat
}
```

Example:
```cpp
int count = 1;

while (count <= 5) {
    cout << count << " ";
    count++;
}
// Output: 1 2 3 4 5
```

**Warning:** If the condition never becomes false, you have an infinite loop!

### Concept 2: The for Loop

Use `for` when you know how many times to repeat:

```cpp
for (initialization; condition; update) {
    // Code to repeat
}
```

Example:
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
// Output: 1 2 3 4 5
```

**Parts of a for loop:**
- `int i = 1` - initialization (runs once at start)
- `i <= 5` - condition (checked before each iteration)
- `i++` - update (runs after each iteration)

### Concept 3: The do-while Loop

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250719173109396294/Do-while-loop.webp" alt="Do-While Loop Flowchart" width="400">
</p>
<p align="center"><em>The do-while loop executes at least once before checking the condition</em></p>

The `do-while` loop runs at least once, then checks the condition:

```cpp
do {
    // Code to repeat
} while (condition);
```

Example (input validation):
```cpp
int number;

do {
    cout << "Enter a positive number: ";
    cin >> number;
} while (number <= 0);

cout << "You entered: " << number << '\n';
```

### Concept 4: Counters and Accumulators

**Counter:** Tracks how many times something happens
```cpp
int count = 0;
for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
        count++;  // Count even numbers
    }
}
cout << "Even numbers: " << count << '\n';
```

**Accumulator:** Collects a running total
```cpp
int sum = 0;
for (int i = 1; i <= 10; i++) {
    sum += i;  // Add each number to sum
}
cout << "Sum: " << sum << '\n';  // Output: 55
```

### Concept 5: Nested Loops

Loops inside loops - useful for grids, tables, and patterns:

```cpp
for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= 4; col++) {
        cout << "* ";
    }
    cout << '\n';
}
```

Output:
```
* * * *
* * * *
* * * *
```

### Concept 6: break and continue

**break:** Exit the loop immediately
```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Stop when i reaches 5
    }
    cout << i << " ";
}
// Output: 1 2 3 4
```

**continue:** Skip the rest of this iteration
```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Skip 3
    }
    cout << i << " ";
}
// Output: 1 2 4 5
```

### Concept 7: Common Loop Patterns

**Finding a maximum:**
```cpp
int max = INT_MIN;  // Start with smallest possible
for (int i = 0; i < n; i++) {
    if (values[i] > max) {
        max = values[i];
    }
}
```

**Sentinel-controlled loop:**
```cpp
int number;
cout << "Enter numbers (-1 to stop): ";

cin >> number;
while (number != -1) {
    // Process number
    cin >> number;
}
```

**Menu-driven program:**
```cpp
int choice;
do {
    cout << "1. Option A\n";
    cout << "2. Option B\n";
    cout << "3. Exit\n";
    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
        case 1: /* do A */; break;
        case 2: /* do B */; break;
    }
} while (choice != 3);
```

## Quick Reference

### while
```cpp
while (condition) { }
```

### for
```cpp
for (init; condition; update) { }
```

### do-while
```cpp
do { } while (condition);
```

### Loop Control
```cpp
break;     // Exit loop
continue;  // Skip to next iteration
```

## Common Errors

### 1. Infinite Loop
```cpp
int i = 1;
while (i <= 10) {
    cout << i;
    // Forgot i++!
}
```

### 2. Off-by-One Error
```cpp
for (int i = 0; i <= 10; i++)  // Runs 11 times, not 10
for (int i = 1; i < 10; i++)   // Runs 9 times, not 10
```

### 3. Wrong Loop Type
```cpp
// When you need at least one execution, use do-while
int input;
while (input < 0) {  // input is uninitialized!
    cin >> input;
}
```

### 4. Modifying Loop Variable Incorrectly
```cpp
for (int i = 1; i <= 10; i++) {
    i = i + 2;  // Confusing! Let the for handle updates
}
```
