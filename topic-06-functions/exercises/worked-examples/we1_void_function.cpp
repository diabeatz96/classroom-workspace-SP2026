// Worked Example 1: Void Function
// Problem: Create a function that prints a decorative line of asterisks.

#include <iostream>
using namespace std;

// Step 1: Declare the function prototype
// void because it just prints, doesn't return anything
// int length is the parameter - how many asterisks to print
void printLine(int length);

int main() {
    // Step 4: Call the function with different arguments
    cout << "Short line:\n";
    printLine(10);

    cout << "\nMedium line:\n";
    printLine(20);

    cout << "\nLong line:\n";
    printLine(30);

    return 0;
}

// Step 2: Define the function
void printLine(int length) {
    // Step 3: Use a loop to print 'length' asterisks
    for (int i = 0; i < length; i++) {
        cout << '*';
    }
    cout << '\n';  // End with a newline
}

/*
Output:
Short line:
**********

Medium line:
********************

Long line:
******************************

---
Trace Questions:

1. What happens if you call printLine(0)?
   Answer: The loop runs 0 times, so nothing is printed except a newline.

2. What is the scope of the variable 'length'?
   Answer: 'length' only exists inside the printLine function.

3. If you call printLine(5) and then printLine(3), does the second call
   remember the value 5?
   Answer: No, each call is independent. Parameters are reset each time.

4. Why is this function void instead of returning something?
   Answer: Its purpose is to output to the screen, not compute a value.
*/
