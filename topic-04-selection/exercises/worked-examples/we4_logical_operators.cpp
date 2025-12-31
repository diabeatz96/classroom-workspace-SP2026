// Worked Example 4: Logical Operators
// Problem: Determine if a person qualifies for a discount.
//          Discount applies to: seniors (65+) OR children (under 12)
//          Also check if someone is a teenager (13-19 inclusive)

#include <iostream>
using namespace std;

int main() {
    // Step 1: Get the person's age
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Step 2: Check for discount eligibility using OR (||)
    // Either condition being true grants the discount
    if (age >= 65 || age < 12) {
        cout << "You qualify for a discount!" << '\n';
    } else {
        cout << "No discount available." << '\n';
    }

    // Step 3: Check if person is a teenager using AND (&&)
    // BOTH conditions must be true
    if (age >= 13 && age <= 19) {
        cout << "You are a teenager." << '\n';
    }

    // Step 4: Demonstrate NOT (!) operator
    bool hasDiscount = (age >= 65 || age < 12);

    if (!hasDiscount) {
        cout << "You pay full price." << '\n';
    }

    return 0;
}

/*
Sample Run 1:
Enter your age: 70
You qualify for a discount!

Sample Run 2:
Enter your age: 8
You qualify for a discount!

Sample Run 3:
Enter your age: 16
No discount available.
You are a teenager.
You pay full price.

Sample Run 4:
Enter your age: 30
No discount available.
You pay full price.

---
Trace Questions:

1. If age is 65, what is the result of (age >= 65 || age < 12)?
   Answer: true - the first part (age >= 65) is true, so the whole OR is true

2. If age is 25, what is the result of (age >= 65 || age < 12)?
   Answer: false - both parts are false

3. If age is 13, what is the result of (age >= 13 && age <= 19)?
   Answer: true - both 13 >= 13 and 13 <= 19 are true

4. If age is 12, what is the result of (age >= 13 && age <= 19)?
   Answer: false - 12 >= 13 is false, so the whole AND is false

5. If hasDiscount is true, what is !hasDiscount?
   Answer: false - the NOT operator reverses true to false

6. What ages qualify as teenagers in this program?
   Answer: 13, 14, 15, 16, 17, 18, 19 (inclusive range)
*/
