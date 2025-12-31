# Parsons Problems - Topic 04: Selection Structures

## Instructions

Arrange the scrambled lines into the correct order. Some problems include distractor lines marked with X.

---

## Problem 1: Simple If (Easy)

```
1. if (score >= 60) {
2. int score = 75;
3. cout << "You passed!" << '\n';
4. }
5. #include <iostream>
6. using namespace std;
7. int main() {
8. return 0;
9. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 5, 6, 7, 2, 1, 3, 4, 8, 9
</details>

---

## Problem 2: If-Else (Easy)

```
1. } else {
2. if (age >= 18) {
3. cout << "Minor" << '\n';
4. cout << "Adult" << '\n';
5. }
6. int age = 16;
7. #include <iostream>
8. using namespace std;
9. int main() {
10. return 0;
11. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 8, 9, 6, 2, 4, 1, 3, 5, 10, 11

Output: "Minor" (since 16 < 18)
</details>

---

## Problem 3: Else-If Chain (Medium)

```
1. } else if (score >= 80) {
2. if (score >= 90) {
3. } else {
4. cout << "B" << '\n';
5. cout << "A" << '\n';
6. cout << "C or below" << '\n';
7. }
8. int score = 85;
9. #include <iostream>
10. using namespace std;
11. int main() {
12. return 0;
13. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 9, 10, 11, 8, 2, 5, 1, 4, 3, 6, 7, 12, 13

Output: "B" (since 85 >= 80 but < 90)
</details>

---

## Problem 4: Logical AND (Medium)

Check if a number is between 1 and 100 inclusive.

```
1. if (num >= 1 && num <= 100) {
2. int num = 50;
3. cout << "In range" << '\n';
4. } else {
5. cout << "Out of range" << '\n';
6. }
7. #include <iostream>
8. using namespace std;
9. int main() {
10. return 0;
11. }
12. if (num >= 1 || num <= 100) {    // X - DISTRACTOR
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 8, 9, 2, 1, 3, 4, 5, 6, 10, 11

Line 12 is a distractor - OR would always be true for any number!
</details>

---

## Problem 5: Switch Statement (Medium)

```
1. case 2:
2. switch (day) {
3. cout << "Monday" << '\n';
4. break;
5. cout << "Tuesday" << '\n';
6. case 1:
7. break;
8. default:
9. cout << "Other day" << '\n';
10. }
11. int day = 1;
12. #include <iostream>
13. using namespace std;
14. int main() {
15. return 0;
16. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 12, 13, 14, 11, 2, 6, 3, 4, 1, 5, 7, 8, 9, 10, 15, 16

Output: "Monday"
</details>

---

## Problem 6: Nested If with Distractors (Hard)

```
1. if (age >= 18) {
2. if (hasID) {
3. cout << "Entry allowed" << '\n';
4. } else {
5. cout << "Need ID" << '\n';
6. }
7. } else {
8. cout << "Must be 18+" << '\n';
9. }
10. int age = 21;
11. bool hasID = true;
12. if (age >= 18 || hasID) {        // X - DISTRACTOR
13. #include <iostream>
14. using namespace std;
15. int main() {
16. return 0;
17. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 13, 14, 15, 10, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 16, 17

Output: "Entry allowed"
</details>

---

## Problem 7: Complex Condition (Hard)

```
1. if ((score >= 90) || (score >= 80 && extraCredit)) {
2. cout << "Excellent!" << '\n';
3. } else {
4. cout << "Good effort" << '\n';
5. }
6. int score = 85;
7. bool extraCredit = true;
8. if (score >= 90 || score >= 80 && extraCredit) {  // X - DISTRACTOR
9. #include <iostream>
10. using namespace std;
11. int main() {
12. return 0;
13. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 9, 10, 11, 6, 7, 1, 2, 3, 4, 5, 12, 13

Line 8 is technically equivalent but missing parentheses for clarity.
Output: "Excellent!" (85 >= 80 && true)
</details>

---

## Scoring Guide

- Problems 1-2: 1 point each
- Problems 3-5: 2 points each
- Problems 6-7: 3 points each

**Total possible: 14 points**
