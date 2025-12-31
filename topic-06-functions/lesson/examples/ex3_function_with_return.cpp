// Example 3: Function with Return Value
// Demonstrates: Returning values from functions

#include <iostream>
using namespace std;

// Function that returns an integer
int square(int n);

// Function that returns a double
double average(double a, double b);

int main() {
    int num = 5;
    int result = square(num);
    cout << num << " squared is " << result << '\n';

    // Can use return value directly in expressions
    cout << "10 squared is " << square(10) << '\n';

    double avg = average(85.5, 92.0);
    cout << "Average: " << avg << '\n';

    return 0;
}

int square(int n) {
    return n * n;  // Return the computed value
}

double average(double a, double b) {
    return (a + b) / 2.0;
}

/*
Output:
5 squared is 25
10 squared is 100
Average: 88.75

Key Concepts:
- Return type before function name specifies what type is returned
- return statement sends a value back to the caller
- Returned value can be stored in a variable or used directly
*/
