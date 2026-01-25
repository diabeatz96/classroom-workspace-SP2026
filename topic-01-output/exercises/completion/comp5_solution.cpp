// Completion Problem 5: Column Width with setw - SOLUTION
// This program displays a formatted table of products using setw().

#include <iostream>
#include <iomanip>         // Blank 1: iomanip library for formatting
using namespace std;

int main() {
    // Print table header
    cout << setw(15) << "Product" << setw(10) << "Price" << '\n';   // Blank 2: setw

    // Print separator line
    cout << "-------------------------" << '\n';

    // Print data rows - remember setw only affects the NEXT item!
    cout << setw(15) << "Apple" << setw(10) << 1.50 << '\n';        // Blank 3: setw
    cout << setw(15) << "Banana" << setw(10) << 0.75 << '\n';       // Blank 4: 10
    cout << setw(15) << "Orange" << setw(10) << 2.5 << '\n';        // Blank 5: 2.5

    return 0;
}

/*
Solution Explanation:

Blank 1: <iomanip>
- The iomanip (input/output manipulation) header is required for setw()
- Without this include, the compiler won't recognize setw

Blank 2: setw
- setw(15) sets the minimum field width to 15 characters
- The "Product" text will be right-aligned within 15 characters

Blank 3: setw
- We need setw(10) to format the price in a 10-character field
- Remember: setw only affects the NEXT output item!

Blank 4: 10
- To keep the columns aligned, all prices should use the same width (10)
- Consistency is key for professional-looking tables

Blank 5: 2.5
- Looking at the expected output, Orange costs 2.5
- The price is right-aligned within the 10-character field
*/
