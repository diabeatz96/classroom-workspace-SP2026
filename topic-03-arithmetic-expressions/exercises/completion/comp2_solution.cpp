// Completion Problem 2: Calculate Average - SOLUTION

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score1 = 85;
    int score2 = 92;
    int score3 = 78;

    // Calculate the sum of all scores
    int total = score1 + score2 + score3;

    // Calculate the average - be careful about integer division!
    double average = total / 3.0;

    // Display with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Scores: " << score1 << ", " << score2 << ", " << score3 << '\n';
    cout << "Total: " << total << '\n';
    cout << "Average: " << average << '\n';

    return 0;
}

/*
Solution:
- Blank 1: + (add the third score)
- Blank 2: 3.0 (ensures floating-point division)
- Blank 3: fixed (for fixed decimal notation)
- Blank 4: average (the calculated average)
*/
