// Completion Problem 1: Calculate Average from File - SOLUTION
// Complete the missing parts to read numbers from a file and calculate their average.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // First, create a test file with numbers
    ofstream outFile("grades.txt");
    outFile << "85 90 78 92 88" << endl;
    outFile.close();
    cout << "Created grades.txt with sample data.\n" << endl;

    // TODO 1: Create an ifstream object to open "grades.txt"
    ifstream inFile("grades.txt");

    // TODO 2: Check if the file opened successfully
    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    int grade;
    int sum = 0;
    int count = 0;

    // TODO 3: Use a while loop with >> to read each grade
    while (inFile >> grade) {
        sum += grade;
        count++;
        cout << "Read grade: " << grade << endl;
    }

    // TODO 4: Close the file
    inFile.close();

    // Calculate and display average
    if (count > 0) {
        double average = (double)sum / count;
        cout << "\nTotal grades: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
    }

    return 0;
}

/*
Expected Output:
Created grades.txt with sample data.

Read grade: 85
Read grade: 90
Read grade: 78
Read grade: 92
Read grade: 88

Total grades: 5
Sum: 433
Average: 86.6
*/
