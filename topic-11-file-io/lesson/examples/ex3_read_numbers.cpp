// Example 3: Reading Numbers from a File
// Demonstrates: Reading numeric data and calculating statistics

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // First, create a file with numbers
    ofstream outFile("numbers.txt");
    outFile << "10 20 30 40 50 60 70 80 90 100" << endl;
    outFile.close();
    cout << "Created numbers.txt with sample data." << endl;

    // Now read the numbers back
    ifstream inFile("numbers.txt");

    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    // Read numbers and calculate statistics
    int number;
    int sum = 0;
    int count = 0;
    int min = 999999;
    int max = -999999;

    // >> reads one number at a time (separated by whitespace)
    while (inFile >> number) {
        cout << "Read: " << number << endl;
        sum += number;
        count++;

        if (number < min) min = number;
        if (number > max) max = number;
    }

    inFile.close();

    // Display statistics
    cout << "\nStatistics:" << endl;
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << (double)sum / count << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}

/*
Output:
Created numbers.txt with sample data.
Read: 10
Read: 20
Read: 30
Read: 40
Read: 50
Read: 60
Read: 70
Read: 80
Read: 90
Read: 100

Statistics:
Count: 10
Sum: 550
Average: 55
Min: 10
Max: 100

Key Concepts:
- Use >> to read values separated by whitespace
- >> automatically handles conversion to int, double, etc.
- The loop continues until there's nothing more to read
- You can calculate statistics as you read
*/
