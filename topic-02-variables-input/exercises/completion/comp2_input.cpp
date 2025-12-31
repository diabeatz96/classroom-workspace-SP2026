// Completion Problem 2: Reading User Input
// Fill in the blanks to complete this input/output program.

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
    _____ >> name;

    // Prompt and read the age
    cout << "Enter your age: ";
    cin _____ age;

    // Prompt and read the weight
    cout << "Enter your weight: ";
    _____ >> _____;

    // Display the information
    cout << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << _____ << '\n';
    cout << "Weight: " << weight << " lbs" << '\n';

    return 0;
}

/*
Expected Output (example):
Enter your name: Alex
Enter your age: 25
Enter your weight: 165.5

Name: Alex
Age: 25
Weight: 165.5 lbs

Hints:
- Blank 1: What object reads input from the keyboard?
- Blank 2: What operator extracts data from cin?
- Blanks 3-4: Same pattern as the previous inputs
- Blank 5: What variable holds the age?
*/
