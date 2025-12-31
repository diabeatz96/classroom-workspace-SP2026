// Worked Example 1: String Manipulation
// Problem: Count the number of words in a sentence.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Get input from user
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Step 2: Initialize word count
    int wordCount = 0;

    // Step 3: Track if we're currently inside a word
    bool inWord = false;

    // Step 4: Process each character
    for (int i = 0; i < sentence.length(); i++) {
        char c = sentence[i];

        if (c != ' ') {
            // We found a non-space character
            if (!inWord) {
                // We just entered a new word
                wordCount++;
                inWord = true;
            }
        } else {
            // We found a space
            inWord = false;
        }
    }

    // Step 5: Display result
    cout << "Word count: " << wordCount << '\n';

    return 0;
}

/*
Sample Run 1:
Enter a sentence: Hello World
Word count: 2

Sample Run 2:
Enter a sentence: The quick brown fox jumps
Word count: 5

Sample Run 3:
Enter a sentence:    Multiple   spaces   here
Word count: 3

---
Trace Questions:

1. Why do we use getline instead of cin >> sentence?
   Answer: getline reads the entire line including spaces.
           cin >> would only read the first word.

2. What does the inWord variable track?
   Answer: Whether we're currently inside a word or in whitespace.

3. When do we increment wordCount?
   Answer: When we find a non-space character and we weren't
           already in a word (transition from space to word).

4. How does this handle multiple consecutive spaces?
   Answer: Only the first non-space after spaces increments the count.
*/
