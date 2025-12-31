// Completion Problem 2: Reading User Input - SOLUTION

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;
    double weight;

    // Prompt and read the name
    cout << "Enter your name: ";
    cin >> name;

    // Prompt and read the age
    cout << "Enter your age: ";
    cin >> age;

    // Prompt and read the weight
    cout << "Enter your weight: ";
    cin >> weight;

    // Display the information
    cout << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "Weight: " << weight << " lbs" << '\n';

    return 0;
}

/*
Solution:
- Blank 1: cin - the standard input stream
- Blank 2: >> - the extraction operator
- Blank 3: cin - same input object
- Blank 4: weight - the variable to store the weight
- Blank 5: age - display the age variable
*/
