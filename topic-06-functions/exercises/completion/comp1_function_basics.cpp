// Completion Problem 1: Function Basics
// Fill in the blanks to complete this program that uses a function
// to calculate the cube of a number.

#include <iostream>
using namespace std;

// TODO: Write the function prototype for a function called "cube"
// that takes an int parameter and returns an int
_______ cube(_______ n);

int main() {
    int number = 4;

    // TODO: Call the cube function and store the result
    int result = _______(number);

    cout << number << " cubed is " << result << '\n';

    // Call cube directly in output
    cout << "5 cubed is " << _______(5) << '\n';

    return 0;
}

// TODO: Complete the function definition
_______ cube(int n) {
    // TODO: Return n cubed (n * n * n)
    return _______;
}

/*
Expected Output:
4 cubed is 64
5 cubed is 125
*/
