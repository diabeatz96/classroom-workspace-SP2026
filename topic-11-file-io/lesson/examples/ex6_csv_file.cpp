// Example 6: Working with CSV Files
// Demonstrates: Reading comma-separated values

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // First, create a CSV file
    ofstream outFile("products.csv");
    outFile << "Product,Price,Quantity" << endl;
    outFile << "Apple,0.99,50" << endl;
    outFile << "Banana,0.59,75" << endl;
    outFile << "Orange,1.29,30" << endl;
    outFile << "Milk,3.99,20" << endl;
    outFile << "Bread,2.49,15" << endl;
    outFile.close();
    cout << "Created products.csv\n" << endl;

    // Now read the CSV file
    ifstream inFile("products.csv");

    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    string line;
    double totalValue = 0;

    // Skip header line
    getline(inFile, line);

    // Display formatted header
    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Product"
         << right << setw(10) << "Price"
         << setw(10) << "Quantity"
         << setw(12) << "Value" << endl;
    cout << "--------------------------------------------" << endl;

    // Read data lines
    while (getline(inFile, line)) {
        // Use stringstream to parse the comma-separated values
        stringstream ss(line);
        string product;
        double price;
        int quantity;

        // Read product name (until comma)
        getline(ss, product, ',');

        // Read price
        ss >> price;
        ss.ignore();  // Skip the comma

        // Read quantity
        ss >> quantity;

        // Calculate value
        double value = price * quantity;
        totalValue += value;

        // Display row
        cout << left << setw(12) << product
             << right << setw(9) << "$" << price
             << setw(10) << quantity
             << setw(10) << "$" << value << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << right << setw(34) << "Total: $" << totalValue << endl;

    inFile.close();

    return 0;
}

/*
Output:
Created products.csv

Product         Price  Quantity       Value
--------------------------------------------
Apple           $0.99        50      $49.50
Banana          $0.59        75      $44.25
Orange          $1.29        30      $38.70
Milk            $3.99        20      $79.80
Bread           $2.49        15      $37.35
--------------------------------------------
                             Total: $249.60

Key Concepts:
- CSV files use commas to separate values
- stringstream helps parse individual fields
- getline(ss, str, ',') reads until a comma
- ss.ignore() skips characters (like commas)
- Real-world data often comes in CSV format
*/
