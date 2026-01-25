// Completion Problem 6: Decimal Precision
// Fill in the blanks (marked with _____) to complete the program.
// This program displays prices with exactly 2 decimal places.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price1 = 9.5;
    double price2 = 12.999;
    double price3 = 7.0;

    // Without formatting - inconsistent decimal places
    cout << "Without formatting:" << '\n';
    cout << "Price 1: $" << price1 << '\n';
    cout << "Price 2: $" << price2 << '\n';
    cout << "Price 3: $" << price3 << '\n';
    cout << '\n';

    // Set up formatting for money (2 decimal places)
    // Use 'fixed' to prevent scientific notation
    // Use setprecision to set decimal places
    cout << _____ << setprecision(_____);    // Blanks 1 and 2

    cout << "With formatting:" << '\n';
    cout << "Price 1: $" << price1 << '\n';  // Should show 9.50
    cout << "Price 2: $" << price2 << '\n';  // Should show 13.00 (rounded)
    cout << "Price 3: $" << price3 << '\n';  // Should show 7.00

    cout << '\n';

    // Change precision for a percentage
    cout << setprecision(_____);              // Blank 3: for 1 decimal place
    double taxRate = 0.0825;
    cout << "Tax rate: " << (taxRate * 100) << "%" << '\n';  // Should show 8.3%

    return 0;
}

/*
Expected Output:

Without formatting:
Price 1: $9.5
Price 2: $12.999
Price 3: $7

With formatting:
Price 1: $9.50
Price 2: $13.00
Price 3: $7.00

Tax rate: 8.3%

Hints:
- Blank 1: What manipulator ensures decimal notation (not scientific)?
- Blank 2: How many decimal places do we need for money?
- Blank 3: How many decimal places are shown in "8.3%"?
*/
