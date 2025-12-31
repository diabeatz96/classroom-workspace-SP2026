// Example 3: Formatted Output
// This program demonstrates how to create nicely formatted output.

#include <iostream>
using namespace std;

int main() {
    // Creating a simple receipt
    cout << "+---------------------------+" << '\n';
    cout << "|      COFFEE SHOP          |" << '\n';
    cout << "+---------------------------+" << '\n';
    cout << '\n';
    cout << "Item\t\t\tQty\tPrice" << '\n';
    cout << "----------------------------" << '\n';
    cout << "Latte\t\t\t2\t$8.00" << '\n';
    cout << "Muffin\t\t\t1\t$3.50" << '\n';
    cout << "Cookie\t\t\t3\t$6.00" << '\n';
    cout << "----------------------------" << '\n';
    cout << "Total:\t\t\t\t$17.50" << '\n';
    cout << '\n';
    cout << "Thank you for your purchase!" << '\n';

    return 0;
}

/*
Expected Output:
+---------------------------+
|      COFFEE SHOP          |
+---------------------------+

Item                    Qty     Price
----------------------------
Latte                   2       $8.00
Muffin                  1       $3.50
Cookie                  3       $6.00
----------------------------
Total:                          $17.50

Thank you for your purchase!
*/
