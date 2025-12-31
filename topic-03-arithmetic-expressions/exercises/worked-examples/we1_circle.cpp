// Worked Example 1: Circle Calculations
// Problem: Calculate the area and circumference of a circle given its radius.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Step 1: Define pi as a constant
    const double PI = 3.14159;

    // Step 2: Get the radius from the user
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Step 3: Calculate area using formula: A = pi * r^2
    // Note: C++ uses * for multiplication, not implied multiplication
    double area = PI * radius * radius;

    // Step 4: Calculate circumference using formula: C = 2 * pi * r
    double circumference = 2 * PI * radius;

    // Step 5: Display the results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << '\n';
    cout << "===== Circle Results =====" << '\n';
    cout << "Radius: " << radius << '\n';
    cout << "Area: " << area << '\n';
    cout << "Circumference: " << circumference << '\n';

    return 0;
}

/*
Sample Run:
Enter the radius of the circle: 5

===== Circle Results =====
Radius: 5.00
Area: 78.54
Circumference: 31.42

---
Trace Questions:

1. If radius is 10, what is PI * radius * radius?
   Answer: 3.14159 * 10 * 10 = 314.159

2. Why do we use a constant for PI instead of a variable?
   Answer: PI never changes. Using const prevents accidental modification
           and makes the code's intent clear.

3. What would happen if we wrote PI * radius^2?
   Answer: ^ is the XOR operator in C++, not exponentiation. This would
           give a wrong answer. Use radius * radius instead.

4. Could we use radius * radius * PI instead?
   Answer: Yes, multiplication is commutative. The order doesn't matter.
*/
