// Example 3: The Modulo Operator
// Demonstrates using % to get remainders and solve common problems.

#include <iostream>
using namespace std;

int main() {
    cout << "===== Basic Modulo =====" << '\n';
    cout << "10 % 3 = " << 10 % 3 << '\n';  // 1
    cout << "15 % 5 = " << 15 % 5 << '\n';  // 0
    cout << "7 % 10 = " << 7 % 10 << '\n';  // 7
    cout << '\n';

    // Application 1: Check if even or odd
    cout << "===== Even/Odd Check =====" << '\n';
    int num = 17;
    if (num % 2 == 0) {
        cout << num << " is even" << '\n';
    } else {
        cout << num << " is odd" << '\n';
    }
    cout << '\n';

    // Application 2: Get the last digit
    cout << "===== Extract Last Digit =====" << '\n';
    int number = 12345;
    int lastDigit = number % 10;
    cout << "Last digit of " << number << " is " << lastDigit << '\n';
    cout << '\n';

    // Application 3: Convert total minutes to hours and minutes
    cout << "===== Time Conversion =====" << '\n';
    int totalMinutes = 150;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    cout << totalMinutes << " minutes = " << hours << " hours and "
         << minutes << " minutes" << '\n';
    cout << '\n';

    // Application 4: Wrap around (clock example)
    cout << "===== Wrap Around =====" << '\n';
    int currentHour = 10;
    int hoursToAdd = 5;
    int newHour = (currentHour + hoursToAdd) % 12;
    cout << currentHour << " + " << hoursToAdd << " hours = "
         << newHour << " o'clock" << '\n';

    return 0;
}

/*
Expected Output:
===== Basic Modulo =====
10 % 3 = 1
15 % 5 = 0
7 % 10 = 7

===== Even/Odd Check =====
17 is odd

===== Extract Last Digit =====
Last digit of 12345 is 5

===== Time Conversion =====
150 minutes = 2 hours and 30 minutes

===== Wrap Around =====
10 + 5 hours = 3 o'clock
*/
