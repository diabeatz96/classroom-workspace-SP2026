// Completion Problem 7: Fill Characters with setfill - SOLUTION
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
    cout << setfill('0');                              // Blank 1: '0' for leading zeros
    cout << setw(2) << hours << ":";
    cout << setw(2) << minutes << ":";                 // Blank 2: 2 for 2-digit display
    cout << setw(2) << seconds << '\n';
    cout << '\n';

    // Reset fill character to space
    cout << setfill(' ');

    // Create a separator line using dashes
    cout << "=== Separator Line ===" << '\n';
    cout << setfill('-');                              // Blank 3: '-' for dashes
    cout << setw(30) << "" << '\n';                    // Blank 4: "" empty string
    cout << '\n';

    // Format a receipt-style line with dots
    cout << setfill(' ');
    cout << "=== Receipt Style ===" << '\n';
    cout << fixed << setprecision(2);
    cout << setfill('.');                              // Blank 5: setfill
    cout << left << setw(20) << "Total" << right << setw(10) << 25.99 << '\n';

    return 0;
}

/*
Solution Explanation:

Blank 1: '0'
- setfill('0') makes padding use the character '0' instead of spaces
- This creates leading zeros: 9 becomes "09" when setw(2) is used
- Common for times, dates, and ID numbers

Blank 2: 2
- setw(2) ensures minutes display as 2 digits
- Single-digit 5 becomes "05" with the '0' fill character
- This matches the standard time format HH:MM:SS

Blank 3: '-'
- setfill('-') makes padding use dashes
- This is how we create separator lines

Blank 4: ""
- An empty string has length 0
- setw(30) with an empty string means ALL 30 characters will be padding
- Result: 30 dashes in a row
- This is a common trick for creating lines!

Blank 5: setfill
- setfill('.') changes the fill character to dots
- Combined with setw, this creates the "Total......" receipt style
- Using left for "Total" and right for the price creates the
  dots-between effect seen in professional receipts

Key Pattern: setfill works with setw as a team. setw says "how wide",
setfill says "what character to pad with". You need both to see an effect.
*/
