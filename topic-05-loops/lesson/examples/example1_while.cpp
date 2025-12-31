// Example 1: While Loop Basics
// Demonstrates while loop for counting and accumulation.

#include <iostream>
using namespace std;

int main() {
    // Count from 1 to 5
    cout << "Counting 1 to 5:" << '\n';
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << '\n' << '\n';

    // Sum numbers 1 to 10
    cout << "Sum of 1 to 10:" << '\n';
    int sum = 0;
    int num = 1;
    while (num <= 10) {
        sum += num;
        num++;
    }
    cout << "Sum = " << sum << '\n';

    return 0;
}

/*
Expected Output:
Counting 1 to 5:
1 2 3 4 5

Sum of 1 to 10:
Sum = 55
*/
