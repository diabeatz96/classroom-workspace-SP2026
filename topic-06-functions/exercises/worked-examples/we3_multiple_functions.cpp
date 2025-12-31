// Worked Example 3: Multiple Functions Working Together
// Problem: Create functions to convert temperatures between Celsius and Fahrenheit.

#include <iostream>
#include <iomanip>
using namespace std;

// Step 1: Declare all function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
void displayConversionTable();

int main() {
    // Step 5: Use the functions
    double tempC = 25.0;
    double tempF = celsiusToFahrenheit(tempC);

    cout << fixed << setprecision(1);
    cout << tempC << " C = " << tempF << " F\n";

    double tempF2 = 98.6;
    double tempC2 = fahrenheitToCelsius(tempF2);
    cout << tempF2 << " F = " << tempC2 << " C\n";

    cout << "\n";
    displayConversionTable();

    return 0;
}

// Step 2: Define celsiusToFahrenheit
double celsiusToFahrenheit(double celsius) {
    // Formula: F = (C * 9/5) + 32
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Step 3: Define fahrenheitToCelsius
double fahrenheitToCelsius(double fahrenheit) {
    // Formula: C = (F - 32) * 5/9
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Step 4: Define displayConversionTable (calls other functions!)
void displayConversionTable() {
    cout << "Temperature Conversion Table\n";
    cout << "----------------------------\n";
    cout << "  C   |   F\n";
    cout << "------|------\n";

    for (int c = 0; c <= 100; c += 20) {
        double f = celsiusToFahrenheit(c);  // Function calling another function
        cout << setw(4) << c << "  | " << setw(5) << f << '\n';
    }
}

/*
Output:
25.0 C = 77.0 F
98.6 F = 37.0 C

Temperature Conversion Table
----------------------------
  C   |   F
------|------
   0  |  32.0
  20  |  68.0
  40  | 104.0
  60  | 140.0
  80  | 176.0
 100  | 212.0

---
Trace Questions:

1. How many functions are defined in this program?
   Answer: 3 (plus main, so 4 total)

2. Which function calls another function?
   Answer: displayConversionTable calls celsiusToFahrenheit

3. What is the return type of displayConversionTable?
   Answer: void - it only prints output

4. If you add a new temperature unit (Kelvin), how many new functions
   might you need?
   Answer: You could add kelvinToCelsius, celsiusToKelvin, etc.
*/
