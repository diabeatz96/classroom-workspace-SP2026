// Example 1: Linear Search
// Demonstrates: Sequential search through an array

#include <iostream>
using namespace std;

// Linear search function
// Returns index of target if found, -1 if not found
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Found! Return the index
        }
    }
    return -1;  // Not found
}

int main() {
    int numbers[] = {23, 45, 12, 67, 89, 34, 56};
    int size = 7;

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    // Search for various values
    int targets[] = {67, 12, 100};

    for (int target : targets) {
        int result = linearSearch(numbers, size, target);

        if (result != -1) {
            cout << "Found " << target << " at index " << result << '\n';
        } else {
            cout << target << " was not found\n";
        }
    }

    return 0;
}

/*
Output:
Array: 23 45 12 67 89 34 56

Found 67 at index 3
Found 12 at index 2
100 was not found

Key Concepts:
- Check each element from start to end
- Return as soon as target is found (optimization)
- Return -1 to indicate "not found"
- Works on unsorted arrays
*/
