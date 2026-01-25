// Completion Problem 5: Column Width with setw
// Fill in the blanks (marked with _____) to complete the program.
// This program displays a formatted table of products using setw().

#include <iostream>
#include _____         // Blank 1: What library is needed for setw?
using namespace std;

int main() {
    // Print table header
    cout << _____(15) << "Product" << setw(10) << "Price" << '\n';   // Blank 2

    // Print separator line
    cout << "-------------------------" << '\n';

    // Print data rows - remember setw only affects the NEXT item!
    cout << setw(15) << "Apple" << _____(10) << 1.50 << '\n';        // Blank 3
    cout << setw(15) << "Banana" << setw(_____) << 0.75 << '\n';     // Blank 4
    cout << setw(15) << "Orange" << setw(10) << _____ << '\n';       // Blank 5

    return 0;
}

/*
Expected Output:

        Product     Price
-------------------------
          Apple      1.5
         Banana     0.75
         Orange      2.5

Hints:
- Blank 1: What header file contains setw, setprecision, and other formatters?
- Blank 2: What function sets the width for the next output item?
- Blank 3: We need to set the width to 10 for the price. What function do we use?
- Blank 4: What number should go here to match the width used for other prices?
- Blank 5: What price value should Orange have? (Look at the expected output)
*/
