// Completion Problem 1: Letter Grade
// Fill in the blanks to assign a letter grade based on score.

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    char grade;

    // Assign letter grade based on score
    if (score _____ 90) {
        grade = 'A';
    } _____ if (score >= 80) {
        grade = 'B';
    } else _____ (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = _____;
    } _____ {
        grade = 'F';
    }

    cout << "Your grade: " << grade << '\n';

    return 0;
}

/*
Expected Output (for score = 75):
Enter your score: 75
Your grade: C

Hints:
- Blank 1: What operator checks if score is at least 90?
- Blank 2: What keyword continues the if chain?
- Blank 3: What keyword checks another condition?
- Blank 4: What letter grade is for 60-69?
- Blank 5: What keyword handles all remaining cases?
*/
