// Worked Example 3: Palindrome Checker
// Problem: Check if a word is a palindrome (reads same forwards and backwards).

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Step 1: Get input
    string input;
    cout << "Enter a word or phrase: ";
    getline(cin, input);

    // Step 2: Create a cleaned version (letters only, lowercase)
    string cleaned = "";
    for (char c : input) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }

    // Step 3: Check if palindrome using two-pointer approach
    bool isPalindrome = true;
    int left = 0;
    int right = cleaned.length() - 1;

    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    // Step 4: Display result
    cout << "Original: " << input << '\n';
    cout << "Cleaned:  " << cleaned << '\n';

    if (isPalindrome) {
        cout << "This IS a palindrome!\n";
    } else {
        cout << "This is NOT a palindrome.\n";
    }

    return 0;
}

/*
Sample Run 1:
Enter a word or phrase: racecar
Original: racecar
Cleaned:  racecar
This IS a palindrome!

Sample Run 2:
Enter a word or phrase: A man a plan a canal Panama
Original: A man a plan a canal Panama
Cleaned:  amanaplanacanalpanama
This IS a palindrome!

Sample Run 3:
Enter a word or phrase: hello
Original: hello
Cleaned:  hello
This is NOT a palindrome.

---
Trace Questions:

1. Why do we create a "cleaned" version of the string?
   Answer: To ignore spaces, punctuation, and case differences.

2. In the two-pointer approach, what do left and right represent?
   Answer: left is the index from the start, right from the end.
           They move toward each other, comparing characters.

3. For "racecar", how many comparisons are made?
   Answer: 3 comparisons: r-r, a-a, c-c. Center 'e' isn't compared.

4. When do we know it's NOT a palindrome?
   Answer: As soon as cleaned[left] != cleaned[right].
*/
