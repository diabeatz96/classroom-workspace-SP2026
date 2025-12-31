# Topic 01: Output and Program Structure

## Learning Objectives

By the end of this lesson, you will be able to:
- Write a complete C++ program that compiles and runs
- Use `cout` to display text and numbers
- Use escape sequences for formatting output
- Write comments to document your code
- Explain the purpose of each part of a basic C++ program

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

## Putting It Together

Here is a complete program that demonstrates all the concepts from this lesson:

```cpp
// Program: Course Information Display
// Author: Your Name
// Date: January 2026
// Description: Displays formatted course information

#include <iostream>
using namespace std;

int main() {
    // Display a header with a border
    cout << "================================" << '\n';
    cout << "    CSC 126 Course Info         " << '\n';
    cout << "================================" << '\n';
    cout << '\n';  // Blank line for spacing

    // Display course details using tabs for alignment
    cout << "Course:\t\tIntroduction to Computer Science" << '\n';
    cout << "Section:\t001" << '\n';
    cout << "Credits:\t3" << '\n';
    cout << '\n';

    // Display a quote (demonstrates escape sequences)
    cout << "Remember: \"The only way to learn programming is to program.\"" << '\n';
    cout << '\n';

    // Display file path example (demonstrates backslash)
    cout << "Save your work to: C:\\CSC126\\Projects\\" << '\n';

    return 0;
}
```

**Line-by-line explanation:**

- Lines 1-5: Multi-purpose header comment with author and description
- Line 7: Include the iostream library for input/output
- Line 8: Use the standard namespace
- Line 10: Start of main function
- Lines 11-14: Create a visual header using repeated characters
- Line 15: Empty `cout` with just newline creates a blank line
- Lines 17-20: Use `\t` (tabs) to align information in columns
- Line 23: Use `\"` to include quote marks inside a string
- Line 26: Use `\\` to display backslashes in a file path
- Line 28: Return 0 to indicate successful completion

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
using namespace std;

int main() {
    // Your code here
    return 0;
}
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
