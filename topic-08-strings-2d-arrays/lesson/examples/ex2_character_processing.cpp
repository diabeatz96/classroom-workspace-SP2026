// Example 2: Character-by-Character Processing
// Demonstrates: looping through strings, character functions

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text = "Hello World 123!";

    // Count different character types
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int other = 0;

    for (char c : text) {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        } else if (isspace(c)) {
            spaces++;
        } else {
            other++;
        }
    }

    cout << "Text: " << text << '\n';
    cout << "Letters: " << letters << '\n';
    cout << "Digits: " << digits << '\n';
    cout << "Spaces: " << spaces << '\n';
    cout << "Other: " << other << '\n';

    // Convert to uppercase
    cout << "\nUppercase: ";
    for (char c : text) {
        cout << static_cast<char>(toupper(c));
    }
    cout << '\n';

    // Convert to lowercase
    cout << "Lowercase: ";
    for (char c : text) {
        cout << static_cast<char>(tolower(c));
    }
    cout << '\n';

    return 0;
}

/*
Output:
Text: Hello World 123!
Letters: 10
Digits: 3
Spaces: 2
Other: 1

Uppercase: HELLO WORLD 123!
Lowercase: hello world 123!
*/
