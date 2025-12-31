// Example 2: Reading from a File
// Demonstrates: Opening a file and reading its contents

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create an input file stream
    ifstream inFile("greeting.txt");

    // Check if file opened successfully
    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        cout << "Make sure greeting.txt exists in the current directory." << endl;
        cout << "(Run Example 1 first to create it)" << endl;
        return 1;
    }

    cout << "Contents of greeting.txt:" << endl;
    cout << "-------------------------" << endl;

    // Read the file line by line
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    cout << "-------------------------" << endl;
    cout << "End of file." << endl;

    // Close the file
    inFile.close();

    return 0;
}

/*
Output (if greeting.txt exists from Example 1):

Contents of greeting.txt:
-------------------------
Hello, World!
This is my first file in C++.
Writing to files is easy!
My favorite number is 42
Pi is approximately 3.14159
-------------------------
End of file.

Key Concepts:
- ifstream is used for INPUT (reading) from files
- Always check if the file opened (it might not exist)
- getline(inFile, line) reads one line at a time
- The while loop continues until end of file
- Always close the file when finished
*/
