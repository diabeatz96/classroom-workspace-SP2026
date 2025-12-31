// Completion Problem 2: Escape Sequences
// Fill in the blanks to produce the exact output shown below.

#include <iostream>
using namespace std;

int main() {
    // Line 1: Display "Line 1" then move to a new line
    cout << "Line 1" << '_____';

    // Line 2: Display "Line 2" then move to a new line
    cout << "Line 2\n";

    // Blank line: Just output a newline character
    cout << '_____';

    // Display two items separated by a tab
    cout << "Name_____Age" << '\n';

    return 0;
}

/*
Expected Output:
Line 1
Line 2

Name    Age

Hints:
- Blank 1: What character creates a new line?
- Blank 2: What do you output to create a blank line?
- Blank 3: What escape sequence creates a tab?
*/
