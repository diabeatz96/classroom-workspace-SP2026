// Example 1: Writing to a File
// Demonstrates: Creating a file and writing data to it

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an output file stream
    // This creates a new file or overwrites an existing one
    ofstream outFile("greeting.txt");

    // Check if file opened successfully
    if (!outFile.is_open()) {
        cout << "Error: Could not create file!" << endl;
        return 1;
    }

    // Write to the file using << (just like cout)
    outFile << "Hello, World!" << endl;
    outFile << "This is my first file in C++." << endl;
    outFile << "Writing to files is easy!" << endl;

    // Write some numbers
    int favoriteNumber = 42;
    double pi = 3.14159;
    outFile << "My favorite number is " << favoriteNumber << endl;
    outFile << "Pi is approximately " << pi << endl;

    // Always close the file when done
    outFile.close();

    cout << "Successfully wrote to greeting.txt" << endl;
    cout << "Check the file in the same folder as this program!" << endl;

    return 0;
}

/*
After running this program, greeting.txt will contain:

Hello, World!
This is my first file in C++.
Writing to files is easy!
My favorite number is 42
Pi is approximately 3.14159

Key Concepts:
- ofstream is used for OUTPUT (writing) to files
- Use << just like you would with cout
- Always check if the file opened successfully
- Always close the file when finished
- The file is created in the same directory as the executable
*/
