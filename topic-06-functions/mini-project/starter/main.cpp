// Password Strength Checker
// Author: [Your Name]
// Date: [Today's Date]
// Description: Checks password strength using multiple validation functions.

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
bool hasMinLength(string password);
bool hasUppercase(string password);
bool hasLowercase(string password);
bool hasDigit(string password);
bool hasSpecialChar(string password);

int main() {
    string password;

    cout << "===== PASSWORD STRENGTH CHECKER =====" << '\n';
    cout << '\n';

    cout << "Enter a password: ";
    cin >> password;

    cout << '\n';
    cout << "Checking password requirements:" << '\n';

    // TODO: Call each function and display results
    // Use [X] for met requirements and [ ] for unmet
    // Example: cout << "[X] At least 8 characters" << '\n';


    // TODO: Count how many requirements are met


    // TODO: Display count and determine strength level
    // WEAK: 0-2, MEDIUM: 3-4, STRONG: 5


    return 0;
}

// TODO: Implement hasMinLength
// Returns true if password is at least 8 characters
bool hasMinLength(string password) {
    // Your code here

    return false;  // Placeholder
}

// TODO: Implement hasUppercase
// Returns true if password contains at least one uppercase letter
bool hasUppercase(string password) {
    // Your code here

    return false;  // Placeholder
}

// TODO: Implement hasLowercase
// Returns true if password contains at least one lowercase letter
bool hasLowercase(string password) {
    // Your code here

    return false;  // Placeholder
}

// TODO: Implement hasDigit
// Returns true if password contains at least one digit (0-9)
bool hasDigit(string password) {
    // Your code here

    return false;  // Placeholder
}

// TODO: Implement hasSpecialChar
// Returns true if password contains at least one special character
// Special characters: !@#$%^&*()-_=+
bool hasSpecialChar(string password) {
    // Your code here

    return false;  // Placeholder
}
