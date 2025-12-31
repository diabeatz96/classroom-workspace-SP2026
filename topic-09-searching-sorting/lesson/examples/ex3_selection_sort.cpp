// Example 3: Selection Sort
// Demonstrates: Sorting by repeatedly finding the minimum

#include <iostream>
using namespace std;

// Display array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

// Selection sort with step-by-step output
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        cout << "Pass " << (i + 1) << ": ";

        // Find minimum element in unsorted portion
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap minimum with first unsorted element
        if (minIndex != i) {
            cout << "Swap " << arr[i] << " and " << arr[minIndex] << " -> ";
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        } else {
            cout << "No swap needed -> ";
        }

        printArray(arr, size);
    }
}

int main() {
    int numbers[] = {64, 25, 12, 22, 11};
    int size = 5;

    cout << "Selection Sort\n";
    cout << "==============\n\n";

    cout << "Original: ";
    printArray(numbers, size);
    cout << '\n';

    selectionSort(numbers, size);

    cout << "\nSorted:   ";
    printArray(numbers, size);

    return 0;
}

/*
Output:
Selection Sort
==============

Original: 64 25 12 22 11

Pass 1: Swap 64 and 11 -> 11 25 12 22 64
Pass 2: Swap 25 and 12 -> 11 12 25 22 64
Pass 3: Swap 25 and 22 -> 11 12 22 25 64
Pass 4: No swap needed -> 11 12 22 25 64

Sorted:   11 12 22 25 64

Key Concepts:
- Find minimum in unsorted portion
- Swap it to its final position
- After each pass, one more element is sorted
- Simple but not efficient for large arrays
*/
