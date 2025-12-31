// Completion Problem 2: Void Function with Parameters
// Fill in the blanks to complete this program that uses a void function
// to print a personalized greeting multiple times.

#include <iostream>
#include <string>
using namespace std;

// TODO: Write the function prototype
// Function name: greetUser
// Parameters: string name, int times
// Returns: nothing (void)
_______ greetUser(_______ name, _______ times);

int main() {
    string userName;
    int numGreetings;

    cout << "Enter your name: ";
    cin >> userName;

    cout << "How many times to greet you? ";
    cin >> numGreetings;

    // TODO: Call the greetUser function
    _______(userName, numGreetings);

    return 0;
}

// TODO: Complete the function definition
void greetUser(string name, int times) {
    // TODO: Use a for loop to print the greeting 'times' times
    for (int i = 0; i < _______; i++) {
        cout << "Hello, " << _______ << "!\n";
    }
}

/*
Sample Run:
Enter your name: Alice
How many times to greet you? 3
Hello, Alice!
Hello, Alice!
Hello, Alice!
*/
