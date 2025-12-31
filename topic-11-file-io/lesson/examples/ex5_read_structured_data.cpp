// Example 5: Reading Structured Data
// Demonstrates: Reading files with multiple data types per line

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // First, create a file with student data
    ofstream outFile("students.txt");
    outFile << "Alice 95 A" << endl;
    outFile << "Bob 87 B" << endl;
    outFile << "Carol 92 A" << endl;
    outFile << "David 78 C" << endl;
    outFile << "Eve 99 A" << endl;
    outFile.close();
    cout << "Created students.txt with sample data.\n" << endl;

    // Now read the structured data
    ifstream inFile("students.txt");

    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    // Variables to hold each field
    string name;
    int score;
    char grade;

    // Display header
    cout << left << setw(12) << "Name"
         << right << setw(8) << "Score"
         << setw(8) << "Grade" << endl;
    cout << "----------------------------" << endl;

    // Read each line: name score grade
    // >> automatically handles the spacing
    while (inFile >> name >> score >> grade) {
        cout << left << setw(12) << name
             << right << setw(8) << score
             << setw(8) << grade << endl;
    }

    inFile.close();

    return 0;
}

/*
Output:
Created students.txt with sample data.

Name           Score   Grade
----------------------------
Alice             95       A
Bob               87       B
Carol             92       A
David             78       C
Eve               99       A

Key Concepts:
- You can read multiple values on one line
- >> skips whitespace automatically
- Variables are filled in order
- Make sure the data format matches what you're reading
- string reads one word, int reads numbers, char reads one character
*/
