// Completion Problem 1: Linear Search
// Fill in the blanks to implement linear search.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    // TODO: Loop through each element
    for (int i = 0; i < _______; i++) {
        // TODO: Check if current element equals target
        if (arr[_______] == _______) {
            // TODO: Return the index where found
            return _______;
        }
    }
    // TODO: Return -1 if not found
    return _______;
}

int main() {
    int numbers[] = {15, 23, 8, 42, 16, 4};
    int size = 6;

    // TODO: Search for 42
    int result = linearSearch(numbers, _______, 42);

    if (result != _______) {
        cout << "Found at index " << result << '\n';
    } else {
        cout << "Not found\n";
    }

    return 0;
}

/*
Expected Output:
Found at index 3
*/
