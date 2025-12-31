// Completion Problem 2: Find Element in Array
// Fill in the blanks to search for a value in an array.

#include <iostream>
using namespace std;

int main() {
    // Initialize array with values
    int numbers[] = {12, 45, 67, 23, 89, 34, 56};
    int size = 7;

    // Get search value from user
    int searchFor;
    cout << "Enter a number to search for: ";
    cin >> searchFor;

    // TODO: Initialize a variable to track if we found the value
    // Use -1 to indicate "not found"
    int foundAt = _______;

    // TODO: Loop through the array to search
    for (int i = 0; i < _______; i++) {
        // TODO: Check if current element equals searchFor
        if (numbers[i] == _______) {
            foundAt = _______;  // Store the index where found
            break;  // Exit loop early
        }
    }

    // Display result
    if (foundAt != _______) {
        cout << searchFor << " found at index " << foundAt << '\n';
    } else {
        cout << searchFor << " was not found.\n";
    }

    return 0;
}

/*
Sample Run 1:
Enter a number to search for: 23
23 found at index 3

Sample Run 2:
Enter a number to search for: 100
100 was not found.
*/
