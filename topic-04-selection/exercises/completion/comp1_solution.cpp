// Completion Problem 1: Letter Grade - SOLUTION

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    char grade;

    // Assign letter grade based on score
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Your grade: " << grade << '\n';

    return 0;
}

/*
Solution:
- Blank 1: >= (greater than or equal)
- Blank 2: else (continues the chain)
- Blank 3: if (checks next condition)
- Blank 4: 'D' (grade for 60-69)
- Blank 5: else (handles remaining cases)
*/
