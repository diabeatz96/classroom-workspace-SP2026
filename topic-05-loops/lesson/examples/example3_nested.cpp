// Example 3: Nested Loops
// Demonstrates nested loops for patterns and grids.

#include <iostream>
using namespace std;

int main() {
    // Rectangle pattern
    cout << "Rectangle (3x5):" << '\n';
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 5; col++) {
            cout << "* ";
        }
        cout << '\n';
    }
    cout << '\n';

    // Right triangle
    cout << "Right triangle:" << '\n';
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << '\n';
    }
    cout << '\n';

    // Multiplication table
    cout << "Multiplication table (1-3):" << '\n';
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << "x" << j << "=" << (i*j) << "\t";
        }
        cout << '\n';
    }

    return 0;
}

/*
Expected Output:
Rectangle (3x5):
* * * * *
* * * * *
* * * * *

Right triangle:
*
* *
* * *
* * * *

Multiplication table (1-3):
1x1=1   1x2=2   1x3=3
2x1=2   2x2=4   2x3=6
3x1=3   3x2=6   3x3=9
*/
