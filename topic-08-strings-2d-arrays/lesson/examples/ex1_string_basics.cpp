// Example 1: String Basics
// Demonstrates: string operations and methods

#include <iostream>
#include <string>
using namespace std;

int main() {
    // String declaration and initialization
    string greeting = "Hello";
    string name = "World";

    // Concatenation
    string message = greeting + ", " + name + "!";
    cout << message << '\n';  // Hello, World!

    // Length
    cout << "Length: " << message.length() << '\n';  // 13

    // Accessing characters
    cout << "First char: " << message[0] << '\n';     // H
    cout << "Last char: " << message[message.length() - 1] << '\n';  // !

    // Comparison
    string word1 = "apple";
    string word2 = "banana";
    if (word1 < word2) {
        cout << word1 << " comes before " << word2 << '\n';
    }

    // Finding substrings
    string sentence = "The quick brown fox";
    size_t pos = sentence.find("quick");
    if (pos != string::npos) {
        cout << "Found 'quick' at position " << pos << '\n';  // 4
    }

    // Extracting substrings
    string part = sentence.substr(4, 5);  // Start at 4, length 5
    cout << "Extracted: " << part << '\n';  // quick

    return 0;
}

/*
Output:
Hello, World!
Length: 13
First char: H
Last char: !
apple comes before banana
Found 'quick' at position 4
Extracted: quick
*/
