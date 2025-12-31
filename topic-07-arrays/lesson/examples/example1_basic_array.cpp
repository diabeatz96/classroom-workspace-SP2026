// Example 1: Basic Array Operations
// Demonstrates declaration, initialization, and access.

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int scores[5] = {85, 92, 78, 95, 88};

    // Access individual elements
    cout << "First score: " << scores[0] << '\n';
    cout << "Last score: " << scores[4] << '\n';
    cout << '\n';

    // Modify an element
    cout << "Changing third score from " << scores[2];
    scores[2] = 82;
    cout << " to " << scores[2] << '\n';
    cout << '\n';

    // Display all elements using a loop
    cout << "All scores:" << '\n';
    for (int i = 0; i < 5; i++) {
        cout << "  scores[" << i << "] = " << scores[i] << '\n';
    }

    return 0;
}

/*
Expected Output:
First score: 85
Last score: 88

Changing third score from 78 to 82

All scores:
  scores[0] = 85
  scores[1] = 92
  scores[2] = 82
  scores[3] = 95
  scores[4] = 88
*/
