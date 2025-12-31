// Example 2: Logical Operators
// Demonstrates AND, OR, and NOT operators.

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // AND (&&): Both conditions must be true
    if (age >= 13 && age <= 19) {
        cout << "You are a teenager." << '\n';
    }

    // OR (||): At least one condition must be true
    if (age < 5 || age >= 65) {
        cout << "You qualify for a discount." << '\n';
    }

    // NOT (!): Reverses true/false
    bool isWeekend = false;
    if (!isWeekend) {
        cout << "It's a weekday." << '\n';
    }

    // Combined example
    if ((age >= 18 && age <= 25) || age >= 65) {
        cout << "Special offer available!" << '\n';
    }

    return 0;
}

/*
Sample Run (age = 16):
Enter your age: 16
You are a teenager.
It's a weekday.

Sample Run (age = 70):
Enter your age: 70
You qualify for a discount.
It's a weekday.
Special offer available!
*/
