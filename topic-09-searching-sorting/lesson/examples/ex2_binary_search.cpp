// Example 2: Binary Search
// Demonstrates: Efficient search on sorted arrays

#include <iostream>
using namespace std;

// Binary search function (array must be sorted!)
// Returns index of target if found, -1 if not found
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        cout << "  Checking index " << mid << " (value " << arr[mid] << ")\n";

        if (arr[mid] == target) {
            return mid;  // Found!
        } else if (arr[mid] > target) {
            right = mid - 1;  // Search left half
        } else {
            left = mid + 1;  // Search right half
        }
    }

    return -1;  // Not found
}

int main() {
    // Array MUST be sorted for binary search!
    int numbers[] = {5, 12, 23, 34, 45, 56, 67, 78, 89, 95};
    int size = 10;

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    // Search for 56
    int target = 56;
    cout << "Searching for " << target << ":\n";
    int result = binarySearch(numbers, size, target);

    if (result != -1) {
        cout << "Found " << target << " at index " << result << '\n';
    } else {
        cout << target << " was not found\n";
    }

    cout << "\n";

    // Search for a value not in array
    target = 50;
    cout << "Searching for " << target << ":\n";
    result = binarySearch(numbers, size, target);

    if (result != -1) {
        cout << "Found " << target << " at index " << result << '\n';
    } else {
        cout << target << " was not found\n";
    }

    return 0;
}

/*
Output:
Sorted Array: 5 12 23 34 45 56 67 78 89 95

Searching for 56:
  Checking index 4 (value 45)
  Checking index 7 (value 78)
  Checking index 5 (value 56)
Found 56 at index 5

Searching for 50:
  Checking index 4 (value 45)
  Checking index 7 (value 78)
  Checking index 5 (value 56)
50 was not found

Key Concepts:
- Requires SORTED array
- Eliminates half the remaining elements each step
- Much faster than linear search for large arrays
- Only 4 comparisons for 10 elements (vs up to 10 for linear)
*/
