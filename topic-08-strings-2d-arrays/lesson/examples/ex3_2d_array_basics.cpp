// Example 3: 2D Array Basics
// Demonstrates: declaration, initialization, traversal

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;

    // Declare and initialize a 2D array
    int grid[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the grid
    cout << "Grid contents:\n";
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << setw(4) << grid[r][c];
        }
        cout << '\n';
    }

    // Calculate sum of all elements
    int sum = 0;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            sum += grid[r][c];
        }
    }
    cout << "\nSum of all elements: " << sum << '\n';

    // Find maximum value
    int maxVal = grid[0][0];
    int maxRow = 0, maxCol = 0;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (grid[r][c] > maxVal) {
                maxVal = grid[r][c];
                maxRow = r;
                maxCol = c;
            }
        }
    }
    cout << "Maximum value: " << maxVal
         << " at position [" << maxRow << "][" << maxCol << "]\n";

    // Sum each row
    cout << "\nRow sums:\n";
    for (int r = 0; r < ROWS; r++) {
        int rowSum = 0;
        for (int c = 0; c < COLS; c++) {
            rowSum += grid[r][c];
        }
        cout << "Row " << r << ": " << rowSum << '\n';
    }

    return 0;
}

/*
Output:
Grid contents:
   1   2   3   4
   5   6   7   8
   9  10  11  12

Sum of all elements: 78
Maximum value: 12 at position [2][3]

Row sums:
Row 0: 10
Row 1: 26
Row 2: 42
*/
