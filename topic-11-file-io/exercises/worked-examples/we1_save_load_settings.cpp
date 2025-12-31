// Worked Example 1: Save and Load Settings
// Problem: Create functions to save and load user settings to/from a file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Step 1: Define a structure to hold settings
struct Settings {
    string username;
    int volume;
    bool darkMode;
    string language;
};

// Step 2: Function to save settings to a file
void saveSettings(const Settings& settings, const string& filename) {
    ofstream outFile(filename);

    if (!outFile.is_open()) {
        cout << "Error: Could not save settings!" << endl;
        return;
    }

    // Write each setting on its own line
    outFile << settings.username << endl;
    outFile << settings.volume << endl;
    outFile << settings.darkMode << endl;
    outFile << settings.language << endl;

    outFile.close();
    cout << "Settings saved to " << filename << endl;
}

// Step 3: Function to load settings from a file
bool loadSettings(Settings& settings, const string& filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cout << "No settings file found. Using defaults." << endl;
        return false;
    }

    // Read each setting
    getline(inFile, settings.username);
    inFile >> settings.volume;
    inFile >> settings.darkMode;
    inFile.ignore();  // Skip newline after bool
    getline(inFile, settings.language);

    inFile.close();
    cout << "Settings loaded from " << filename << endl;
    return true;
}

// Step 4: Function to display current settings
void displaySettings(const Settings& settings) {
    cout << "\n--- Current Settings ---" << endl;
    cout << "Username: " << settings.username << endl;
    cout << "Volume: " << settings.volume << endl;
    cout << "Dark Mode: " << (settings.darkMode ? "On" : "Off") << endl;
    cout << "Language: " << settings.language << endl;
    cout << "------------------------\n" << endl;
}

int main() {
    const string SETTINGS_FILE = "user_settings.txt";

    // Create default settings
    Settings mySettings;
    mySettings.username = "Player1";
    mySettings.volume = 75;
    mySettings.darkMode = true;
    mySettings.language = "English";

    // Try to load existing settings
    if (!loadSettings(mySettings, SETTINGS_FILE)) {
        // No file found, use defaults
        cout << "Created default settings." << endl;
    }

    displaySettings(mySettings);

    // Simulate changing settings
    cout << "Changing settings..." << endl;
    mySettings.username = "GamerPro";
    mySettings.volume = 90;
    mySettings.darkMode = false;

    // Save the new settings
    saveSettings(mySettings, SETTINGS_FILE);

    // Verify by loading again
    Settings loadedSettings;
    loadSettings(loadedSettings, SETTINGS_FILE);
    displaySettings(loadedSettings);

    return 0;
}

/*
First run output:
No settings file found. Using defaults.
Created default settings.

--- Current Settings ---
Username: Player1
Volume: 75
Dark Mode: On
Language: English
------------------------

Changing settings...
Settings saved to user_settings.txt
Settings loaded from user_settings.txt

--- Current Settings ---
Username: GamerPro
Volume: 90
Dark Mode: Off
Language: English
------------------------

---
Trace Questions:

1. Why do we return bool from loadSettings?
   Answer: To indicate whether loading succeeded, so the caller
   knows if it needs to use default values.

2. Why is inFile.ignore() needed after reading darkMode?
   Answer: >> leaves the newline in the buffer. ignore() removes it
   so getline() doesn't read an empty line.

3. What happens if the settings file is corrupted?
   Answer: The program might crash or get wrong values. Production
   code should validate each value after reading.
*/
