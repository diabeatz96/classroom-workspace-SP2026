// Worked Example 4: Column Formatting with setw
// This example demonstrates how to create aligned columns using setw()
// from the iomanip library.

#include <iostream>
#include <iomanip>    // Required for setw, left, right
using namespace std;

int main() {
    // First, let's see the problem without formatting:
    // Without setw(), numbers and text don't line up properly
    cout << "=== Without Formatting ===" << '\n';
    cout << "Alice" << 95 << '\n';
    cout << "Bob" << 87 << '\n';
    cout << "Christopher" << 92 << '\n';
    cout << '\n';

    // Now let's use setw() to create aligned columns
    // setw(n) sets the MINIMUM width for the NEXT output item only
    cout << "=== With setw() Formatting ===" << '\n';

    // Print a header row with column widths
    // setw(15) means "use at least 15 characters for the next item"
    cout << setw(15) << "Name" << setw(10) << "Score" << '\n';

    // Print a separator line
    cout << "-------------------------" << '\n';

    // Print data rows - each item needs its own setw()
    cout << setw(15) << "Alice" << setw(10) << 95 << '\n';
    cout << setw(15) << "Bob" << setw(10) << 87 << '\n';
    cout << setw(15) << "Christopher" << setw(10) << 92 << '\n';
    cout << '\n';

    // By default, output is RIGHT-aligned within the width
    // Use 'left' to change to left-alignment
    cout << "=== Left-Aligned Names ===" << '\n';
    cout << left;  // This setting persists until changed
    cout << setw(15) << "Name" << setw(10) << "Score" << '\n';
    cout << "-------------------------" << '\n';
    cout << setw(15) << "Alice" << setw(10) << 95 << '\n';
    cout << setw(15) << "Bob" << setw(10) << 87 << '\n';
    cout << setw(15) << "Christopher" << setw(10) << 92 << '\n';

    // Reset to right-aligned for future output
    cout << right;

    return 0;
}

/*
Expected Output:

=== Without Formatting ===
Alice95
Bob87
Christopher92

=== With setw() Formatting ===
           Name     Score
-------------------------
          Alice        95
            Bob        87
    Christopher        92

=== Left-Aligned Names ===
Name           Score
-------------------------
Alice          95
Bob            87
Christopher   92

---
Trace Questions:

1. Why do we need to use setw() before EACH item we want to format?
   Answer: Unlike most iomanip manipulators, setw() only affects the NEXT
   output item. After that item is printed, the width resets to default (0).
   So we must specify setw() for every item we want formatted.

2. What is the difference between 'left' and 'right' alignment?
   Answer: With right alignment (default), extra spaces are added BEFORE the
   content (content pushed to the right). With left alignment, extra spaces
   are added AFTER the content (content pushed to the left).

3. What happens if the content is LONGER than the setw() width?
   Answer: The content is NOT truncated. setw() sets a MINIMUM width, not a
   maximum. If "Christopher" needs 11 characters but setw(10) is used, all
   11 characters will still print.

4. Why do 'left' and 'right' persist but setw() does not?
   Answer: This is a design decision in C++. Alignment is considered a
   "state" that stays set, while width is considered a "one-time" setting.
   This allows you to set alignment once and use multiple setw() calls.

5. What would happen if we removed the #include <iomanip> line?
   Answer: The program would fail to compile with errors saying setw, left,
   and right are not defined. These manipulators require the iomanip header.
*/
