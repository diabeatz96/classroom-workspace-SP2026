// Completion Problem 2: Bubble Sort
// Fill in the blanks to implement bubble sort.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    // TODO: Outer loop for passes
    for (int i = 0; i < _______ - 1; i++) {
        // TODO: Inner loop for comparisons
        for (int j = 0; j < size - 1 - _______; j++) {
            // TODO: Compare adjacent elements
            if (arr[j] > arr[_______ + 1]) {
                // TODO: Swap if out of order
                int temp = arr[_______];
                arr[j] = arr[j + 1];
                arr[_______ + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11};
    int size = 6;

    cout << "Before sorting: ";
    printArray(numbers, size);

    // TODO: Call bubble sort
    _______(numbers, size);

    cout << "After sorting:  ";
    printArray(numbers, size);

    return 0;
}

/*
Expected Output:
Before sorting: 64 34 25 12 22 11
After sorting:  11 12 22 25 34 64
*/
