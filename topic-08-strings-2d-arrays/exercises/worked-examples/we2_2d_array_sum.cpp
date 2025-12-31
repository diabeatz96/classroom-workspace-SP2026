// Worked Example 2: 2D Array Row and Column Sums
// Problem: Calculate and display the sum of each row and column in a grid.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Define the grid
    const int ROWS = 3;
    const int COLS = 4;

    int grid[ROWS][COLS] = {
        {5, 8, 2, 6},
        {3, 9, 4, 1},
        {7, 2, 8, 5}
    };

    // Step 2: Display the grid with row sums
    cout << "Grid with Row Totals:\n";
    cout << "---------------------\n";

    for (int r = 0; r < ROWS; r++) {
        // Step 3: Calculate row sum while displaying row
        int rowSum = 0;
        for (int c = 0; c < COLS; c++) {
            cout << setw(4) << grid[r][c];
            rowSum += grid[r][c];
        }
        cout << "  |" << setw(4) << rowSum << '\n';
    }

    // Step 4: Display separator and column sums
    cout << "--------------------+----\n";

    // Step 5: Calculate and display each column sum
    for (int c = 0; c < COLS; c++) {
        int colSum = 0;
        for (int r = 0; r < ROWS; r++) {
            colSum += grid[r][c];
        }
        cout << setw(4) << colSum;
    }
    cout << '\n';

    return 0;
}

/*
Output:
Grid with Row Totals:
---------------------
   5   8   2   6  |  21
   3   9   4   1  |  17
   7   2   8   5  |  22
--------------------+----
  15  19  14  12

---
Trace Questions:

1. For row sums, which loop is the outer loop?
   Answer: The row loop is outer, column loop is inner.
           We process one complete row at a time.

2. For column sums, which loop is the outer loop?
   Answer: The column loop is outer, row loop is inner.
           We process one complete column at a time.

3. What is the sum of row 1 (index 1)?
   Answer: 3 + 9 + 4 + 1 = 17

4. What is the sum of column 0?
   Answer: 5 + 3 + 7 = 15
*/
