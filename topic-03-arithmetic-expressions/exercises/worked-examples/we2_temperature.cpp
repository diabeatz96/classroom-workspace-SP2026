// Worked Example 2: Temperature Conversion
// Problem: Convert a temperature from Fahrenheit to Celsius.
//          Formula: C = (F - 32) * 5 / 9

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Get the temperature in Fahrenheit
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Step 2: Apply the conversion formula
    // Important: Use 5.0 or 9.0 to ensure floating-point division
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Alternative that also works:
    // double celsius = (fahrenheit - 32) * 5 / 9.0;
    // double celsius = (fahrenheit - 32.0) * 5 / 9;

    // Step 3: Display the result
    cout << fixed << setprecision(1);
    cout << '\n';
    cout << fahrenheit << " F = " << celsius << " C" << '\n';

    return 0;
}

/*
Sample Run 1:
Enter temperature in Fahrenheit: 32
32.0 F = 0.0 C

Sample Run 2:
Enter temperature in Fahrenheit: 212
212.0 F = 100.0 C

Sample Run 3:
Enter temperature in Fahrenheit: 98.6
98.6 F = 37.0 C

---
Trace Questions:

1. What is (32 - 32) * 5.0 / 9.0?
   Answer: 0 * 5.0 / 9.0 = 0.0 (freezing point of water)

2. What is (212 - 32) * 5.0 / 9.0?
   Answer: 180 * 5.0 / 9.0 = 900.0 / 9.0 = 100.0 (boiling point)

3. Why do we need 5.0 instead of just 5?
   Answer: If both 5 and 9 were integers, 5/9 would be 0 (integer division).
           Using 5.0 ensures floating-point division.

4. Does the order of operations matter here?
   Answer: Yes! We must subtract 32 first (parentheses), then multiply,
           then divide. This follows standard math precedence.

5. What would happen with (fahrenheit - 32) * (5 / 9)?
   Answer: 5 / 9 = 0 (integer division), so the result would be 0!
*/
