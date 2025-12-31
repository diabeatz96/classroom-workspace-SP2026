// Example 2: Function with Parameters
// Demonstrates: Passing values to functions

#include <iostream>
using namespace std;

// Function that takes two integer parameters
void printSum(int a, int b);

int main() {
    int x = 5;
    int y = 3;

    printSum(x, y);      // Pass variables
    printSum(10, 20);    // Pass literal values
    printSum(x + 1, y * 2);  // Pass expressions

    return 0;
}

void printSum(int a, int b) {
    int sum = a + b;
    cout << a << " + " << b << " = " << sum << '\n';
}

/*
Output:
5 + 3 = 8
10 + 20 = 30
6 + 6 = 12

Key Concepts:
- Parameters are variables listed in the function definition
- Arguments are the actual values passed when calling
- Parameters a and b are copies of the arguments (pass by value)
*/
