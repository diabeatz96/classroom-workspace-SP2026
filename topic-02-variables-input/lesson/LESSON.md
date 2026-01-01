# Topic 02: Variables and Input

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250714112214026299/Data-Type-in-C-2.webp" alt="C++ Data Types" width="650">
</p>
<p align="center"><em>C++ data types organized by category</em></p>

## Learning Objectives

By the end of this lesson, you will be able to:
- Declare variables of different data types
- Initialize variables with values
- Use `cin` to read user input
- Choose appropriate data types for different kinds of data
- Follow naming conventions for variables

## Why This Matters

Every useful program needs to work with data. When you build a calculator, you need to store numbers. When you create a game, you need to track scores and player names. When you write business software, you need to process orders and customer information. Variables are how programs remember and manipulate data.

## Core Concepts

### Concept 1: What is a Variable?

A variable is a named storage location in the computer's memory. Think of it as a labeled box where you can store a value.

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250122155858092295/Memory-Layout-of-C-Program.webp" alt="Memory Layout" width="450">
</p>
<p align="center"><em>How variables are stored in computer memory</em></p>

```cpp
int age = 25;
```

This creates a box labeled `age` that holds the integer value `25`.

**Three parts of a variable declaration:**
1. **Type** - What kind of data it holds (`int`)
2. **Name** - How you refer to it (`age`)
3. **Value** - What it contains (`25`)

### Concept 2: Data Types

C++ requires you to specify what type of data a variable will hold.

| Type | Description | Example Values |
|------|-------------|----------------|
| `int` | Whole numbers | -5, 0, 42, 1000 |
| `double` | Decimal numbers | 3.14, -0.5, 100.0 |
| `char` | Single character | 'A', '7', '$' |
| `bool` | True or false | true, false |
| `string` | Text (sequence of characters) | "Hello", "CSC 126" |

**Integer (int):**
```cpp
int count = 10;
int temperature = -5;
int population = 1000000;
```

**Double (decimal numbers):**
```cpp
double price = 19.99;
double pi = 3.14159;
double gpa = 3.75;
```

**Character (char):**
```cpp
char grade = 'A';
char initial = 'J';
char symbol = '@';
```
Note: Use single quotes for characters.

**Boolean (bool):**
```cpp
bool isStudent = true;
bool hasGraduated = false;
```

**String:**
```cpp
#include <string>  // Required for string type

string name = "Alice";
string course = "CSC 126";
string message = "Hello, World!";
```
Note: Use double quotes for strings. You need `#include <string>` at the top of your file.

**Common Mistakes:**
- Using double quotes for char: `char letter = "A";` - wrong!
- Using single quotes for string: `string name = 'Bob';` - wrong!
- Forgetting `#include <string>` when using strings

### Concept 3: Declaring and Initializing Variables

**Declaration** creates the variable. **Initialization** gives it a starting value.

```cpp
// Declaration and initialization together (preferred)
int score = 100;

// Declaration only, then assignment
int points;
points = 50;

// Multiple variables of the same type
int x = 1, y = 2, z = 3;
```

Always initialize your variables. Uninitialized variables contain garbage values.

```cpp
int mystery;           // Contains unknown garbage value!
cout << mystery;       // Unpredictable output - BAD!

int known = 0;         // Initialized to 0 - GOOD!
cout << known;         // Outputs: 0
```

### Concept 4: Reading Input with cin

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191113125616/C-basic-input-output.png" alt="C++ Input/Output" width="550">
</p>
<p align="center"><em>cin reads input from the user, cout displays output to the screen</em></p>

`cin` (pronounced "see-in") reads input from the user.

```cpp
int age;
cout << "Enter your age: ";
cin >> age;
cout << "You are " << age << " years old." << '\n';
```

The `>>` operator extracts data from the input stream and stores it in the variable.

**Reading different types:**

```cpp
int quantity;
double price;
char initial;
string firstName;

cout << "Enter quantity: ";
cin >> quantity;

cout << "Enter price: ";
cin >> price;

cout << "Enter your initial: ";
cin >> initial;

cout << "Enter your first name: ";
cin >> firstName;
```

**Reading multiple values:**

```cpp
int x, y;
cout << "Enter two numbers: ";
cin >> x >> y;  // User types: 5 10
cout << "You entered " << x << " and " << y << '\n';
```

**Common Mistakes:**
- Wrong operator direction: `cin << age;` - wrong!
- Forgetting to declare the variable first
- Not prompting the user (they won't know what to type)

### Concept 5: Reading Strings with Spaces

`cin >>` stops reading at whitespace. For strings with spaces, use `getline()`:

```cpp
string fullName;
cout << "Enter your full name: ";
getline(cin, fullName);
cout << "Hello, " << fullName << '\n';
```

**Mixing cin >> and getline:**

When you use `cin >>` followed by `getline()`, you need to clear the leftover newline:

```cpp
int age;
string name;

cout << "Enter your age: ";
cin >> age;
cin.ignore();  // Clear the leftover newline

cout << "Enter your full name: ";
getline(cin, name);
```

### Concept 6: Variable Naming Rules

**Rules (must follow):**
- Names can contain letters, digits, and underscores
- Names must start with a letter or underscore (not a digit)
- Names are case-sensitive (`Age` and `age` are different)
- Cannot use C++ keywords (`int`, `double`, `return`, etc.)

**Conventions (should follow):**
- Use meaningful, descriptive names
- Use `camelCase` for variables: `firstName`, `totalScore`
- Avoid single-letter names except for loop counters
- Do not start with underscore (reserved for special purposes)

**Good names:**
```cpp
int studentAge;
double accountBalance;
string customerName;
bool isLoggedIn;
```

**Bad names:**
```cpp
int x;          // Not descriptive
int MYAGE;      // All caps is for constants
int 2ndPlace;   // Cannot start with digit (error!)
int my-age;     // Cannot use hyphens (error!)
```

### Concept 7: Assignment and Reassignment

Variables can be changed after they are created:

```cpp
int score = 0;
cout << score << '\n';   // Outputs: 0

score = 100;
cout << score << '\n';   // Outputs: 100

score = score + 50;      // Add 50 to current value
cout << score << '\n';   // Outputs: 150
```

The `=` sign is the **assignment operator**. It stores the value on the right into the variable on the left.

## Putting It Together

Here is a complete program demonstrating variables and input:

```cpp
// Program: Student Information
// Demonstrates variables, data types, and input

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables for student information
    string name;
    int age;
    double gpa;
    char grade;
    bool isFullTime;

    // Get input from user
    cout << "===== Student Registration =====" << '\n';
    cout << '\n';

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "Enter your current grade (A-F): ";
    cin >> grade;

    cout << "Are you full-time? (1 for yes, 0 for no): ";
    cin >> isFullTime;

    // Display the information
    cout << '\n';
    cout << "===== Student Profile =====" << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "GPA: " << gpa << '\n';
    cout << "Grade: " << grade << '\n';
    cout << "Full-time: " << isFullTime << '\n';

    return 0;
}
```

## Quick Reference

### Data Types
```cpp
int whole = 42;
double decimal = 3.14;
char letter = 'A';
bool flag = true;
string text = "Hello";
```

### Input
```cpp
cin >> variable;              // Read single value
cin >> var1 >> var2;          // Read multiple values
getline(cin, stringVar);      // Read line with spaces
cin.ignore();                 // Clear newline buffer
```

### Variable Declaration
```cpp
int x;                // Declaration only
int y = 10;           // Declaration with initialization
int a, b, c;          // Multiple declarations
int p = 1, q = 2;     // Multiple with initialization
```

## Common Errors

### 1. Uninitialized Variable
```cpp
int total;
cout << total;    // Garbage value! - BAD
```
**Fix:** Always initialize variables: `int total = 0;`

### 2. Type Mismatch
```cpp
int age = 25.5;   // Truncates to 25
```
**Fix:** Use `double` for decimal values.

### 3. Missing String Header
```cpp
string name;      // Error if #include <string> is missing
```
**Fix:** Add `#include <string>` at the top.

### 4. Input Buffer Issues
```cpp
int num;
string line;
cin >> num;
getline(cin, line);   // Reads empty string!
```
**Fix:** Add `cin.ignore();` after `cin >>` before `getline()`.

### 5. Wrong Quotes
```cpp
char c = "A";     // Error: double quotes
string s = 'Hi';  // Error: single quotes
```
**Fix:** Use single quotes for `char`, double quotes for `string`.
