// Completion Problem 1: String Processing
// Fill in the blanks to count uppercase and lowercase letters.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int uppercase = 0;
    int lowercase = 0;

    // TODO: Loop through each character in the string
    for (_______ c : _______) {
        // TODO: Check if character is uppercase
        if (_______(c)) {
            uppercase++;
        }
        // TODO: Check if character is lowercase
        else if (_______(c)) {
            lowercase++;
        }
    }

    cout << "Uppercase letters: " << _______ << '\n';
    cout << "Lowercase letters: " << _______ << '\n';

    return 0;
}

/*
Sample Run:
Enter a string: Hello World
Uppercase letters: 2
Lowercase letters: 8
*/
