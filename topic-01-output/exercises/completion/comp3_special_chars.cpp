// Completion Problem 3: Special Characters
// Fill in the blanks to display special characters correctly.

#include <iostream>
using namespace std;

int main() {
    // Display a quote: She said, "Hello!"
    cout << "She said, _____Hello!_____" << '\n';

    // Display a file path: C:\Documents\file.txt
    cout << "C:_____Documents_____file.txt" << '\n';

    // Display: It's a beautiful day!
    cout << "It_____s a beautiful day!" << '\n';

    return 0;
}

/*
Expected Output:
She said, "Hello!"
C:\Documents\file.txt
It's a beautiful day!

Hints:
- Blanks 1-2: How do you include a double quote inside a string?
- Blanks 3-4: How do you display a backslash?
- Blank 5: What escape sequence displays an apostrophe?
*/
