// Example 3: Switch Statement
// Demonstrates using switch for menu selection.

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== Calculator Menu =====" << '\n';
    cout << "1. Add" << '\n';
    cout << "2. Subtract" << '\n';
    cout << "3. Multiply" << '\n';
    cout << "4. Divide" << '\n';
    cout << "Enter choice: ";
    cin >> choice;

    int a = 10, b = 3;

    switch (choice) {
        case 1:
            cout << a << " + " << b << " = " << (a + b) << '\n';
            break;
        case 2:
            cout << a << " - " << b << " = " << (a - b) << '\n';
            break;
        case 3:
            cout << a << " * " << b << " = " << (a * b) << '\n';
            break;
        case 4:
            cout << a << " / " << b << " = " << (a / b) << '\n';
            break;
        default:
            cout << "Invalid choice!" << '\n';
    }

    return 0;
}

/*
Sample Run:
===== Calculator Menu =====
1. Add
2. Subtract
3. Multiply
4. Divide
Enter choice: 1
10 + 3 = 13
*/
