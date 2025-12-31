// Example 3: Parallel Arrays
// Demonstrates using multiple arrays to store related data.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_PRODUCTS = 4;

    // Parallel arrays - same index refers to same product
    string products[NUM_PRODUCTS] = {"Apple", "Bread", "Milk", "Eggs"};
    double prices[NUM_PRODUCTS] = {1.50, 3.25, 4.00, 2.75};
    int quantities[NUM_PRODUCTS] = {5, 2, 1, 2};

    cout << "===== Shopping Cart =====" << '\n';
    cout << '\n';

    // Display header
    cout << left << setw(12) << "Product"
         << right << setw(8) << "Price"
         << setw(8) << "Qty"
         << setw(10) << "Subtotal" << '\n';
    cout << "--------------------------------------" << '\n';

    // Calculate and display each item
    double total = 0;
    cout << fixed << setprecision(2);

    for (int i = 0; i < NUM_PRODUCTS; i++) {
        double subtotal = prices[i] * quantities[i];
        total += subtotal;

        cout << left << setw(12) << products[i]
             << right << "$" << setw(7) << prices[i]
             << setw(8) << quantities[i]
             << "$" << setw(9) << subtotal << '\n';
    }

    cout << "--------------------------------------" << '\n';
    cout << left << setw(28) << "TOTAL:"
         << right << "$" << setw(9) << total << '\n';

    return 0;
}

/*
Expected Output:
===== Shopping Cart =====

Product        Price     Qty  Subtotal
--------------------------------------
Apple         $   1.50       5$     7.50
Bread         $   3.25       2$     6.50
Milk          $   4.00       1$     4.00
Eggs          $   2.75       2$     5.50
--------------------------------------
TOTAL:                      $    23.50
*/
