# Your First C++ Program

Now that you have set up your development environment, let's make sure everything works correctly by writing a simple program.

## The Program

Create a new file called `first_program.cpp` and type the following code:

```cpp
// My first C++ program
// CSC 126 - Spring 2026

#include <iostream>
using namespace std;

int main() {
    cout << "==========================" << '\n';
    cout << "   Welcome to CSC 126!    " << '\n';
    cout << "==========================" << '\n';
    cout << '\n';
    cout << "If you can see this message," << '\n';
    cout << "your setup is working!" << '\n';

    return 0;
}
```

## What to Do

1. **Type the code exactly as shown** (do not copy-paste - typing helps you learn)
2. **Save the file**
3. **Compile and run the program**
4. **Verify the output** matches what is shown below

## Expected Output

```
==========================
   Welcome to CSC 126!
==========================

If you can see this message,
your setup is working!
```

## Understanding the Code

Let's break down each part:

```cpp
// My first C++ program
```
Lines starting with `//` are **comments**. The computer ignores them. They are notes for humans reading the code.

```cpp
#include <iostream>
```
This tells the compiler to include the input/output library so we can use `cout` to display text.

```cpp
using namespace std;
```
This lets us write `cout` instead of `std::cout`. We will use this in all our programs.

```cpp
int main() {
```
Every C++ program needs a `main` function. This is where your program starts running.

```cpp
    cout << "Hello" << '\n';
```
`cout` (pronounced "see-out") displays text to the screen. The `<<` operator sends text to the output. `'\n'` creates a new line.

```cpp
    return 0;
```
This tells the operating system that the program finished successfully.

```cpp
}
```
The closing brace marks the end of the `main` function.

## Troubleshooting

### Nothing happens when I run
- Make sure you saved the file
- Check that the file has a `.cpp` extension
- Try rebuilding/recompiling

### I see error messages
- Check for typos - C++ is case-sensitive (`cout` not `Cout`)
- Make sure every line ends with a semicolon `;`
- Check that all braces `{ }` are matched
- Make sure quotes are closed properly `" "`

### The output looks different
- The exact spacing may vary slightly depending on your system
- As long as you see all the text, your setup is working

## You Did It!

If you see the expected output, congratulations! Your development environment is ready. You can now start learning C++ programming.

Next: Head to [topic-01-output](../../topic-01-output/) to begin learning about output and program structure.
