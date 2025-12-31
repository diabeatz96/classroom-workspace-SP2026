// Example 1: Basic If-Else
// Demonstrates simple decision making with if-else statements.

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if positive, negative, or zero
    if (number > 0) {
        cout << number << " is positive." << '\n';
    } else if (number < 0) {
        cout << number << " is negative." << '\n';
    } else {
        cout << number << " is zero." << '\n';
    }

    return 0;
}

/*
Sample Run 1:
Enter a number: 5
5 is positive.

Sample Run 2:
Enter a number: -3
-3 is negative.

Sample Run 3:
Enter a number: 0
0 is zero.
*/
