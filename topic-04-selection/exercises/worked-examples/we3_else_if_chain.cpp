// Worked Example 3: Else-If Chain (Letter Grade)
// Problem: Convert a numeric score to a letter grade.
//          A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: below 60

#include <iostream>
using namespace std;

int main() {
    // Step 1: Get the score from the user
    int score;
    cout << "Enter your score (0-100): ";
    cin >> score;

    // Step 2: Declare a variable to hold the letter grade
    char grade;

    // Step 3: Use an else-if chain to determine the grade
    // Important: Conditions are checked in order from top to bottom
    // Once a condition is true, the rest are skipped
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        // We only get here if score < 90, so we know score is 80-89
        grade = 'B';
    } else if (score >= 70) {
        // We only get here if score < 80, so we know score is 70-79
        grade = 'C';
    } else if (score >= 60) {
        // We only get here if score < 70, so we know score is 60-69
        grade = 'D';
    } else {
        // We only get here if score < 60
        grade = 'F';
    }

    // Step 4: Display the result
    cout << "Score: " << score << '\n';
    cout << "Grade: " << grade << '\n';

    return 0;
}

/*
Sample Run 1:
Enter your score (0-100): 92
Score: 92
Grade: A

Sample Run 2:
Enter your score (0-100): 85
Score: 85
Grade: B

Sample Run 3:
Enter your score (0-100): 72
Score: 72
Grade: C

Sample Run 4:
Enter your score (0-100): 55
Score: 55
Grade: F

---
Trace Questions:

1. If the score is 80, which condition is the first to be true?
   Answer: The second condition (score >= 80). The first condition (score >= 90) is false.

2. Why don't we need to check if score < 90 for the B grade?
   Answer: If we reach the else-if for B, we already know score < 90
           because the first if (score >= 90) was false.

3. What grade does a score of 90 receive?
   Answer: 'A' - because 90 >= 90 is true

4. What grade does a score of 89 receive?
   Answer: 'B' - 89 >= 90 is false, but 89 >= 80 is true

5. What happens if the user enters 105?
   Answer: Grade 'A' - 105 >= 90 is true (no upper bound check)
*/
