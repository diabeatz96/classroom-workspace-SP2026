// Mini-Project: Word Games
// Implement utilities for word games like Wordle

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// TODO: Implement the following functions

// Function: countMatchingLetters
// Purpose: Count how many letters in guess match the target word in the same position
// Parameters: target (the secret word), guess (the player's guess)
// Returns: int (number of exact matches)
int countMatchingLetters(string target, string guess) {
    // Your code here
    return 0;
}

// Function: hasLetter
// Purpose: Check if a character exists anywhere in a string
// Parameters: word (the string to search), letter (the character to find)
// Returns: bool (true if letter is found)
bool hasLetter(string word, char letter) {
    // Your code here
    return false;
}

// Function: toUpperCase
// Purpose: Convert a string to all uppercase letters
// Parameters: word (the string to convert)
// Returns: string (the uppercase version)
string toUpperCase(string word) {
    // Your code here
    return word;
}

// Function: getFeedback
// Purpose: Generate feedback for a guess
//          Use '+' for correct letter in correct position
//          Use '?' for correct letter in wrong position
//          Use '-' for letter not in word
// Parameters: target (the secret word), guess (the player's guess)
// Returns: string (the feedback pattern)
string getFeedback(string target, string guess) {
    // Your code here
    return "";
}

int main() {
    cout << "=== Word Game Utilities ===\n\n";

    // Test your functions here
    string secretWord = "HELLO";
    string guess;

    cout << "Secret word has " << secretWord.length() << " letters.\n";
    cout << "Enter your guess: ";
    cin >> guess;

    // Convert to uppercase for comparison
    guess = toUpperCase(guess);

    // Get feedback
    string feedback = getFeedback(secretWord, guess);

    cout << "\nYour guess: " << guess << '\n';
    cout << "Feedback:   " << feedback << '\n';
    cout << "Exact matches: " << countMatchingLetters(secretWord, guess) << '\n';

    return 0;
}

/*
Expected behavior after implementation:

Enter your guess: HELPS

Your guess: HELPS
Feedback:   ++?--
Exact matches: 2

(H and E are correct position, L is in word but wrong position, P and S are not in word)
*/
