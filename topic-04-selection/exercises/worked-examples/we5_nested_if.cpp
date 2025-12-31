// Worked Example 5: Nested If Statements
// Problem: Determine admission to a theme park ride.
//          Requirements: Must be at least 48 inches tall
//          If under 48 inches but at least 42 inches, can ride with an adult

#include <iostream>
using namespace std;

int main() {
    // Step 1: Get height and whether they have an adult companion
    int height;
    char hasAdult;

    cout << "Enter your height in inches: ";
    cin >> height;

    cout << "Do you have an adult with you? (Y/N): ";
    cin >> hasAdult;

    // Step 2: Use nested if statements to check requirements
    // Outer if: Check if tall enough to ride alone
    if (height >= 48) {
        // Tall enough - no further checks needed
        cout << "Welcome aboard! Enjoy the ride!" << '\n';
    } else {
        // Not tall enough to ride alone
        // Inner if: Check if tall enough with an adult
        if (height >= 42) {
            // Might be able to ride with an adult
            if (hasAdult == 'Y' || hasAdult == 'y') {
                cout << "You may ride with your adult companion." << '\n';
            } else {
                cout << "Sorry, you need an adult to ride." << '\n';
                cout << "Come back with someone 18 or older!" << '\n';
            }
        } else {
            // Too short even with an adult
            cout << "Sorry, you must be at least 42 inches tall." << '\n';
            cout << "Your height: " << height << " inches." << '\n';
            cout << "Come back when you've grown a bit!" << '\n';
        }
    }

    return 0;
}

/*
Sample Run 1:
Enter your height in inches: 52
Do you have an adult with you? (Y/N): N
Welcome aboard! Enjoy the ride!

Sample Run 2:
Enter your height in inches: 45
Do you have an adult with you? (Y/N): Y
You may ride with your adult companion.

Sample Run 3:
Enter your height in inches: 45
Do you have an adult with you? (Y/N): N
Sorry, you need an adult to ride.
Come back with someone 18 or older!

Sample Run 4:
Enter your height in inches: 40
Do you have an adult with you? (Y/N): Y
Sorry, you must be at least 42 inches tall.
Your height: 40 inches.
Come back when you've grown a bit!

---
Trace Questions:

1. If height is 50, which message is displayed?
   Answer: "Welcome aboard!" - 50 >= 48 is true, so outer if is taken

2. If height is 44 and hasAdult is 'Y', which message is displayed?
   Answer: "You may ride with your adult companion."

3. If height is 44 and hasAdult is 'N', which message is displayed?
   Answer: "Sorry, you need an adult to ride."

4. If height is 38, does the hasAdult input matter?
   Answer: No - 38 < 42, so they're too short regardless of adult companion

5. Could this be rewritten using && instead of nested ifs?
   Answer: Yes, but nested ifs often make the logic clearer for complex rules
*/
