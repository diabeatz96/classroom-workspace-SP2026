// Example 1: Basic Variable Types
// Demonstrates declaring and using different data types.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Integer - for whole numbers
    int age = 20;
    int quantity = 5;
    int balance = -100;

    // Double - for decimal numbers
    double price = 19.99;
    double temperature = 98.6;
    double pi = 3.14159;

    // Character - for single characters
    char grade = 'A';
    char initial = 'J';
    char symbol = '#';

    // Boolean - for true/false values
    bool isStudent = true;
    bool hasGraduated = false;

    // String - for text
    string firstName = "Alice";
    string lastName = "Smith";
    string course = "CSC 126";

    // Display all variables
    cout << "===== Variable Examples =====" << '\n';
    cout << '\n';

    cout << "Integers:" << '\n';
    cout << "  Age: " << age << '\n';
    cout << "  Quantity: " << quantity << '\n';
    cout << "  Balance: " << balance << '\n';
    cout << '\n';

    cout << "Doubles:" << '\n';
    cout << "  Price: $" << price << '\n';
    cout << "  Temperature: " << temperature << " F" << '\n';
    cout << "  Pi: " << pi << '\n';
    cout << '\n';

    cout << "Characters:" << '\n';
    cout << "  Grade: " << grade << '\n';
    cout << "  Initial: " << initial << '\n';
    cout << "  Symbol: " << symbol << '\n';
    cout << '\n';

    cout << "Booleans:" << '\n';
    cout << "  Is Student: " << isStudent << '\n';
    cout << "  Has Graduated: " << hasGraduated << '\n';
    cout << '\n';

    cout << "Strings:" << '\n';
    cout << "  First Name: " << firstName << '\n';
    cout << "  Last Name: " << lastName << '\n';
    cout << "  Course: " << course << '\n';

    return 0;
}

/*
Expected Output:
===== Variable Examples =====

Integers:
  Age: 20
  Quantity: 5
  Balance: -100

Doubles:
  Price: $19.99
  Temperature: 98.6 F
  Pi: 3.14159

Characters:
  Grade: A
  Initial: J
  Symbol: #

Booleans:
  Is Student: 1
  Has Graduated: 0

Strings:
  First Name: Alice
  Last Name: Smith
  Course: CSC 126
*/
