// Worked Example 1: Simple If Statement
// Problem: Determine if a number is positive, and display a message if it is.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare a variable and get input from the user
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Step 2: Use an if statement to check if the number is positive
    // A number is positive if it is greater than zero
    if (number > 0) {
        // Step 3: This code only runs if the condition is true
        cout << number << " is positive!" << '\n';
    }

    // Step 4: This line always runs, regardless of the condition
    cout << "Program complete." << '\n';

    return 0;
}

/*
Sample Run 1:
Enter a number: 5
5 is positive!
Program complete.

Sample Run 2:
Enter a number: -3
Program complete.

Sample Run 3:
Enter a number: 0
Program complete.

---
Trace Questions:

1. What is the output if the user enters 10?
   Answer: "10 is positive!" followed by "Program complete."

2. What is the output if the user enters -7?
   Answer: Only "Program complete." (the if block is skipped)

3. Is 0 considered positive by this program?
   Answer: No, because 0 > 0 is false. Zero is neither positive nor negative.

4. What operator would you use to check if a number is negative?
   Answer: < (less than), e.g., if (number < 0)
*/
