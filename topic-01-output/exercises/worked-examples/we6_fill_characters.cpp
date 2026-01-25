// Worked Example 6: Fill Characters with setfill
// This example demonstrates how to use setfill() to replace padding spaces
// with custom characters, creating professional-looking formatted output.

#include <iostream>
#include <iomanip>    // Required for setw, setfill, left, right, fixed, setprecision
using namespace std;

int main() {
    // setfill(char) changes what character is used for padding
    // By default, padding uses spaces. setfill lets you use any character!

    // Example 1: Leading zeros for numbers (common in IDs, dates, times)
    cout << "=== Leading Zeros ===" << '\n';
    cout << setfill('0');  // Use '0' for padding instead of spaces

    int hour = 9;
    int minute = 5;
    int second = 3;

    // Display time as 09:05:03 instead of 9:5:3
    cout << "Time: ";
    cout << setw(2) << hour << ":";
    cout << setw(2) << minute << ":";
    cout << setw(2) << second << '\n';

    // Reset to spaces for next section
    cout << setfill(' ');
    cout << '\n';

    // Example 2: Creating separator lines
    cout << "=== Separator Lines ===" << '\n';
    cout << setfill('-');
    cout << setw(40) << "" << '\n';  // Print 40 dashes

    cout << setfill('=');
    cout << setw(40) << "" << '\n';  // Print 40 equals signs

    cout << setfill('*');
    cout << setw(40) << "" << '\n';  // Print 40 asterisks

    cout << setfill(' ');  // Reset
    cout << '\n';

    // Example 3: Professional receipt formatting with dots
    cout << "=== Receipt Style Formatting ===" << '\n';
    cout << fixed << setprecision(2);
    cout << setfill('.');

    // The trick: use left for the label, right for the number
    cout << left << setw(25) << "Burger" << right << setw(10) << 8.99 << '\n';
    cout << left << setw(25) << "Fries" << right << setw(10) << 3.49 << '\n';
    cout << left << setw(25) << "Drink" << right << setw(10) << 2.29 << '\n';

    cout << setfill('-');
    cout << setw(35) << "" << '\n';

    cout << setfill('.');
    cout << left << setw(25) << "Subtotal" << right << setw(10) << 14.77 << '\n';
    cout << left << setw(25) << "Tax" << right << setw(10) << 1.18 << '\n';

    cout << setfill('=');
    cout << setw(35) << "" << '\n';

    cout << setfill('.');
    cout << left << setw(25) << "TOTAL" << right << setw(10) << 15.95 << '\n';

    cout << setfill(' ');  // Always reset at the end
    cout << '\n';

    // Example 4: Combining multiple techniques
    cout << "=== Student Report Card ===" << '\n';
    cout << setfill('=');
    cout << setw(45) << "" << '\n';

    cout << setfill(' ');
    cout << left << setw(25) << "Student:" << "Jane Doe" << '\n';
    cout << left << setw(25) << "ID:" << "STU-00142" << '\n';

    cout << setfill('-');
    cout << setw(45) << "" << '\n';

    cout << setfill(' ');
    cout << left << setw(20) << "Subject"
         << right << setw(12) << "Grade"
         << setw(13) << "Credits" << '\n';

    cout << setfill('-');
    cout << setw(45) << "" << '\n';

    cout << setfill(' ');
    cout << left << setw(20) << "Mathematics"
         << right << setw(12) << 92.5
         << setw(13) << 4 << '\n';
    cout << left << setw(20) << "English"
         << right << setw(12) << 88.0
         << setw(13) << 3 << '\n';
    cout << left << setw(20) << "Science"
         << right << setw(12) << 95.3
         << setw(13) << 4 << '\n';

    cout << setfill('=');
    cout << setw(45) << "" << '\n';

    return 0;
}

/*
Expected Output:

=== Leading Zeros ===
Time: 09:05:03

=== Separator Lines ===
----------------------------------------
========================================
****************************************

=== Receipt Style Formatting ===
Burger...................8.99
Fries....................3.49
Drink....................2.29
-----------------------------------
Subtotal................14.77
Tax......................1.18
===================================
TOTAL...................15.95

=== Student Report Card ===
=============================================
Student:                 Jane Doe
ID:                      STU-00142
---------------------------------------------
Subject                    Grade      Credits
---------------------------------------------
Mathematics                 92.5            4
English                     88.0            3
Science                     95.3            4
=============================================

---
Trace Questions:

1. Why do we need to reset setfill back to spaces after using it?
   Answer: setfill persists until changed. If you use setfill('-') and forget
   to reset it, ALL future padded output will use dashes. This can cause
   unexpected formatting in later parts of your program.

2. How does setfill work together with setw?
   Answer: setw(n) creates padding to reach n characters. setfill(c) determines
   WHAT character fills that padding. Without setw, setfill does nothing
   because there's no padding to fill. They work as a team.

3. In the time example, why does hour "9" become "09"?
   Answer: setw(2) says "use at least 2 characters". Since 9 is only 1 character,
   it needs 1 character of padding. setfill('0') makes that padding be a '0'
   instead of a space, giving us "09".

4. How do you print just a line of characters (like 40 dashes)?
   Answer: Use setfill('-') and then setw(40) << "". The empty string "" has
   length 0, so ALL 40 characters will be padding (dashes). This is a common
   trick for creating separator lines.

5. In the receipt example, why combine left and right alignment on the same line?
   Answer: For the label (like "Burger") we want left alignment so the dots
   start right after the word. For the price, we want right alignment so the
   dots end right before the number. This creates the professional "Burger.....8.99"
   look that you see on real receipts.
*/
