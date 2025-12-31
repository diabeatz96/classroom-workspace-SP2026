// Completion Problem 2: Calculate Average
// Fill in the blanks to correctly calculate an average.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score1 = 85;
    int score2 = 92;
    int score3 = 78;

    // Calculate the sum of all scores
    int total = score1 + score2 _____ score3;

    // Calculate the average - be careful about integer division!
    // We need a decimal result, so use 3.0 instead of 3
    double average = total / _____;

    // Display with 2 decimal places
    cout << _____ << setprecision(2);
    cout << "Scores: " << score1 << ", " << score2 << ", " << score3 << '\n';
    cout << "Total: " << total << '\n';
    cout << "Average: " << _____ << '\n';

    return 0;
}

/*
Expected Output:
Scores: 85, 92, 78
Total: 255
Average: 85.00

Hints:
- Blank 1: What operator adds the third score?
- Blank 2: What value ensures floating-point division?
- Blank 3: What manipulator ensures decimal output?
- Blank 4: What variable holds the average?
*/
