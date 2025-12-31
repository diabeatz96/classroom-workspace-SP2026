// Example 4: Appending to a File
// Demonstrates: Adding data to an existing file without erasing it

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    // Open file in APPEND mode
    // ios::app means "append" - add to end instead of overwriting
    ofstream logFile("activity_log.txt", ios::app);

    if (!logFile.is_open()) {
        cout << "Error: Could not open log file!" << endl;
        return 1;
    }

    // Get current time
    time_t now = time(0);
    string timestamp = ctime(&now);
    // Remove newline from timestamp
    timestamp = timestamp.substr(0, timestamp.length() - 1);

    // Write a log entry
    logFile << "[" << timestamp << "] Program executed." << endl;

    logFile.close();

    cout << "Log entry added to activity_log.txt" << endl;
    cout << "Run this program multiple times to see entries accumulate!" << endl;

    // Now let's read and display the log
    cout << "\nCurrent log contents:" << endl;
    cout << "---------------------" << endl;

    ifstream readLog("activity_log.txt");
    string line;
    while (getline(readLog, line)) {
        cout << line << endl;
    }
    readLog.close();

    return 0;
}

/*
Output (after running 3 times):
Log entry added to activity_log.txt
Run this program multiple times to see entries accumulate!

Current log contents:
---------------------
[Mon Jan 15 10:30:45 2026] Program executed.
[Mon Jan 15 10:30:52 2026] Program executed.
[Mon Jan 15 10:31:01 2026] Program executed.

Key Concepts:
- ios::app opens file in append mode
- Existing content is preserved
- New content is added at the end
- Perfect for log files, history, etc.
- Without ios::app, the file would be overwritten each time
*/
