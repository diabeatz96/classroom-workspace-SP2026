// Example 3: Reading Full Lines with getline
// Demonstrates how to read strings that contain spaces.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    string address;
    string favoriteQuote;

    // getline reads the entire line, including spaces
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your favorite quote: ";
    getline(cin, favoriteQuote);

    // Display the information
    cout << '\n';
    cout << "===== Profile =====" << '\n';
    cout << "Name: " << fullName << '\n';
    cout << "Address: " << address << '\n';
    cout << "Quote: \"" << favoriteQuote << "\"" << '\n';

    return 0;
}

/*
Sample Run:
Enter your full name: John Michael Smith
Enter your address: 123 Main Street, Apt 4B
Enter your favorite quote: To be or not to be

===== Profile =====
Name: John Michael Smith
Address: 123 Main Street, Apt 4B
Quote: "To be or not to be"
*/
