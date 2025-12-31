# C++ Style Guide for CSC 126

Consistent code style makes programs easier to read, understand, and debug. Follow these guidelines for all assignments.

## File Structure

Every program file should have this structure:

```cpp
// Brief description of the program
// Author: Your Name
// Date: Month Year

#include <iostream>
#include <string>
// other includes

using namespace std;

// Function prototypes (if any)

int main() {
    // Main program code

    return 0;
}

// Function definitions (if any)
```

## Naming Conventions

### Variables
Use camelCase starting with a lowercase letter:
```cpp
int studentAge;
double accountBalance;
string firstName;
bool isValid;
```

### Constants
Use UPPER_SNAKE_CASE:
```cpp
const double TAX_RATE = 0.08;
const int MAX_SIZE = 100;
const string DEFAULT_NAME = "Unknown";
```

### Functions
Use camelCase starting with a lowercase letter (same as variables):
```cpp
int calculateTotal();
void printReport();
bool isEven(int number);
```

### What NOT to do
```cpp
int X;              // Not descriptive
int my_variable;    // Use camelCase instead
int MYAGE;          // Looks like a constant
int 2ndNumber;      // Cannot start with digit
```

## Indentation and Spacing

Use 4 spaces for each indentation level. Be consistent.

### Good
```cpp
if (score >= 60) {
    cout << "Pass" << '\n';
} else {
    cout << "Fail" << '\n';
}
```

### Bad
```cpp
if(score>=60){
cout<<"Pass"<<'\n';
}else{
cout<<"Fail"<<'\n';
}
```

## Braces

Use the "one true brace style" (opening brace on the same line):

```cpp
if (condition) {
    // code
}

for (int i = 0; i < n; i++) {
    // code
}

void myFunction() {
    // code
}
```

Always use braces, even for single-line bodies:

### Good
```cpp
if (x > 0) {
    cout << "positive";
}
```

### Avoid
```cpp
if (x > 0)
    cout << "positive";  // Works but harder to maintain
```

## Comments

### When to Comment
- At the top of every file (description, author, date)
- Before complex logic
- To explain "why" not "what"

### Good Comments
```cpp
// Calculate tax only for purchases over $50
if (total > 50.0) {
    tax = total * TAX_RATE;
}

// Binary search requires sorted array
sort(arr, arr + size);
```

### Bad Comments
```cpp
// Add 1 to x
x++;

// Set y to 5
y = 5;
```

These comments just repeat the code and add no value.

## Line Length

Keep lines under 80 characters when possible. Break long statements:

```cpp
cout << "This is a very long message that should be "
     << "split across multiple lines for readability" << '\n';

if (condition1 && condition2 &&
    condition3 && condition4) {
    // code
}
```

## Blank Lines

Use blank lines to separate logical sections:

```cpp
// Input section
cout << "Enter your name: ";
cin >> name;

// Processing section
name = toUppercase(name);

// Output section
cout << "Hello, " << name << "!" << '\n';
```

## Magic Numbers

Avoid unexplained numbers in your code. Use named constants:

### Bad
```cpp
if (score >= 60) {  // What is 60?
    total = price * 1.08;  // What is 1.08?
}
```

### Good
```cpp
const int PASSING_SCORE = 60;
const double TAX_RATE = 0.08;

if (score >= PASSING_SCORE) {
    total = price * (1 + TAX_RATE);
}
```

## Operators and Spacing

Put spaces around operators:

### Good
```cpp
int result = a + b;
if (x >= 0 && x <= 100) {
    y = x * 2;
}
```

### Bad
```cpp
int result=a+b;
if(x>=0&&x<=100){
    y=x*2;
}
```

## Functions

### Keep Functions Short
A function should do one thing well. If a function is more than 30-40 lines, consider breaking it up.

### Use Meaningful Names
The name should describe what the function does:
- `calculateAverage()` not `calc()`
- `isValidEmail()` not `check()`
- `printReceipt()` not `output()`

### Document Parameters
```cpp
// Returns the average of the values in the array
// Parameters:
//   arr - the array of integers
//   size - the number of elements in the array
// Returns: the average as a double
double calculateAverage(int arr[], int size) {
    // implementation
}
```

## Example of Well-Formatted Code

```cpp
// Grade Calculator
// Author: John Smith
// Date: Spring 2026
// This program calculates the average of test scores and assigns a grade.

#include <iostream>
#include <iomanip>
using namespace std;

// Constants
const int NUM_TESTS = 3;
const int GRADE_A_MIN = 90;
const int GRADE_B_MIN = 80;
const int GRADE_C_MIN = 70;
const int GRADE_D_MIN = 60;

// Function prototypes
double calculateAverage(int scores[], int size);
char determineGrade(double average);

int main() {
    int scores[NUM_TESTS];

    // Get test scores from user
    cout << "Enter " << NUM_TESTS << " test scores:" << '\n';
    for (int i = 0; i < NUM_TESTS; i++) {
        cout << "Test " << (i + 1) << ": ";
        cin >> scores[i];
    }

    // Calculate and display results
    double average = calculateAverage(scores, NUM_TESTS);
    char grade = determineGrade(average);

    cout << fixed << setprecision(1);
    cout << '\n';
    cout << "Average: " << average << '\n';
    cout << "Grade: " << grade << '\n';

    return 0;
}

// Calculate the average of scores in an array
double calculateAverage(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / size;
}

// Determine letter grade based on average
char determineGrade(double average) {
    if (average >= GRADE_A_MIN) {
        return 'A';
    } else if (average >= GRADE_B_MIN) {
        return 'B';
    } else if (average >= GRADE_C_MIN) {
        return 'C';
    } else if (average >= GRADE_D_MIN) {
        return 'D';
    } else {
        return 'F';
    }
}
```
