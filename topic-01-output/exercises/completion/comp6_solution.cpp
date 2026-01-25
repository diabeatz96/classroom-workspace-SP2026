// Completion Problem 6: Decimal Precision - SOLUTION
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
    cout << fixed << setprecision(2);    // Blanks 1 and 2: fixed, 2

    cout << "With formatting:" << '\n';
    cout << "Price 1: $" << price1 << '\n';  // Shows 9.50
    cout << "Price 2: $" << price2 << '\n';  // Shows 13.00 (rounded)
    cout << "Price 3: $" << price3 << '\n';  // Shows 7.00

    cout << '\n';

    // Change precision for a percentage
    cout << setprecision(1);              // Blank 3: 1 for 1 decimal place
    double taxRate = 0.0825;
    cout << "Tax rate: " << (taxRate * 100) << "%" << '\n';  // Shows 8.3%

    return 0;
}

/*
Solution Explanation:

Blank 1: fixed
- The 'fixed' manipulator ensures decimal notation is used
- Without 'fixed', very large or small numbers might show as scientific notation
- For example, 1234567.89 might show as 1.23457e+06 without 'fixed'
- 'fixed' persists until you change it

Blank 2: 2
- setprecision(2) means show exactly 2 digits after the decimal point
- This is standard for currency/money displays
- Notice how 9.5 becomes "9.50" and 7.0 becomes "7.00"
- And 12.999 gets rounded to "13.00"

Blank 3: 1
- setprecision(1) shows exactly 1 digit after the decimal
- 0.0825 * 100 = 8.25, which rounds to 8.3 with 1 decimal place
- We don't need to repeat 'fixed' because it persists

Key Insight: Notice that price2 (12.999) becomes 13.00 - setprecision rounds
the value for display purposes. The actual variable still contains 12.999.
*/
