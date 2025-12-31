// Worked Example 2: Drawing a Box
// Problem: Create a program that displays text inside a box made of characters.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Draw the top border of the box
    // We use + for corners and - for horizontal lines
    cout << "+----------------+" << '\n';

    // Step 2: Draw the content line with side borders
    // The | characters form the left and right sides
    // We add spaces to center the text inside the box
    cout << "|   IMPORTANT!   |" << '\n';

    // Step 3: Draw the bottom border
    // This matches the top border exactly
    cout << "+----------------+" << '\n';

    return 0;
}

/*
Expected Output:
+----------------+
|   IMPORTANT!   |
+----------------+

---
Trace Questions:

1. Count the characters in the top border (including the + signs).
   Answer: 18 characters total (2 + signs and 16 - signs)

2. Why do we need spaces around "IMPORTANT!" in the middle line?
   Answer: To center the text and make it visually aligned with the borders

3. What would you change to make the box wider?
   Answer: Add more - characters to the top and bottom borders,
           and add more spaces inside the middle line
*/
