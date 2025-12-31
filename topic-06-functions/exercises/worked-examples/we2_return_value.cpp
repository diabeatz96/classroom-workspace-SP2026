// Worked Example 2: Function with Return Value
// Problem: Create a function that calculates the area of a rectangle.

#include <iostream>
using namespace std;

// Step 1: Declare the function prototype
// Returns double (the area)
// Takes two double parameters (length and width)
double calculateArea(double length, double width);

int main() {
    // Step 4: Call the function and store the result
    double roomLength = 12.5;
    double roomWidth = 10.0;

    double area = calculateArea(roomLength, roomWidth);

    cout << "Room dimensions: " << roomLength << " x " << roomWidth << '\n';
    cout << "Room area: " << area << " square feet\n";

    // Step 5: Can also use the return value directly
    cout << "\nA 5x3 rectangle has area: " << calculateArea(5.0, 3.0) << '\n';

    return 0;
}

// Step 2: Define the function
double calculateArea(double length, double width) {
    // Step 3: Calculate and return the result
    double area = length * width;
    return area;

    // Note: Could also write this as:
    // return length * width;
}

/*
Output:
Room dimensions: 12.5 x 10
Room area: 125 square feet

A 5x3 rectangle has area: 15

---
Trace Questions:

1. What is the return type of calculateArea?
   Answer: double

2. If you call calculateArea(4.0, 2.5), what value is returned?
   Answer: 10.0

3. What happens to the variable 'area' inside the function after
   the function returns?
   Answer: It is destroyed. Local variables only exist during the function call.

4. Can you call calculateArea without storing the result?
   Answer: Yes, but the returned value would be discarded (not useful here).
*/
