// Worked Example 5: Decimal Precision with fixed and setprecision
// This example demonstrates how to control decimal places in number output
// using fixed and setprecision() from the iomanip library.

#include <iostream>
#include <iomanip>    // Required for fixed, setprecision
using namespace std;

int main() {
    // Some numbers to work with
    double pi = 3.14159265358979;
    double price = 19.5;
    double bigNumber = 1234567.89;
    double tinyNumber = 0.000123456;

    // First, let's see default C++ output behavior
    cout << "=== Default Output (No Formatting) ===" << '\n';
    cout << "pi = " << pi << '\n';
    cout << "price = " << price << '\n';
    cout << "bigNumber = " << bigNumber << '\n';
    cout << "tinyNumber = " << tinyNumber << '\n';
    cout << '\n';

    // Notice: C++ shows varying decimal places and might use scientific notation
    // This looks unprofessional for things like prices or grades!

    // Use 'fixed' to force decimal notation (no scientific notation)
    // Use setprecision(n) to set exactly n decimal places
    cout << "=== With fixed and setprecision(2) ===" << '\n';
    cout << fixed << setprecision(2);  // These settings PERSIST

    cout << "pi = " << pi << '\n';           // Shows: 3.14
    cout << "price = " << price << '\n';     // Shows: 19.50 (note the trailing zero!)
    cout << "bigNumber = " << bigNumber << '\n';  // Shows: 1234567.89
    cout << "tinyNumber = " << tinyNumber << '\n'; // Shows: 0.00
    cout << '\n';

    // You can change precision anytime - no need to repeat 'fixed'
    cout << "=== Changing Precision Mid-Program ===" << '\n';

    cout << setprecision(4);
    cout << "pi (4 decimals) = " << pi << '\n';

    cout << setprecision(1);
    cout << "pi (1 decimal) = " << pi << '\n';

    cout << setprecision(0);
    cout << "pi (0 decimals) = " << pi << '\n';
    cout << '\n';

    // Practical example: Displaying money
    cout << "=== Practical Example: Price List ===" << '\n';
    cout << setprecision(2);  // Money always uses 2 decimal places

    double itemPrice = 9.99;
    int quantity = 3;
    double subtotal = itemPrice * quantity;
    double taxRate = 0.08;
    double tax = subtotal * taxRate;
    double total = subtotal + tax;

    cout << "Item Price:  $" << itemPrice << '\n';
    cout << "Quantity:     " << quantity << '\n';
    cout << "Subtotal:    $" << subtotal << '\n';
    cout << "Tax (8%):    $" << tax << '\n';
    cout << "Total:       $" << total << '\n';

    return 0;
}

/*
Expected Output:

=== Default Output (No Formatting) ===
pi = 3.14159
price = 19.5
bigNumber = 1.23457e+06
tinyNumber = 0.000123456

=== With fixed and setprecision(2) ===
pi = 3.14
price = 19.50
bigNumber = 1234567.89
tinyNumber = 0.00

=== Changing Precision Mid-Program ===
pi (4 decimals) = 3.1416
pi (1 decimal) = 3.1
pi (0 decimals) = 3

=== Practical Example: Price List ===
Item Price:  $9.99
Quantity:     3
Subtotal:    $29.97
Tax (8%):    $2.40
Total:       $32.37

---
Trace Questions:

1. Why did bigNumber show as "1.23457e+06" without formatting?
   Answer: C++ uses scientific notation for very large or very small numbers
   by default. The 'e+06' means "times 10 to the 6th power" (multiply by
   1,000,000). Using 'fixed' forces regular decimal notation.

2. Why does price show as "19.50" instead of "19.5" with setprecision(2)?
   Answer: setprecision(2) means EXACTLY 2 decimal places, so C++ adds a
   trailing zero. This is important for displaying money correctly -
   "$19.50" looks more professional than "$19.5".

3. What happens to tinyNumber (0.000123456) with setprecision(2)?
   Answer: It becomes "0.00" because we only show 2 decimal places. The
   actual non-zero digits start at the 4th decimal place, so they get
   rounded away. Be careful with very small numbers!

4. Why don't we need to write 'fixed' again when we change setprecision?
   Answer: Both 'fixed' and 'setprecision' persist (unlike setw). Once you
   set 'fixed', it stays in effect until you explicitly change it. You only
   need to update setprecision when you want a different number of decimals.

5. In the price example, why is the tax shown as "$2.40" instead of "$2.3976"?
   Answer: Because setprecision(2) rounds the output to 2 decimal places.
   The actual calculation of 29.97 * 0.08 = 2.3976, but it displays as 2.40.
   Note: For real financial applications, you'd want to handle rounding
   more carefully in the calculation itself!
*/
