// Worked Example 1: Linear Search Variations
// Problem: Find all occurrences of a value, not just the first one.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Set up the array with duplicate values
    const int SIZE = 10;
    int numbers[SIZE] = {5, 3, 8, 5, 2, 5, 9, 1, 5, 7};

    // Step 2: Display the array
    cout << "Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    // Step 3: Get target value
    int target;
    cout << "Enter value to search for: ";
    cin >> target;

    // Step 4: Search and find ALL occurrences
    cout << "\nSearching for " << target << "...\n";

    int count = 0;
    cout << "Found at indices: ";

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == target) {
            if (count > 0) {
                cout << ", ";  // Add comma between indices
            }
            cout << i;
            count++;
        }
    }

    // Step 5: Display results
    if (count == 0) {
        cout << "(none)";
    }
    cout << "\nTotal occurrences: " << count << '\n';

    return 0;
}

/*
Sample Run:
Array: 5 3 8 5 2 5 9 1 5 7

Enter value to search for: 5

Searching for 5...
Found at indices: 0, 3, 5, 8
Total occurrences: 4

---
Trace Questions:

1. Why don't we use 'break' when we find a match?
   Answer: We want to find ALL matches, not just the first one.

2. What does count track?
   Answer: The number of times we've found the target value.

3. What is the output if we search for 10?
   Answer: "Found at indices: (none)" and "Total occurrences: 0"

4. How would you modify this to also find the LAST occurrence?
   Answer: Keep updating a lastIndex variable each time we find a match.
*/
