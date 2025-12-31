// Example 2: For Loop Basics
// Demonstrates for loop for various counting patterns.

#include <iostream>
using namespace std;

int main() {
    // Count up
    cout << "Count 1 to 5: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << '\n';

    // Count down
    cout << "Count 5 to 1: ";
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << '\n';

    // Count by 2s
    cout << "Even numbers 2-10: ";
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << '\n';

    // Multiplication table for 5
    cout << "5 times table:" << '\n';
    for (int i = 1; i <= 5; i++) {
        cout << "5 x " << i << " = " << (5 * i) << '\n';
    }

    return 0;
}

/*
Expected Output:
Count 1 to 5: 1 2 3 4 5
Count 5 to 1: 5 4 3 2 1
Even numbers 2-10: 2 4 6 8 10
5 times table:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
*/
