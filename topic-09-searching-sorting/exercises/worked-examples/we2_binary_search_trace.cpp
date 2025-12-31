// Worked Example 2: Binary Search with Detailed Trace
// Problem: Trace each step of binary search to understand how it works.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Create a sorted array
    const int SIZE = 11;
    int numbers[SIZE] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 105};

    // Step 2: Display the array with indices
    cout << "Index:  ";
    for (int i = 0; i < SIZE; i++) {
        cout << setw(4) << i;
    }
    cout << "\n";

    cout << "Value:  ";
    for (int i = 0; i < SIZE; i++) {
        cout << setw(4) << numbers[i];
    }
    cout << "\n\n";

    // Step 3: Get target
    int target;
    cout << "Enter value to search for: ";
    cin >> target;
    cout << "\n";

    // Step 4: Binary search with detailed trace
    int left = 0;
    int right = SIZE - 1;
    int step = 0;
    int result = -1;

    cout << "Binary Search Trace:\n";
    cout << "--------------------\n";

    while (left <= right) {
        step++;
        int mid = (left + right) / 2;

        cout << "Step " << step << ":\n";
        cout << "  Search range: [" << left << " to " << right << "]\n";
        cout << "  Middle index: " << mid << " (value = " << numbers[mid] << ")\n";

        if (numbers[mid] == target) {
            cout << "  " << numbers[mid] << " == " << target << " -> FOUND!\n";
            result = mid;
            break;
        } else if (numbers[mid] > target) {
            cout << "  " << numbers[mid] << " > " << target << " -> search LEFT half\n";
            right = mid - 1;
        } else {
            cout << "  " << numbers[mid] << " < " << target << " -> search RIGHT half\n";
            left = mid + 1;
        }
        cout << '\n';
    }

    // Step 5: Display result
    cout << "\nResult: ";
    if (result != -1) {
        cout << target << " found at index " << result << '\n';
    } else {
        cout << target << " not found\n";
    }
    cout << "Total comparisons: " << step << '\n';

    return 0;
}

/*
Sample Run:
Index:     0   1   2   3   4   5   6   7   8   9  10
Value:     2   5   8  12  16  23  38  56  72  91 105

Enter value to search for: 23

Binary Search Trace:
--------------------
Step 1:
  Search range: [0 to 10]
  Middle index: 5 (value = 23)
  23 == 23 -> FOUND!

Result: 23 found at index 5
Total comparisons: 1

---
Trace Questions:

1. If searching for 72, how many steps would it take?
   Answer: 2 steps. mid=5 (23<72, go right), mid=8 (72 found)

2. What's the maximum number of steps for this 11-element array?
   Answer: 4 steps (log2(11) rounded up)

3. Why is the condition "left <= right" instead of "left < right"?
   Answer: We need to check when left == right (one element remaining).
*/
