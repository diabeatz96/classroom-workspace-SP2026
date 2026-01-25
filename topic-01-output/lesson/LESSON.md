# Topic 01: Output and Program Structure

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20201028224032/BasicStructureOfCProgram.png" alt="C++ Program Structure" width="600">
</p>
<p align="center"><em>The basic structure of a C++ program showing its main components</em></p>

## Learning Objectives

By the end of this lesson, you will be able to:
- Write a complete C++ program that compiles and runs
- Use `cout` to display text and numbers
- Use escape sequences for formatting output
- Write comments to document your code
- Explain the purpose of each part of a basic C++ program
- Use `iomanip` to format numbers and align output in columns

## Why This Matters

Every program needs to communicate with its user. Whether you are building a game that displays scores, an app that shows notifications, or software that generates reports, outputting information is fundamental. Before you can solve complex problems, you need to master the basics of getting your program to "talk" to the world.

## Core Concepts

### Concept 1: The Structure of a C++ Program

Every C++ program follows a basic structure. Here is the simplest complete program:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << '\n';
    return 0;
}
```

Let's examine each part:

**`#include <iostream>`**
This is a preprocessor directive that tells the compiler to include the input/output stream library. Without this, you cannot use `cout`.

**`using namespace std;`**
This allows you to use `cout` instead of writing `std::cout` every time. We use this convention throughout the course.

**`int main()`**
This is the main function where your program begins execution. Every C++ program must have exactly one `main` function.

**`{ }`**
Curly braces define the body of the function. Everything between them is part of `main`.

**`cout << "Hello, World!" << '\n';`**
This statement displays text to the screen. We will explore this in detail below.

**`return 0;`**
This tells the operating system that the program finished successfully. By convention, 0 means "no errors."

**Common Mistakes:**
- Forgetting the semicolon at the end of statements
- Misspelling `iostream` or `namespace`
- Using parentheses instead of angle brackets: `#include (iostream)` - wrong!

### Concept 2: Displaying Output with cout

`cout` (pronounced "see-out") is the standard output stream. You use the insertion operator `<<` to send data to it.

```cpp
cout << "This text will appear on screen";
```

You can chain multiple items together:

```cpp
cout << "Hello, " << "World!";
```

Output: `Hello, World!`

You can also output numbers directly:

```cpp
cout << 42;
cout << 3.14159;
```

Mixing text and numbers:

```cpp
cout << "The answer is " << 42;
```

Output: `The answer is 42`

**Common Mistakes:**
- Using the wrong operator direction: `cout >> "text"` - wrong!
- Forgetting quotes around text: `cout << Hello;` - this looks for a variable named Hello
- Missing the semicolon at the end

### Concept 3: Escape Sequences

Escape sequences are special character combinations that represent characters you cannot type directly. They all start with a backslash `\`.

| Escape Sequence | Meaning | Example Output |
|-----------------|---------|----------------|
| `\n` | New line | Moves cursor to next line |
| `\t` | Tab | Inserts horizontal tab space |
| `\\` | Backslash | Displays a single \ |
| `\"` | Double quote | Displays a " inside a string |
| `\'` | Single quote | Displays a ' |

**New Line Example:**

```cpp
cout << "Line 1\nLine 2\nLine 3";
```

Output:
```
Line 1
Line 2
Line 3
```

You can also use `'\n'` as a separate character:

```cpp
cout << "Line 1" << '\n';
cout << "Line 2" << '\n';
```

**Tab Example:**

```cpp
cout << "Name\tAge\tCity" << '\n';
cout << "Alice\t25\tNew York" << '\n';
cout << "Bob\t30\tBoston" << '\n';
```

Output:
```
Name    Age     City
Alice   25      New York
Bob     30      Boston
```

**Displaying Special Characters:**

```cpp
cout << "She said, \"Hello!\"" << '\n';
cout << "File path: C:\\Users\\Documents" << '\n';
```

Output:
```
She said, "Hello!"
File path: C:\Users\Documents
```

**Common Mistakes:**
- Using forward slash instead of backslash: `/n` does not work
- Forgetting that backslash is special: `cout << "C:\new"` - the `\n` becomes a newline!

### Concept 4: Comments

Comments are notes for humans reading the code. The compiler ignores them completely.

**Single-line comments** start with `//`:

```cpp
// This is a comment
cout << "Hello"; // This comment is at the end of a line
```

**Multi-line comments** are enclosed in `/* */`:

```cpp
/* This is a multi-line comment.
   It can span several lines.
   Useful for longer explanations. */
```

**When to use comments:**
- Explain WHY you did something, not WHAT (the code shows the what)
- Document your name and date at the top of files
- Mark sections of your code
- Temporarily disable code while testing

**Example of good commenting:**

```cpp
// Calculate the area of a circle
// Formula: A = pi * r^2
double area = 3.14159 * radius * radius;
```

**Common Mistakes:**
- Writing comments that just repeat the code: `x = 5; // set x to 5` - not helpful
- Forgetting to close multi-line comments
- Over-commenting obvious code

### Concept 5: The Compilation Process

Before your program can run, it must be compiled - translated from C++ (human-readable) to machine code (computer-readable).

<p align="center">
  <img src="https://scaler.com/topics/images/how-is-a-cpp-program-compiled-and-executed.webp" alt="C++ Compilation Process" width="650">
</p>
<p align="center"><em>The C++ compilation process: Source Code → Preprocessor → Compiler → Assembler → Linker → Executable</em></p>

```
Source Code (.cpp) --> Compiler --> Executable Program
```

When you click "Run" or "Build" in your IDE, this process happens automatically.

**Compilation errors** occur when your code violates C++ rules:
- Missing semicolons
- Misspelled keywords
- Mismatched braces

**Runtime errors** occur when the program is running:
- Division by zero
- Invalid input

Always read error messages carefully. They tell you the line number and type of problem.

### Concept 6: Formatting Output with iomanip

The `<iomanip>` library (input/output manipulation) provides tools for precise control over how output is formatted. This is essential for creating professional-looking output like tables, reports, and formatted numbers.

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250423114649/iomanip-in-cpp.webp" alt="C++ iomanip" width="600">
</p>
<p align="center"><em>The iomanip library provides manipulators for formatting output</em></p>

**Including iomanip:**

```cpp
#include <iostream>
#include <iomanip>  // Required for formatting manipulators
using namespace std;
```

#### Setting Decimal Precision with `fixed` and `setprecision`

By default, C++ may display numbers in scientific notation or with varying decimal places. Use `fixed` and `setprecision` for consistent decimal output:

```cpp
double price = 19.5;
double pi = 3.14159265358979;

// Without formatting - inconsistent output
cout << price << '\n';    // Output: 19.5
cout << pi << '\n';       // Output: 3.14159

// With fixed and setprecision
cout << fixed << setprecision(2);
cout << price << '\n';    // Output: 19.50
cout << pi << '\n';       // Output: 3.14
```

**Key points:**
- `fixed` ensures decimal notation (not scientific)
- `setprecision(n)` sets the number of decimal places
- These settings persist for all subsequent output until changed

#### Setting Column Width with `setw`

`setw(n)` sets the minimum width for the **next** output item. This is essential for creating aligned columns:

```cpp
cout << setw(10) << "Name" << setw(8) << "Age" << setw(10) << "Salary" << '\n';
cout << setw(10) << "Alice" << setw(8) << 25 << setw(10) << 55000 << '\n';
cout << setw(10) << "Bob" << setw(8) << 30 << setw(10) << 62000 << '\n';
```

Output:
```
      Name     Age    Salary
     Alice      25     55000
       Bob      30     62000
```

**Important:** Unlike `fixed` and `setprecision`, `setw` only affects the **next** output item. You must use it before each item you want to format.

#### Alignment with `left` and `right`

By default, output is right-aligned within the width. Use `left` for left-alignment:

```cpp
// Right-aligned (default)
cout << right;
cout << setw(10) << "Hello" << '\n';    // Output: "     Hello"

// Left-aligned
cout << left;
cout << setw(10) << "Hello" << '\n';    // Output: "Hello     "
```

**Practical example - a formatted table:**

```cpp
cout << left;  // Left-align text
cout << setw(15) << "Product" << setw(10) << "Price" << setw(8) << "Qty" << '\n';
cout << setw(15) << "Apple" << setw(10) << 1.50 << setw(8) << 10 << '\n';
cout << setw(15) << "Banana" << setw(10) << 0.75 << setw(8) << 25 << '\n';
cout << setw(15) << "Orange" << setw(10) << 2.00 << setw(8) << 15 << '\n';
```

Output:
```
Product        Price     Qty
Apple          1.5       10
Banana         0.75      25
Orange         2         15
```

#### Filling Empty Space with `setfill`

`setfill(char)` specifies what character to use for padding instead of spaces:

```cpp
cout << setfill('*');
cout << setw(10) << 42 << '\n';      // Output: ********42

cout << setfill('0');
cout << setw(5) << 7 << '\n';        // Output: 00007

cout << setfill('-');
cout << setw(20) << "" << '\n';      // Output: -------------------- (a line!)
```

**Practical example - formatting a receipt:**

```cpp
cout << fixed << setprecision(2);
cout << setfill('.');
cout << left << setw(20) << "Subtotal" << right << setw(10) << 45.99 << '\n';
cout << left << setw(20) << "Tax" << right << setw(10) << 3.68 << '\n';
cout << left << setw(20) << "Total" << right << setw(10) << 49.67 << '\n';
```

Output:
```
Subtotal..............45.99
Tax....................3.68
Total.................49.67
```

#### Quick Reference for iomanip

| Manipulator | Purpose | Persists? |
|-------------|---------|-----------|
| `fixed` | Use decimal notation (not scientific) | Yes |
| `setprecision(n)` | Set decimal places | Yes |
| `setw(n)` | Set minimum field width | **No** (next item only) |
| `left` | Left-align output | Yes |
| `right` | Right-align output (default) | Yes |
| `setfill(c)` | Set padding character | Yes |

**Common Mistakes with iomanip:**
- Forgetting `#include <iomanip>`
- Expecting `setw` to persist (it only affects the next item)
- Using `setprecision` without `fixed` (may still get scientific notation for very large/small numbers)
- Forgetting that `fixed` and `setprecision` affect ALL subsequent numeric output

## Putting It Together

Here is a complete program that demonstrates all the concepts from this lesson, including `iomanip` formatting:

```cpp
// Program: Student Grade Report
// Author: Your Name
// Date: January 2026
// Description: Displays a formatted grade report using iomanip

#include <iostream>
#include <iomanip>  // For setw, setprecision, fixed, left, right
using namespace std;

int main() {
    // Display a header with a border
    cout << "========================================" << '\n';
    cout << "        STUDENT GRADE REPORT           " << '\n';
    cout << "========================================" << '\n';
    cout << '\n';

    // Student information
    cout << "Student:\tJohn Smith" << '\n';
    cout << "ID:\t\t12345" << '\n';
    cout << "Semester:\tSpring 2026" << '\n';
    cout << '\n';

    // Set up formatting for the grade table
    cout << fixed << setprecision(1);  // Show 1 decimal place

    // Table header with column widths
    cout << left << setw(20) << "Course"
         << right << setw(8) << "Credits"
         << setw(10) << "Grade" << '\n';

    // Separator line
    cout << setfill('-') << setw(38) << "" << '\n';
    cout << setfill(' ');  // Reset fill character to space

    // Course data rows
    cout << left << setw(20) << "Intro to C++"
         << right << setw(8) << 3
         << setw(10) << 92.5 << '\n';

    cout << left << setw(20) << "Calculus I"
         << right << setw(8) << 4
         << setw(10) << 88.0 << '\n';

    cout << left << setw(20) << "English Comp"
         << right << setw(8) << 3
         << setw(10) << 95.3 << '\n';

    // Separator line
    cout << setfill('-') << setw(38) << "" << '\n';
    cout << setfill(' ');

    // Summary with 2 decimal places for GPA
    cout << setprecision(2);
    cout << left << setw(20) << "GPA:"
         << right << setw(18) << 3.67 << '\n';

    cout << '\n';

    // Motivational quote with escape sequences
    cout << "\"Success is not final, failure is not fatal.\"" << '\n';
    cout << "Keep your files at: C:\\School\\CSC126\\" << '\n';

    return 0;
}
```

**Program Output:**
```
========================================
        STUDENT GRADE REPORT
========================================

Student:	John Smith
ID:		12345
Semester:	Spring 2026

Course              Credits     Grade
--------------------------------------
Intro to C++              3      92.5
Calculus I                4      88.0
English Comp              3      95.3
--------------------------------------
GPA:                           3.67

"Success is not final, failure is not fatal."
Keep your files at: C:\School\CSC126\
```

**Key concepts demonstrated:**

- **Lines 7-8**: Include both `iostream` and `iomanip` libraries
- **Line 21**: `fixed` and `setprecision(1)` for consistent decimal display
- **Lines 24-26**: `left` and `right` alignment with `setw` for table columns
- **Lines 29-30**: `setfill('-')` creates a separator line, then reset to space
- **Lines 33-44**: Consistent column formatting using `setw` for each item
- **Line 51**: Change precision to 2 decimal places for GPA
- **Lines 57-58**: Escape sequences for quotes and backslashes

## Quick Reference

### Basic Output
```cpp
cout << "text";           // Display text
cout << 42;               // Display number
cout << "A" << "B";       // Chain multiple items
```

### Escape Sequences
```cpp
'\n'    // New line
'\t'    // Tab
'\\'    // Backslash
'\"'    // Double quote
```

### Program Structure
```cpp
#include <iostream>
#include <iomanip>    // Include for formatting
using namespace std;

int main() {
    // Your code here
    return 0;
}
```

### iomanip Formatting
```cpp
// Decimal precision (persists)
cout << fixed << setprecision(2);
cout << 3.14159;              // Output: 3.14

// Column width (next item only!)
cout << setw(10) << "Hello";  // Output: "     Hello"

// Alignment (persists)
cout << left << setw(10) << "Hi";   // Output: "Hi        "
cout << right << setw(10) << "Hi";  // Output: "        Hi"

// Fill character (persists)
cout << setfill('*') << setw(10) << 42;  // Output: ********42
cout << setfill(' ');                     // Reset to spaces
```

### Comments
```cpp
// Single line comment
/* Multi-line
   comment */
```

## Common Errors

### 1. Missing Semicolon
```cpp
cout << "Hello"    // Error: missing semicolon
cout << "World";
```
**Fix:** Add semicolon at the end of every statement.

### 2. Wrong Operator Direction
```cpp
cout >> "Hello";   // Error: wrong operator
```
**Fix:** Use `<<` with cout (think of arrows pointing toward the output).

### 3. Unquoted Text
```cpp
cout << Hello;     // Error: Hello is not defined
```
**Fix:** Put quotes around text: `cout << "Hello";`

### 4. Mismatched Braces
```cpp
int main() {
    cout << "Hello";
// Error: missing closing brace
```
**Fix:** Every `{` needs a matching `}`.

### 5. Wrong Include Syntax
```cpp
#include "iostream"    // Works but not standard for system headers
#include (iostream)    // Error: wrong syntax
```
**Fix:** Use angle brackets for standard libraries: `#include <iostream>`

### 6. Forgetting to Include iomanip
```cpp
#include <iostream>
// Missing: #include <iomanip>

cout << setw(10) << "Hello";  // Error: setw not defined
```
**Fix:** Add `#include <iomanip>` at the top of your file.

### 7. Expecting setw to Persist
```cpp
cout << setw(10);
cout << "Hello";      // setw(10) applies here
cout << "World";      // setw does NOT apply here - back to default!
```
**Fix:** Use `setw` before **each** item you want to format:
```cpp
cout << setw(10) << "Hello" << setw(10) << "World";
```

### 8. Decimal Output Without fixed
```cpp
cout << setprecision(2);
cout << 1234567.89;   // May show: 1.2e+06 (scientific notation!)
```
**Fix:** Always use `fixed` with `setprecision` for decimal numbers:
```cpp
cout << fixed << setprecision(2);
cout << 1234567.89;   // Output: 1234567.89
```
