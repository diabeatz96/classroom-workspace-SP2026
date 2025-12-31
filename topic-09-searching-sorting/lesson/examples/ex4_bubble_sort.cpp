// Example 4: Bubble Sort
// Demonstrates: Sorting by swapping adjacent elements

#include <iostream>
using namespace std;

// Display array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

// Bubble sort with step-by-step output
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        cout << "Pass " << (i + 1) << ":\n";
        bool swapped = false;

        for (int j = 0; j < size - 1 - i; j++) {
            cout << "  Compare " << arr[j] << " and " << arr[j + 1] << ": ";

            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
                cout << "swap -> ";
            } else {
                cout << "no swap -> ";
            }
            printArray(arr, size);
        }

        if (!swapped) {
            cout << "  No swaps made - array is sorted!\n";
            break;
        }
        cout << '\n';
    }
}

int main() {
    int numbers[] = {5, 1, 4, 2, 8};
    int size = 5;

    cout << "Bubble Sort\n";
    cout << "===========\n\n";

    cout << "Original: ";
    printArray(numbers, size);
    cout << '\n';

    bubbleSort(numbers, size);

    cout << "\nSorted:   ";
    printArray(numbers, size);

    return 0;
}

/*
Output:
Bubble Sort
===========

Original: 5 1 4 2 8

Pass 1:
  Compare 5 and 1: swap -> 1 5 4 2 8
  Compare 5 and 4: swap -> 1 4 5 2 8
  Compare 5 and 2: swap -> 1 4 2 5 8
  Compare 5 and 8: no swap -> 1 4 2 5 8

Pass 2:
  Compare 1 and 4: no swap -> 1 4 2 5 8
  Compare 4 and 2: swap -> 1 2 4 5 8
  Compare 4 and 5: no swap -> 1 2 4 5 8

Pass 3:
  Compare 1 and 2: no swap -> 1 2 4 5 8
  Compare 2 and 4: no swap -> 1 2 4 5 8
  No swaps made - array is sorted!

Sorted:   1 2 4 5 8

Key Concepts:
- Compare and swap adjacent elements
- Largest elements "bubble" to the end
- Optimization: stop if no swaps in a pass
- Simple to understand and implement
*/
