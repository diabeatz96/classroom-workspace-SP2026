// Worked Example 3: Sorting Algorithm Comparison
// Problem: Compare selection sort and bubble sort side by side.

#include <iostream>
#include <iomanip>
using namespace std;

// Copy array function
void copyArray(int source[], int dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = source[i];
    }
}

// Print array function
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// Selection sort with comparison count
int selectionSort(int arr[], int size) {
    int comparisons = 0;

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            comparisons++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    return comparisons;
}

// Bubble sort with comparison count
int bubbleSort(int arr[], int size) {
    int comparisons = 0;

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    return comparisons;
}

int main() {
    const int SIZE = 6;
    int original[] = {64, 34, 25, 12, 22, 11};
    int arr1[SIZE], arr2[SIZE];

    cout << "Sorting Algorithm Comparison\n";
    cout << "============================\n\n";

    cout << "Original array: ";
    printArray(original, SIZE);
    cout << "\n\n";

    // Test Selection Sort
    copyArray(original, arr1, SIZE);
    int selComparisons = selectionSort(arr1, SIZE);
    cout << "Selection Sort:\n";
    cout << "  Result: ";
    printArray(arr1, SIZE);
    cout << "\n  Comparisons: " << selComparisons << "\n\n";

    // Test Bubble Sort
    copyArray(original, arr2, SIZE);
    int bubComparisons = bubbleSort(arr2, SIZE);
    cout << "Bubble Sort:\n";
    cout << "  Result: ";
    printArray(arr2, SIZE);
    cout << "\n  Comparisons: " << bubComparisons << "\n\n";

    // Now test with already-sorted array
    cout << "Testing with already-sorted array:\n";
    int sorted[] = {11, 12, 22, 25, 34, 64};
    cout << "Array: ";
    printArray(sorted, SIZE);
    cout << "\n\n";

    copyArray(sorted, arr1, SIZE);
    selComparisons = selectionSort(arr1, SIZE);
    cout << "Selection Sort comparisons: " << selComparisons << "\n";

    copyArray(sorted, arr2, SIZE);
    bubComparisons = bubbleSort(arr2, SIZE);
    cout << "Bubble Sort comparisons: " << bubComparisons << "\n";

    return 0;
}

/*
Output:
Sorting Algorithm Comparison
============================

Original array: 64 34 25 12 22 11

Selection Sort:
  Result: 11 12 22 25 34 64
  Comparisons: 15

Bubble Sort:
  Result: 11 12 22 25 34 64
  Comparisons: 15

Testing with already-sorted array:
Array: 11 12 22 25 34 64

Selection Sort comparisons: 15
Bubble Sort comparisons: 5

---
Trace Questions:

1. Why does selection sort always make the same number of comparisons?
   Answer: It always checks all remaining elements to find the minimum.

2. Why does bubble sort make fewer comparisons on sorted data?
   Answer: The early termination optimization stops when no swaps are made.

3. For 6 elements, what is n(n-1)/2?
   Answer: 6*5/2 = 15, which matches the selection sort count.
*/
