// Worked Example 2: Searching an Array
// Problem: Find if a value exists in an array and its position.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Initialize array with values
    const int SIZE = 7;
    int numbers[SIZE] = {15, 8, 23, 42, 16, 4, 29};

    // Step 2: Get the search value from user
    int searchValue;
    cout << "Array contents: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n\nEnter a number to search for: ";
    cin >> searchValue;

    // Step 3: Linear search - check each element
    int foundIndex = -1;  // -1 means "not found"

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == searchValue) {
            foundIndex = i;
            break;  // Found it, stop searching
        }
    }

    // Step 4: Report results
    if (foundIndex != -1) {
        cout << searchValue << " found at index " << foundIndex << '\n';
    } else {
        cout << searchValue << " was not found in the array.\n";
    }

    return 0;
}

/*
Sample Run 1:
Array contents: 15 8 23 42 16 4 29

Enter a number to search for: 42
42 found at index 3

Sample Run 2:
Array contents: 15 8 23 42 16 4 29

Enter a number to search for: 100
100 was not found in the array.

---
Trace Questions:

1. Why do we initialize foundIndex to -1?
   Answer: -1 is an invalid index, so it can serve as a "not found" flag.

2. Why do we use break when we find the value?
   Answer: To exit the loop early - no need to keep searching once found.

3. If searchValue is 15, what is the value of foundIndex after the loop?
   Answer: 0, because 15 is at index 0.

4. How many comparisons are made if we search for 29?
   Answer: 7 comparisons - we check all elements until we find it at the last position.
*/
