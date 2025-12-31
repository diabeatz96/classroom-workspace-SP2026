# Parsons Problems - Topic 02: Variables and Input

## Instructions

Arrange the scrambled lines into the correct order. Some problems include distractor lines marked with X.

---

## Problem 1: Declare and Display (Easy)

```
1. int number = 42;
2. #include <iostream>
3. cout << number << '\n';
4. using namespace std;
5. int main() {
6. return 0;
7. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 2, 4, 5, 1, 3, 6, 7
</details>

---

## Problem 2: Read Input (Easy)

Create a program that reads a number and displays it:

```
1. cin >> value;
2. }
3. int main() {
4. int value;
5. cout << "You entered: " << value << '\n';
6. #include <iostream>
7. using namespace std;
8. return 0;
9. cout << "Enter a number: ";
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 6, 7, 3, 4, 9, 1, 5, 8, 2
</details>

---

## Problem 3: Multiple Variables (Medium)

```
1. cout << "Name: " << name << ", Age: " << age << '\n';
2. using namespace std;
3. int age = 25;
4. string name = "Alex";
5. }
6. #include <iostream>
7. int main() {
8. return 0;
9. #include <string>
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 6, 9, 2, 7, 4, 3, 1, 8, 5
</details>

---

## Problem 4: With Distractors (Medium)

```
1. double price;
2. cout << "Enter price: ";
3. cin >> price;
4. int price;                    // X - DISTRACTOR
5. cout << "Price is $" << price << '\n';
6. int main() {
7. using namespace std;
8. return 0;
9. }
10. cin << price;                // X - DISTRACTOR
11. #include <iostream>
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 11, 7, 6, 1, 2, 3, 5, 8, 9

Distractors:
- Line 4: Uses int instead of double for price
- Line 10: Uses << instead of >> for input
</details>

---

## Problem 5: Reading Full Name (Hard)

```
1. cout << "Hello, " << fullName << "!" << '\n';
2. cin >> fullName;                    // X - DISTRACTOR
3. #include <iostream>
4. getline(cin, fullName);
5. using namespace std;
6. #include <string>
7. int main() {
8. cout << "Enter your full name: ";
9. return 0;
10. }
11. string fullName;
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 3, 6, 5, 7, 11, 8, 4, 1, 9, 10

Distractor:
- Line 2: cin >> would only read the first word
</details>
