// Worked Example 1: Greeting Message
// Problem: Create a program that displays a friendly greeting message
//          with your name on multiple lines.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Display a greeting line
    // We use cout to send text to the screen
    // The '\n' at the end moves the cursor to the next line
    cout << "Hello!" << '\n';

    // Step 2: Display an introduction
    // Notice we can put the '\n' inside the string or outside
    cout << "My name is Alex.\n";

    // Step 3: Display additional information
    // We can chain multiple outputs together
    cout << "I am learning " << "C++ programming." << '\n';

    // Step 4: End the program successfully
    // return 0 tells the system the program finished without errors
    return 0;
}

/*
Expected Output:
Hello!
My name is Alex.
I am learning C++ programming.

---
Trace Questions:

1. How many lines of text appear in the output?
   Answer: 3 lines

2. What would happen if you removed '\n' from line 13?
   Answer: "Hello!" and "My name is Alex." would appear on the same line

3. What does the << operator do?
   Answer: It sends (inserts) data to the output stream (cout)
*/
