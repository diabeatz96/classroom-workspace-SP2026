// Worked Example 2: Working with Multiple Data Types
// Problem: Create a program that demonstrates all basic data types
//          and performs simple operations with each.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Declare and initialize variables of each type
    int age = 20;
    double gpa = 3.75;
    char grade = 'A';
    bool isEnrolled = true;
    string name = "Maria";

    // Step 2: Display the initial values
    cout << "===== Student Information =====" << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "GPA: " << gpa << '\n';
    cout << "Grade: " << grade << '\n';
    cout << "Enrolled: " << isEnrolled << '\n';
    cout << '\n';

    // Step 3: Modify the values
    age = age + 1;           // Birthday!
    gpa = 3.85;              // GPA improved
    grade = 'A';             // Still an A
    isEnrolled = true;       // Still enrolled
    name = "Maria Garcia";   // Full name now

    // Step 4: Display the updated values
    cout << "===== Updated Information =====" << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "GPA: " << gpa << '\n';
    cout << "Grade: " << grade << '\n';
    cout << "Enrolled: " << isEnrolled << '\n';

    return 0;
}

/*
Expected Output:
===== Student Information =====
Name: Maria
Age: 20
GPA: 3.75
Grade: A
Enrolled: 1

===== Updated Information =====
Name: Maria Garcia
Age: 21
GPA: 3.85
Grade: A
Enrolled: 1

---
Trace Questions:

1. Why does "Enrolled: " display 1 instead of "true"?
   Answer: By default, cout displays bool values as 1 (true) or 0 (false).
           You can use cout << boolalpha to display "true"/"false".

2. What is the difference between 'A' and "A"?
   Answer: 'A' is a char (single character), "A" is a string.

3. Can you store "Maria" in a char variable?
   Answer: No, char holds only one character. Use string for text.

4. What would happen if you assigned 3.75 to an int variable?
   Answer: It would be truncated to 3 (the decimal part is lost).
*/
