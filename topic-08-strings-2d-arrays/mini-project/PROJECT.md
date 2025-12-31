# Project: Word Games

## Overview

You will create a collection of word game utilities including word reversal, vowel counting, and palindrome checking. This project demonstrates practical string manipulation techniques.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Process strings character by character
- Build new strings from existing ones
- Compare and analyze text content
- Create utility functions for text processing

## Requirements

Implement the following functions:

1. **reverseWord(string word):** Returns the word reversed
   - "hello" returns "olleh"

2. **countVowels(string word):** Returns the count of vowels (a, e, i, o, u)
   - "programming" returns 3

3. **isPalindrome(string word):** Returns true if the word is the same forwards and backwards
   - "radar" returns true, "hello" returns false

4. **toUppercase(string word):** Returns the word in all uppercase
   - "Hello" returns "HELLO"

Create a menu-driven program that lets the user choose which operation to perform.

## Example Output

```
===== WORD GAMES =====

1. Reverse a word
2. Count vowels
3. Check palindrome
4. Convert to uppercase
5. Exit

Choose an option: 1
Enter a word: programming
Reversed: gnimmargorp

Choose an option: 3
Enter a word: racecar
"racecar" IS a palindrome!

Choose an option: 5
Goodbye!
```

## Hints

<details>
<summary>Hint 1: Reversing a String</summary>

```cpp
string reverseWord(string word) {
    string reversed = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }
    return reversed;
}
```
</details>

<details>
<summary>Hint 2: Checking Palindrome</summary>

A word is a palindrome if it equals its reverse:
```cpp
bool isPalindrome(string word) {
    return word == reverseWord(word);
}
```
</details>

## Extensions (Optional)

1. **Remove spaces:** Create a function to remove all spaces from a string
2. **Count words:** Count how many words are in a sentence
3. **Pig Latin:** Convert a word to Pig Latin

## Grading Criteria

| Criteria | Points |
|----------|--------|
| reverseWord works correctly | 20 |
| countVowels works correctly | 20 |
| isPalindrome works correctly | 20 |
| toUppercase works correctly | 15 |
| Menu system works properly | 15 |
| Code organization | 10 |
| **Total** | **100** |
