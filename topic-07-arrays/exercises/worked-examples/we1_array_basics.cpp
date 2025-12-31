// Worked Example 1: Array Basics
// Problem: Store and display five test scores.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare an array of 5 integers
    // The size must be known at compile time
    const int SIZE = 5;
    int scores[SIZE];

    // Step 2: Get scores from the user
    cout << "Enter " << SIZE << " test scores:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Score " << (i + 1) << ": ";
        cin >> scores[i];
    }

    // Step 3: Display all scores
    cout << "\nYou entered:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Score " << (i + 1) << ": " << scores[i] << '\n';
    }

    return 0;
}

/*
Sample Run:
Enter 5 test scores:
Score 1: 85
Score 2: 92
Score 3: 78
Score 4: 95
Score 5: 88

You entered:
Score 1: 85
Score 2: 92
Score 3: 78
Score 4: 95
Score 5: 88

---
Trace Questions:

1. What is the index of the first element in the array?
   Answer: 0. Array indices always start at 0 in C++.

2. What is the index of the last element?
   Answer: SIZE - 1, which is 4 in this case.

3. Why do we use (i + 1) when displaying "Score 1", "Score 2", etc.?
   Answer: Users expect counting to start at 1, but array indices start at 0.

4. What happens if you try to access scores[5]?
   Answer: Undefined behavior - accessing memory outside the array bounds.
*/
