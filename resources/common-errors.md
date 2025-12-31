# Common C++ Errors and How to Fix Them

This guide covers the most frequent errors beginners encounter and how to resolve them.

## Compilation Errors

### 1. Missing Semicolon

**Error message:** `expected ';' before...`

**Problem:**
```cpp
int x = 5
cout << x;
```

**Fix:** Add the semicolon:
```cpp
int x = 5;
cout << x;
```

---

### 2. Undeclared Variable

**Error message:** `'variableName' was not declared in this scope`

**Problem:**
```cpp
cout << myVariable;  // Never declared
```

**Fix:** Declare the variable first:
```cpp
int myVariable = 10;
cout << myVariable;
```

---

### 3. Missing Include

**Error message:** `'string' was not declared` or `'cout' was not declared`

**Problem:**
```cpp
int main() {
    string name = "Alice";  // Missing #include <string>
}
```

**Fix:** Add the appropriate include:
```cpp
#include <iostream>
#include <string>
```

---

### 4. Mismatched Braces

**Error message:** `expected '}' at end of input`

**Problem:**
```cpp
int main() {
    if (x > 5) {
        cout << "big";
    // Missing closing brace for if
}
```

**Fix:** Match all opening braces with closing braces. Use consistent indentation to make this easier to spot.

---

### 5. Wrong Quotes for char vs string

**Error message:** `invalid conversion from 'const char*' to 'char'`

**Problem:**
```cpp
char grade = "A";   // Wrong: double quotes
string name = 'Bob'; // Wrong: single quotes
```

**Fix:**
```cpp
char grade = 'A';    // Single quotes for char
string name = "Bob"; // Double quotes for string
```

---

## Logic Errors

### 6. Assignment Instead of Comparison

**Problem:** Program runs but gives wrong results
```cpp
if (x = 5) {  // Always true! Assigns 5 to x
```

**Fix:**
```cpp
if (x == 5) {  // Compares x to 5
```

---

### 7. Integer Division

**Problem:** Result is truncated
```cpp
double average = 7 / 2;  // average is 3.0, not 3.5
```

**Fix:** Make at least one operand a double:
```cpp
double average = 7.0 / 2;  // average is 3.5
double average = static_cast<double>(7) / 2;
```

---

### 8. Off-by-One in Loops

**Problem:** Loop runs too many or too few times
```cpp
for (int i = 0; i <= 10; i++) {  // Runs 11 times
for (int i = 1; i < 10; i++) {   // Runs 9 times
```

**Fix:** Carefully consider the starting value and condition:
```cpp
for (int i = 0; i < 10; i++) {  // Runs exactly 10 times (0-9)
for (int i = 1; i <= 10; i++) { // Runs exactly 10 times (1-10)
```

---

### 9. Infinite Loop

**Problem:** Program never stops
```cpp
int i = 0;
while (i < 10) {
    cout << i;
    // Forgot i++
}
```

**Fix:** Ensure the loop variable is updated:
```cpp
int i = 0;
while (i < 10) {
    cout << i;
    i++;
}
```

---

### 10. Forgetting break in switch

**Problem:** Multiple cases execute
```cpp
switch (day) {
    case 1: cout << "Monday";
    case 2: cout << "Tuesday";  // Also prints!
}
```

**Fix:** Add break after each case:
```cpp
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
}
```

---

## Runtime Errors

### 11. Array Index Out of Bounds

**Problem:** Accessing memory outside the array
```cpp
int arr[5];
arr[5] = 10;  // Invalid! Valid indices are 0-4
```

**Fix:** Keep indices within 0 to size-1:
```cpp
int arr[5];
arr[4] = 10;  // Last valid index
```

---

### 12. Division by Zero

**Problem:** Dividing by zero crashes the program
```cpp
int result = 10 / 0;  // Crash!
```

**Fix:** Check before dividing:
```cpp
if (divisor != 0) {
    int result = 10 / divisor;
}
```

---

### 13. Uninitialized Variable

**Problem:** Variable contains garbage
```cpp
int sum;
sum = sum + 10;  // sum started as garbage!
```

**Fix:** Initialize variables:
```cpp
int sum = 0;
sum = sum + 10;
```

---

## Input Errors

### 14. cin Buffer Issues

**Problem:** getline reads empty string after cin >>
```cpp
int age;
string name;
cin >> age;
getline(cin, name);  // Reads empty string!
```

**Fix:** Clear the buffer:
```cpp
int age;
string name;
cin >> age;
cin.ignore();
getline(cin, name);
```

---

### 15. Type Mismatch in Input

**Problem:** User enters text when number expected
```cpp
int age;
cin >> age;  // User types "twenty"
```

**Fix:** Validate input or inform users what format to use. For beginners, assume valid input and document expected format clearly.

---

## Quick Debugging Tips

1. **Read the error message carefully** - it tells you the line number
2. **Check the line BEFORE the error** - the mistake is often there
3. **Add cout statements** to see variable values during execution
4. **Comment out code** to isolate the problem
5. **Use a debugger** to step through code line by line
6. **Match all braces and parentheses** - use consistent indentation
7. **Check for typos** - C++ is case-sensitive
