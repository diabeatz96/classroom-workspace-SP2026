// Completion Problem 2: Escape Sequences - SOLUTION

#include <iostream>
using namespace std;

int main() {
    // Line 1: Display "Line 1" then move to a new line
    cout << "Line 1" << '\n';

    // Line 2: Display "Line 2" then move to a new line
    cout << "Line 2\n";

    // Blank line: Just output a newline character
    cout << '\n';

    // Display two items separated by a tab
    cout << "Name\tAge" << '\n';

    return 0;
}

/*
Solution Explanation:
- Blank 1: '\n' - the newline escape sequence (as a character)
- Blank 2: '\n' - outputs just a newline, creating a blank line
- Blank 3: \t - the tab escape sequence (inside the string)
*/
