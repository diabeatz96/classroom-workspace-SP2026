// Completion Problem 1: Array Operations
// Fill in the blanks to create a program that works with arrays.

#include <iostream>
using namespace std;

int main() {
    // TODO: Declare a constant for array size
    const int SIZE = _______;

    // TODO: Declare an integer array of SIZE elements
    int grades[_______];

    // TODO: Use a for loop to get grades from user
    cout << "Enter " << SIZE << " grades:\n";
    for (int i = 0; i < _______; i++) {
        cout << "Grade " << (i + 1) << ": ";
        cin >> _______[i];  // Store input in array
    }

    // Calculate the average
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        // TODO: Add each grade to sum
        sum += _______[i];
    }

    // TODO: Calculate and display average
    double average = static_cast<double>(_______) / SIZE;
    cout << "Average grade: " << average << '\n';

    return 0;
}

/*
Expected Output (example):
Enter 5 grades:
Grade 1: 85
Grade 2: 90
Grade 3: 78
Grade 4: 92
Grade 5: 88
Average grade: 86.6
*/
