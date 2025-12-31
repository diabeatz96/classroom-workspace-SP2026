// Completion Problem 2: Write a Report to File - SOLUTION
// Complete the missing parts to write student data to a report file.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Student data
    string names[] = {"Alice", "Bob", "Carol", "David"};
    int scores[] = {95, 82, 78, 91};
    int numStudents = 4;

    // TODO 1: Create an ofstream object to open "report.txt"
    ofstream outFile("report.txt");

    // TODO 2: Check if the file opened successfully
    if (!outFile.is_open()) {
        cout << "Error: Could not create report file!" << endl;
        return 1;
    }

    // Write header to file
    outFile << "===== STUDENT REPORT =====" << endl;
    outFile << left << setw(15) << "Name" << right << setw(10) << "Score" << endl;
    outFile << "-------------------------" << endl;

    int total = 0;

    // TODO 3: Write each student's data to the file
    for (int i = 0; i < numStudents; i++) {
        // Write name and score on one line with formatting
        outFile << left << setw(15) << names[i] << right << setw(10) << scores[i] << endl;
        total += scores[i];
    }

    // Write summary
    outFile << "-------------------------" << endl;
    outFile << "Class Average: " << fixed << setprecision(1)
            << (double)total / numStudents << endl;
    outFile << "=========================" << endl;

    // TODO 4: Close the file
    outFile.close();

    cout << "Report written to report.txt" << endl;

    // Display what was written
    cout << "\nContents of report.txt:" << endl;
    ifstream inFile("report.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}

/*
Expected Output:
Report written to report.txt

Contents of report.txt:
===== STUDENT REPORT =====
Name                 Score
-------------------------
Alice                   95
Bob                     82
Carol                   78
David                   91
-------------------------
Class Average: 86.5
=========================
*/
