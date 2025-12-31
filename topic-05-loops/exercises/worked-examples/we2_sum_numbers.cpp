// Worked Example 2: Sum of Numbers
// Problem: Calculate the sum of all numbers from 1 to n.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Get n from the user
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    // Step 2: Initialize accumulator to 0
    // The accumulator will hold our running total
    int sum = 0;

    // Step 3: Use a for loop to add each number to sum
    for (int i = 1; i <= n; i++) {
        sum += i;  // Same as: sum = sum + i
    }

    // Step 4: Display the result
    cout << "Sum of 1 to " << n << " is " << sum << '\n';

    return 0;
}

/*
Sample Run:
Enter a positive number: 10
Sum of 1 to 10 is 55

Trace for n = 5:
i = 1: sum = 0 + 1 = 1
i = 2: sum = 1 + 2 = 3
i = 3: sum = 3 + 3 = 6
i = 4: sum = 6 + 4 = 10
i = 5: sum = 10 + 5 = 15

---
Trace Questions:

1. Why do we initialize sum to 0?
   Answer: 0 is the identity for addition. Starting with any other
           value would give an incorrect result.

2. What is the sum of 1 to 100?
   Answer: 5050 (this can also be calculated as n*(n+1)/2 = 100*101/2)

3. What happens if the user enters 0?
   Answer: The loop doesn't execute (1 <= 0 is false), sum stays 0.

4. Could we count backwards and get the same result?
   Answer: Yes! for (int i = n; i >= 1; i--) would give the same sum.
*/
