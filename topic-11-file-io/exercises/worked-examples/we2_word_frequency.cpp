// Worked Example 2: Word Frequency Counter
// Problem: Read a text file and count how many times each word appears.

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Step 1: Define maximum unique words we can track
const int MAX_WORDS = 100;

// Step 2: Function to convert string to lowercase
string toLower(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

// Step 3: Function to remove punctuation from a word
string cleanWord(string word) {
    string result = "";
    for (char c : word) {
        if (isalpha(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    // First, create a sample text file
    ofstream outFile("sample_text.txt");
    outFile << "The quick brown fox jumps over the lazy dog." << endl;
    outFile << "The dog was not happy about the fox." << endl;
    outFile << "But the fox was quick and got away." << endl;
    outFile.close();
    cout << "Created sample_text.txt\n" << endl;

    // Arrays to store words and their counts
    string words[MAX_WORDS];
    int counts[MAX_WORDS];
    int wordCount = 0;

    // Step 4: Read the file and count words
    ifstream inFile("sample_text.txt");

    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    string word;
    while (inFile >> word) {
        // Clean and lowercase the word
        word = toLower(cleanWord(word));

        if (word.empty()) continue;  // Skip empty results

        // Step 5: Check if word already exists in our list
        bool found = false;
        for (int i = 0; i < wordCount; i++) {
            if (words[i] == word) {
                counts[i]++;
                found = true;
                break;
            }
        }

        // Step 6: If not found, add it
        if (!found && wordCount < MAX_WORDS) {
            words[wordCount] = word;
            counts[wordCount] = 1;
            wordCount++;
        }
    }

    inFile.close();

    // Step 7: Display results
    cout << "Word Frequency Analysis" << endl;
    cout << "-----------------------" << endl;

    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << ": " << counts[i] << endl;
    }

    cout << "-----------------------" << endl;
    cout << "Total unique words: " << wordCount << endl;

    // Step 8: Find most common word
    int maxCount = 0;
    string mostCommon;
    for (int i = 0; i < wordCount; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            mostCommon = words[i];
        }
    }
    cout << "Most common: \"" << mostCommon << "\" (" << maxCount << " times)" << endl;

    return 0;
}

/*
Output:
Created sample_text.txt

Word Frequency Analysis
-----------------------
the: 5
quick: 2
brown: 1
fox: 3
jumps: 1
over: 1
lazy: 1
dog: 2
was: 2
not: 1
happy: 1
about: 1
but: 1
and: 1
got: 1
away: 1
-----------------------
Total unique words: 16
Most common: "the" (5 times)

---
Trace Questions:

1. Why do we clean and lowercase each word?
   Answer: So "The" and "the" count as the same word,
   and "dog." and "dog" count as the same word.

2. How do we check if a word was already counted?
   Answer: We loop through the words array to find a match.
   If found, we increment the count instead of adding new.

3. What happens if we exceed MAX_WORDS?
   Answer: New words are ignored. Production code would use
   dynamic data structures like vectors or maps.
*/
