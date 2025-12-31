// Worked Example 2: If-Else Statement
// Problem: Determine if a student passed or failed based on their score.
//          A score of 60 or higher is passing.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare a variable and get the score from the user
    int score;
    cout << "Enter your test score: ";
    cin >> score;

    // Step 2: Use if-else to check if the student passed
    // The condition checks if score is greater than or equal to 60
    if (score >= 60) {
        // Step 3a: This block runs if the condition is TRUE
        cout << "Congratulations! You passed!" << '\n';
        cout << "Your score: " << score << '\n';
    } else {
        // Step 3b: This block runs if the condition is FALSE
        cout << "Sorry, you did not pass." << '\n';
        cout << "Your score: " << score << '\n';
        cout << "You needed at least 60 to pass." << '\n';
    }

    return 0;
}

/*
Sample Run 1:
Enter your test score: 75
Congratulations! You passed!
Your score: 75

Sample Run 2:
Enter your test score: 55
Sorry, you did not pass.
Your score: 55
You needed at least 60 to pass.

Sample Run 3:
Enter your test score: 60
Congratulations! You passed!
Your score: 60

---
Trace Questions:

1. What is the output if the user enters exactly 60?
   Answer: "Congratulations! You passed!" - 60 >= 60 is true

2. What is the output if the user enters 59?
   Answer: "Sorry, you did not pass." - 59 >= 60 is false

3. Can both the if block AND the else block execute?
   Answer: No, exactly one will execute. They are mutually exclusive.

4. What would happen if you changed >= to > in the condition?
   Answer: A score of exactly 60 would fail instead of pass.
*/
