// Mini-Project: Sorting Visualizer
// Create a text-based visualization of sorting algorithms

#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 20;

// TODO: Implement the following functions

// Function: printBar
// Purpose: Print a horizontal bar of asterisks for visualization
// Parameters: value (the height of the bar)
// Returns: void
void printBar(int value) {
    // Your code here
    // Print 'value' number of asterisks followed by the number
}

// Function: printArrayVertical
// Purpose: Print the array as vertical bars
// Parameters: arr[] (the array), size (number of elements)
// Returns: void
void printArrayVertical(int arr[], int size) {
    // Your code here
    // Find the maximum value, then print bars from top to bottom
}

// Function: printArrayHorizontal
// Purpose: Print each element as a horizontal bar
// Parameters: arr[] (the array), size (number of elements)
// Returns: void
void printArrayHorizontal(int arr[], int size) {
    // Your code here
    // For each element, print a bar of asterisks
}

// Function: selectionSortVisualized
// Purpose: Perform selection sort with visualization after each pass
// Parameters: arr[] (the array), size (number of elements)
// Returns: void
void selectionSortVisualized(int arr[], int size) {
    // Your code here
    // After each pass, print the current state of the array
}

// Function: bubbleSortVisualized
// Purpose: Perform bubble sort with visualization after each pass
// Parameters: arr[] (the array), size (number of elements)
// Returns: void
void bubbleSortVisualized(int arr[], int size) {
    // Your code here
    // After each pass, print the current state of the array
}

int main() {
    int numbers[MAX_SIZE];
    int size;

    cout << "=== Sorting Visualizer ===\n\n";

    // Get array size
    cout << "Enter number of elements (1-" << MAX_SIZE << "): ";
    cin >> size;

    if (size < 1 || size > MAX_SIZE) {
        cout << "Invalid size.\n";
        return 1;
    }

    // Get array elements
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Menu for visualization options
    cout << "\nVisualization options:\n";
    cout << "1. Selection Sort\n";
    cout << "2. Bubble Sort\n";
    cout << "Enter choice: ";

    int choice;
    cin >> choice;

    cout << "\n";

    // TODO: Based on choice, call the appropriate sort function

    return 0;
}

/*
Expected behavior after implementation:

=== Sorting Visualizer ===

Enter number of elements (1-20): 5
Enter 5 integers: 8 3 6 1 9

Visualization options:
1. Selection Sort
2. Bubble Sort
Enter choice: 1

Initial:
8: ********
3: ***
6: ******
1: *
9: *********

Pass 1: Swap 8 and 1
1: *
3: ***
6: ******
8: ********
9: *********

Pass 2: No swap needed
...

Sorted!
*/
