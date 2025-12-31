// Completion Problem 3: Special Characters - SOLUTION

#include <iostream>
using namespace std;

int main() {
    // Display a quote: She said, "Hello!"
    cout << "She said, \"Hello!\"" << '\n';

    // Display a file path: C:\Documents\file.txt
    cout << "C:\\Documents\\file.txt" << '\n';

    // Display: It's a beautiful day!
    cout << "It's a beautiful day!" << '\n';

    return 0;
}

/*
Solution Explanation:
- Blanks 1-2: \" - escaped double quote to include quotes in a string
- Blanks 3-4: \\ - escaped backslash to display a single backslash
- Blank 5: ' - apostrophe does NOT need escaping in a double-quoted string
           (only needs escaping in single-quoted character literals)
*/
