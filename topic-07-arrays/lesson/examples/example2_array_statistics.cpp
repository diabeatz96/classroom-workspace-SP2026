// Example 2: Array Statistics
// Demonstrates calculating sum, average, min, and max.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE] = {23, 45, 12, 67, 34, 89};

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / SIZE;

    // Find maximum
    int max = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Find minimum
    int min = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Display results
    cout << "Array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << '\n';
    cout << '\n';

    cout << fixed << setprecision(2);
    cout << "Sum: " << sum << '\n';
    cout << "Average: " << average << '\n';
    cout << "Maximum: " << max << '\n';
    cout << "Minimum: " << min << '\n';

    return 0;
}

/*
Expected Output:
Array: 23 45 12 67 34 89

Sum: 270
Average: 45.00
Maximum: 89
Minimum: 12
*/
