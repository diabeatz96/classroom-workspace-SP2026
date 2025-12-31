// Example 2: Reading User Input
// Demonstrates how to get input from the user using cin.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables to store user input
    string name;
    int age;
    double height;
    char initial;

    // Prompt and read a string (single word)
    cout << "Enter your first name: ";
    cin >> name;

    // Prompt and read an integer
    cout << "Enter your age: ";
    cin >> age;

    // Prompt and read a double
    cout << "Enter your height in inches: ";
    cin >> height;

    // Prompt and read a character
    cout << "Enter your middle initial: ";
    cin >> initial;

    // Display the collected information
    cout << '\n';
    cout << "===== Your Information =====" << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << " years" << '\n';
    cout << "Height: " << height << " inches" << '\n';
    cout << "Middle Initial: " << initial << '\n';

    return 0;
}

/*
Sample Run:
Enter your first name: John
Enter your age: 19
Enter your height in inches: 70.5
Enter your middle initial: R

===== Your Information =====
Name: John
Age: 19 years
Height: 70.5 inches
Middle Initial: R
*/
