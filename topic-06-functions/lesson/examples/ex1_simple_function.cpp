// Example 1: Simple Function with No Parameters
// Demonstrates: Function declaration, definition, and calling

#include <iostream>
using namespace std;

// Function declaration (prototype)
void sayHello();

int main() {
    cout << "Before calling the function\n";

    sayHello();  // Function call

    cout << "After calling the function\n";

    return 0;
}

// Function definition
void sayHello() {
    cout << "Hello from inside the function!\n";
}

/*
Output:
Before calling the function
Hello from inside the function!
After calling the function

Key Concepts:
- void means the function returns nothing
- Function prototype goes before main()
- Function definition goes after main()
- Call a function by using its name followed by ()
*/
