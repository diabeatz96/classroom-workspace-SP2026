// Example 2: Integer vs Floating-Point Division
// Demonstrates the critical difference between integer and decimal division.

#include <iostream>
using namespace std;

int main() {
    cout << "===== Integer Division =====" << '\n';
    cout << "7 / 2 = " << 7 / 2 << '\n';         // 3 (truncates)
    cout << "10 / 4 = " << 10 / 4 << '\n';       // 2
    cout << "1 / 2 = " << 1 / 2 << '\n';         // 0
    cout << '\n';

    cout << "===== Floating-Point Division =====" << '\n';
    cout << "7.0 / 2 = " << 7.0 / 2 << '\n';     // 3.5
    cout << "7 / 2.0 = " << 7 / 2.0 << '\n';     // 3.5
    cout << "10.0 / 4.0 = " << 10.0 / 4.0 << '\n'; // 2.5
    cout << "1.0 / 2 = " << 1.0 / 2 << '\n';     // 0.5
    cout << '\n';

    cout << "===== Common Mistake: Calculating Average =====" << '\n';
    int score1 = 85, score2 = 90, score3 = 92;

    // Wrong way - integer division
    double wrongAvg = (score1 + score2 + score3) / 3;
    cout << "Wrong average: " << wrongAvg << '\n';  // 89

    // Right way - force floating-point division
    double rightAvg = (score1 + score2 + score3) / 3.0;
    cout << "Right average: " << rightAvg << '\n';  // 89.0

    return 0;
}

/*
Expected Output:
===== Integer Division =====
7 / 2 = 3
10 / 4 = 2
1 / 2 = 0

===== Floating-Point Division =====
7.0 / 2 = 3.5
7 / 2.0 = 3.5
10.0 / 4.0 = 2.5
1.0 / 2 = 0.5

===== Common Mistake: Calculating Average =====
Wrong average: 89
Right average: 89
*/
