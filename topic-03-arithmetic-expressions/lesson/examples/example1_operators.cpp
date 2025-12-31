// Example 1: Basic Arithmetic Operators
// Demonstrates +, -, *, /, and % operators

#include <iostream>
using namespace std;

int main() {
    int a = 17;
    int b = 5;

    cout << "a = " << a << ", b = " << b << '\n';
    cout << '\n';

    cout << "Addition:       a + b = " << (a + b) << '\n';
    cout << "Subtraction:    a - b = " << (a - b) << '\n';
    cout << "Multiplication: a * b = " << (a * b) << '\n';
    cout << "Division:       a / b = " << (a / b) << " (integer division)" << '\n';
    cout << "Modulo:         a % b = " << (a % b) << " (remainder)" << '\n';

    return 0;
}

/*
Expected Output:
a = 17, b = 5

Addition:       a + b = 22
Subtraction:    a - b = 12
Multiplication: a * b = 85
Division:       a / b = 3 (integer division)
Modulo:         a % b = 2 (remainder)
*/
