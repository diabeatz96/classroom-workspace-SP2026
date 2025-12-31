// Worked Example 3: Table Output with Tabs
// Problem: Create a program that displays a formatted table using tab characters.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Display the table header
    // We use \t (tab) to create consistent spacing between columns
    // Two tabs (\t\t) give us more space when needed
    cout << "Student\t\tGrade\tStatus" << '\n';

    // Step 2: Display a separator line
    // This visually separates the header from the data
    cout << "--------------------------------" << '\n';

    // Step 3: Display data rows
    // Each piece of data is separated by tabs
    // Shorter names might need two tabs to align properly
    cout << "Alice\t\t95\tPass" << '\n';
    cout << "Bob\t\t82\tPass" << '\n';
    cout << "Charlie\t\t78\tPass" << '\n';
    cout << "Diana\t\t91\tPass" << '\n';

    // Step 4: Display the footer
    cout << "--------------------------------" << '\n';
    cout << "Total Students: 4" << '\n';

    return 0;
}

/*
Expected Output:
Student         Grade   Status
--------------------------------
Alice           95      Pass
Bob             82      Pass
Charlie         78      Pass
Diana           91      Pass
--------------------------------
Total Students: 4

---
Trace Questions:

1. Why do some names use two tabs (\t\t) while "Charlie" uses one?
   Answer: "Charlie" is longer (7 characters) than "Alice" (5) and "Bob" (3),
           so it needs fewer tabs to reach the same column position.
           Tab stops are typically every 8 characters.

2. What escape sequence creates the tab spacing?
   Answer: \t

3. How would you add a new student named "Eve" with grade 88?
   Answer: Add this line: cout << "Eve\t\t88\tPass" << '\n';
*/
