// Worked Example 6: Switch Statement
// Problem: Convert a numeric day (1-7) to a day name.
//          Also demonstrate fall-through for grouping cases.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Get the day number from the user
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    // Step 2: Use a switch statement to convert to day name
    // Switch compares the value of 'day' against each case
    cout << "Day " << day << " is ";

    switch (day) {
        case 1:
            cout << "Monday" << '\n';
            break;  // Exit the switch
        case 2:
            cout << "Tuesday" << '\n';
            break;
        case 3:
            cout << "Wednesday" << '\n';
            break;
        case 4:
            cout << "Thursday" << '\n';
            break;
        case 5:
            cout << "Friday" << '\n';
            break;
        case 6:
            cout << "Saturday" << '\n';
            break;
        case 7:
            cout << "Sunday" << '\n';
            break;
        default:
            // This runs if no case matches
            cout << "Invalid day number" << '\n';
    }

    // Step 3: Demonstrate case grouping (weekend check)
    // Cases without break "fall through" to the next case
    cout << '\n';
    switch (day) {
        case 6:
        case 7:
            // Both 6 and 7 execute this code
            cout << "It's the weekend!" << '\n';
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "It's a weekday." << '\n';
            break;
        default:
            cout << "Invalid day." << '\n';
    }

    return 0;
}

/*
Sample Run 1:
Enter a day number (1-7): 3
Day 3 is Wednesday

It's a weekday.

Sample Run 2:
Enter a day number (1-7): 6
Day 6 is Saturday

It's the weekend!

Sample Run 3:
Enter a day number (1-7): 9
Day 9 is Invalid day number

Invalid day.

---
Trace Questions:

1. What happens if you remove the break after case 1?
   Answer: If day is 1, it prints "Monday" then falls through to case 2
           and prints "Tuesday", continuing until a break is hit.

2. Why is there no break after the default case?
   Answer: default is the last case, so there's nothing to fall through to.
           A break would work but is not necessary.

3. When is a switch statement preferable to if-else?
   Answer: When comparing one variable against many specific values.
           Switch is cleaner for menus and day/month conversions.

4. Can you use a switch with strings in C++?
   Answer: No, switch only works with integral types (int, char, enum).
           Use if-else for string comparisons.

5. In the weekend check, why don't cases 6 and 7 have their own cout?
   Answer: We want both to do the same thing. Case 6 falls through to
           case 7's code block, which handles both weekend days.
*/
