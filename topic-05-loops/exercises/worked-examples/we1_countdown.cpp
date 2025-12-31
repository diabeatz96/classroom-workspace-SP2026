// Worked Example 1: Countdown Timer
// Problem: Create a countdown from a user-specified number to 1, then display "Liftoff!"

#include <iostream>
using namespace std;

int main() {
    // Step 1: Get the starting number from the user
    int start;
    cout << "Enter countdown start: ";
    cin >> start;

    // Step 2: Use a while loop to count down
    // We continue while the counter is greater than 0
    int count = start;
    while (count > 0) {
        cout << count << "..." << '\n';
        count--;  // Decrease by 1 each iteration
    }

    // Step 3: Display the final message
    cout << "Liftoff!" << '\n';

    return 0;
}

/*
Sample Run:
Enter countdown start: 5
5...
4...
3...
2...
1...
Liftoff!

---
Trace Questions:

1. If start is 3, how many times does the loop execute?
   Answer: 3 times (count = 3, 2, 1)

2. What would happen if we used count >= 0 instead of count > 0?
   Answer: It would also print "0..." before "Liftoff!"

3. What happens if the user enters 0?
   Answer: The loop never executes, just prints "Liftoff!"

4. Could this be written with a for loop?
   Answer: Yes: for (int count = start; count > 0; count--)
*/
