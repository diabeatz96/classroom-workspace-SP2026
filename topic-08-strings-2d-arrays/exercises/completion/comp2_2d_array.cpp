// Completion Problem 2: 2D Array Operations
// Fill in the blanks to find the maximum value and its position.

#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;

    int grid[ROWS][COLS] = {
        {5, 8, 2},
        {9, 1, 7},
        {4, 6, 3}
    };

    // TODO: Initialize max with first element
    int maxVal = grid[_______][_______];
    int maxRow = 0;
    int maxCol = 0;

    // TODO: Traverse the 2D array
    for (int r = 0; r < _______; r++) {
        for (int c = 0; c < _______; c++) {
            // TODO: Check if current element is greater than max
            if (grid[r][c] > _______) {
                maxVal = grid[_______][_______];
                maxRow = _______;
                maxCol = _______;
            }
        }
    }

    cout << "Maximum value: " << maxVal << '\n';
    cout << "Found at row " << maxRow << ", column " << maxCol << '\n';

    return 0;
}

/*
Expected Output:
Maximum value: 9
Found at row 1, column 0
*/
