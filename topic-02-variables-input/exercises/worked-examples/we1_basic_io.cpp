// Worked Example 1: Basic Input and Output
// Problem: Create a program that asks for a user's name and age,
//          then displays a greeting message.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Declare variables to store user input
    // We need a string for the name and an int for the age
    string name;
    int age;

    // Step 2: Prompt the user and read their name
    // cout displays the prompt, cin reads the response
    cout << "What is your name? ";
    cin >> name;

    // Step 3: Prompt the user and read their age
    cout << "How old are you? ";
    cin >> age;

    // Step 4: Display a personalized greeting
    // We combine text and variables in the output
    cout << '\n';
    cout << "Hello, " << name << "!" << '\n';
    cout << "You are " << age << " years old." << '\n';

    return 0;
}

/*
Sample Run:
What is your name? Maria
How old are you? 22

Hello, Maria!
You are 22 years old.

---
Trace Questions:

1. What would happen if the user entered "Maria Garcia" for the name?
   Answer: Only "Maria" would be stored because cin >> stops at whitespace.

2. What data type is used for age and why?
   Answer: int, because age is a whole number (no decimals needed).

3. What would happen if the user typed "twenty" instead of 20 for age?
   Answer: The program would fail to read properly because cin expects a number.
*/
