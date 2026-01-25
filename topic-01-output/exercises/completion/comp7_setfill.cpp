// Completion Problem 7: Fill Characters with setfill
// Fill in the blanks (marked with _____) to complete the program.
// This program creates formatted output using setfill().

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Display a time with leading zeros (09:05:03 format)
    int hours = 9;
    int minutes = 5;
    int seconds = 3;

    cout << "=== Time Display ===" << '\n';
    cout << setfill(_____);                              // Blank 1: What character for leading zeros?
    cout << setw(2) << hours << ":";
    cout << setw(_____) << minutes << ":";               // Blank 2: Width for 2-digit display
    cout << setw(2) << seconds << '\n';
    cout << '\n';

    // Reset fill character to space
    cout << setfill(' ');

    // Create a separator line using dashes
    cout << "=== Separator Line ===" << '\n';
    cout << setfill(_____);                              // Blank 3: Character for the line
    cout << setw(30) << _____ << '\n';                   // Blank 4: What to print to get ONLY fill chars?
    cout << '\n';

    // Format a receipt-style line with dots
    cout << setfill(' ');
    cout << "=== Receipt Style ===" << '\n';
    cout << fixed << setprecision(2);
    cout << _____('.');                                  // Blank 5: Function to set fill to dots
    cout << left << setw(20) << "Total" << right << setw(10) << 25.99 << '\n';

    return 0;
}

/*
Expected Output:

=== Time Display ===
09:05:03

=== Separator Line ===
------------------------------

=== Receipt Style ===
Total...............25.99

Hints:
- Blank 1: What single character represents zero? (Use single quotes)
- Blank 2: How many digits should minutes display as?
- Blank 3: What character makes a dashed line? (Use single quotes)
- Blank 4: If we print an empty string "", all width will be fill characters
- Blank 5: What function changes the fill character?
*/
