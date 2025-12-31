// Example 2: Escape Sequences
// This program demonstrates common escape sequences in C++.

#include <iostream>
using namespace std;

int main() {
    // New line escape sequence
    cout << "Line 1" << '\n';
    cout << "Line 2" << '\n';
    cout << "Line 3" << '\n';
    cout << '\n';  // Just a blank line

    // Tab escape sequence for alignment
    cout << "Product\t\tPrice" << '\n';
    cout << "Apple\t\t$1.50" << '\n';
    cout << "Banana\t\t$0.75" << '\n';
    cout << "Orange\t\t$2.00" << '\n';
    cout << '\n';

    // Backslash and quotes
    cout << "File path: C:\\Users\\Student\\Documents" << '\n';
    cout << "She said, \"Hello!\"" << '\n';

    return 0;
}

/*
Expected Output:
Line 1
Line 2
Line 3

Product         Price
Apple           $1.50
Banana          $0.75
Orange          $2.00

File path: C:\Users\Student\Documents
She said, "Hello!"
*/
