// Worked Example 3: Complete Input/Output Program
// Problem: Create a program that collects user information
//          and displays a formatted summary.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Declare all variables we will need
    string firstName;
    string lastName;
    int birthYear;
    double height;
    char middleInitial;

    // Step 2: Prompt and read each piece of information
    cout << "===== Registration Form =====" << '\n';
    cout << '\n';

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter your middle initial: ";
    cin >> middleInitial;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter your height in inches: ";
    cin >> height;

    // Step 3: Calculate derived information
    int currentYear = 2026;
    int age = currentYear - birthYear;
    int feet = static_cast<int>(height) / 12;
    int inches = static_cast<int>(height) % 12;

    // Step 4: Display formatted summary
    cout << '\n';
    cout << "===== Registration Summary =====" << '\n';
    cout << "Full Name: " << firstName << " " << middleInitial << ". " << lastName << '\n';
    cout << "Birth Year: " << birthYear << '\n';
    cout << "Age: " << age << " years old" << '\n';
    cout << "Height: " << feet << "'" << inches << "\" (" << height << " inches)" << '\n';

    return 0;
}

/*
Sample Run:
===== Registration Form =====

Enter your first name: John
Enter your last name: Smith
Enter your middle initial: R
Enter your birth year: 2005
Enter your height in inches: 68.5

===== Registration Summary =====
Full Name: John R. Smith
Birth Year: 2005
Age: 21 years old
Height: 5'8" (68.5 inches)

---
Trace Questions:

1. Why do we use cin >> for first name instead of getline?
   Answer: cin >> works fine for single words without spaces.
           Use getline only when the input might contain spaces.

2. What happens to the .5 in 68.5 when calculating feet and inches?
   Answer: static_cast<int>(68.5) becomes 68, then 68/12=5 and 68%12=8.
           The .5 is lost in the integer conversion.

3. If someone enters "2006" for birth year, what age is displayed?
   Answer: 2026 - 2006 = 20 years old

4. What would happen if the user enters "John Smith" for first name?
   Answer: cin >> would only read "John". "Smith" would be left in the
           buffer and read as the last name automatically.
*/
