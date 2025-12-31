// Mini-Project: Personal Journal Application
// A simple journal that saves entries to a file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string JOURNAL_FILE = "journal.txt";
const string ENTRY_MARKER = "---ENTRY---";
const string END_MARKER = "---END---";

// Function declarations
void addEntry();
void viewAllEntries();
void viewRecentEntries();
void searchEntries();
int countEntries();
void displayMenu();

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;
        cin.ignore();  // Clear newline from buffer

        switch (choice) {
            case 1:
                addEntry();
                break;
            case 2:
                viewAllEntries();
                break;
            case 3:
                viewRecentEntries();
                break;
            case 4:
                searchEntries();
                break;
            case 5:
                cout << "\nTotal entries: " << countEntries() << endl;
                break;
            case 6:
                cout << "\nGoodbye! Your journal is saved." << endl;
                break;
            default:
                cout << "\nInvalid choice. Please try again." << endl;
        }

        if (choice != 6) {
            cout << "\nPress Enter to continue...";
            cin.get();
        }

    } while (choice != 6);

    return 0;
}

void displayMenu() {
    cout << "\n===== PERSONAL JOURNAL =====" << endl;
    cout << "1. Add new entry" << endl;
    cout << "2. View all entries" << endl;
    cout << "3. View recent entries (last 5)" << endl;
    cout << "4. Search entries" << endl;
    cout << "5. Entry count" << endl;
    cout << "6. Exit" << endl;
    cout << "============================" << endl;
    cout << "Choice: ";
}

// TODO: Implement addEntry()
// This function should:
// 1. Prompt user for journal entry text
// 2. Open the journal file in append mode
// 3. Write the entry with date and markers
// 4. Display confirmation message
void addEntry() {
    cout << "\nEnter your journal entry (press Enter when done):" << endl;

    string entry;
    getline(cin, entry);

    // TODO: Open file in append mode
    // TODO: Write ENTRY_MARKER
    // TODO: Write "Date: " followed by a date string (can be simulated)
    // TODO: Write the entry text
    // TODO: Write END_MARKER
    // TODO: Close file
    // TODO: Display confirmation

    cout << "TODO: Implement addEntry()" << endl;
}

// TODO: Implement viewAllEntries()
// This function should:
// 1. Open and read the journal file
// 2. Display each entry with its date
// 3. Handle case where file doesn't exist or is empty
void viewAllEntries() {
    cout << "\n===== ALL JOURNAL ENTRIES =====" << endl;

    // TODO: Open journal file for reading
    // TODO: Check if file exists
    // TODO: Read and display each entry
    // TODO: Show total count at the end

    cout << "TODO: Implement viewAllEntries()" << endl;
}

// TODO: Implement viewRecentEntries()
// This function should:
// 1. Read all entries into an array
// 2. Display only the last 5 entries
// 3. Show newest first
void viewRecentEntries() {
    cout << "\n===== RECENT ENTRIES =====" << endl;

    // TODO: Read entries into an array (store date and text)
    // TODO: Display the last 5 (or fewer if less exist)
    // TODO: Display newest first

    cout << "TODO: Implement viewRecentEntries()" << endl;
}

// TODO: Implement searchEntries()
// This function should:
// 1. Ask user for a search keyword
// 2. Read through all entries
// 3. Display entries that contain the keyword
void searchEntries() {
    cout << "\nEnter search keyword: ";

    string keyword;
    getline(cin, keyword);

    cout << "\n===== SEARCH RESULTS =====" << endl;

    // TODO: Open journal file
    // TODO: Read each entry
    // TODO: Check if entry contains keyword
    // TODO: Display matching entries
    // TODO: Show count of matches

    cout << "TODO: Implement searchEntries()" << endl;
}

// TODO: Implement countEntries()
// This function should:
// 1. Open the journal file
// 2. Count how many ENTRY_MARKER lines exist
// 3. Return the count
int countEntries() {
    // TODO: Open journal file
    // TODO: Count occurrences of ENTRY_MARKER
    // TODO: Return count

    return 0;  // TODO: Return actual count
}
