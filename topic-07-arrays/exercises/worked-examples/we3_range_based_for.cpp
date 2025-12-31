// Worked Example 3: Range-Based For Loop
// Problem: Calculate statistics using the modern range-based for loop.

#include <iostream>
using namespace std;

int main() {
    // Step 1: Initialize array with temperatures
    double temps[] = {72.5, 68.0, 75.5, 80.0, 77.5, 65.0, 70.0};
    int size = sizeof(temps) / sizeof(temps[0]);  // Calculate size

    // Step 2: Display all temperatures using range-based for
    cout << "Daily temperatures: ";
    for (double temp : temps) {  // "for each temp in temps"
        cout << temp << " ";
    }
    cout << '\n';

    // Step 3: Calculate the sum using range-based for
    double sum = 0;
    for (double temp : temps) {
        sum += temp;
    }
    double average = sum / size;

    // Step 4: Find min and max using range-based for
    double minTemp = temps[0];
    double maxTemp = temps[0];

    for (double temp : temps) {
        if (temp < minTemp) {
            minTemp = temp;
        }
        if (temp > maxTemp) {
            maxTemp = temp;
        }
    }

    // Step 5: Display statistics
    cout << "\nTemperature Statistics:\n";
    cout << "Average: " << average << " degrees\n";
    cout << "Minimum: " << minTemp << " degrees\n";
    cout << "Maximum: " << maxTemp << " degrees\n";

    return 0;
}

/*
Output:
Daily temperatures: 72.5 68 75.5 80 77.5 65 70

Temperature Statistics:
Average: 72.6429 degrees
Minimum: 65 degrees
Maximum: 80 degrees

---
Trace Questions:

1. What does "for (double temp : temps)" mean in plain English?
   Answer: "For each value in the temps array, call it temp and execute the loop body."

2. When would you use a traditional for loop instead of range-based?
   Answer: When you need the index, or when you need to modify array elements.

3. Can you modify array elements using "for (double temp : temps)"?
   Answer: No, temp is a copy. Use "for (double& temp : temps)" to modify.

4. How is sizeof(temps) / sizeof(temps[0]) calculating the array size?
   Answer: Total bytes of array divided by bytes of one element = number of elements.
*/
