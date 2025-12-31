# Parsons Problems - Topic 05: Loops

## Instructions

For each problem, the lines of code are given in scrambled order. Your task is to arrange them in the correct order to create a working program. Write the line numbers in the correct sequence.

Some problems include **distractor lines** (marked with X) that should NOT be used in the solution.

---

## Problem 1: Simple While Loop (Easy)

Arrange these lines to print numbers 1 through 5:

```
1. }
2. while (i <= 5) {
3. int i = 1;
4. i++;
5. cout << i << " ";
6. int main() {
7. }
8. #include <iostream>
9. using namespace std;
10. return 0;
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 8, 9, 6, 3, 2, 5, 4, 1, 10, 7

```cpp
#include <iostream>
using namespace std;
int main() {
int i = 1;
while (i <= 5) {
cout << i << " ";
i++;
}
return 0;
}
```

Output: `1 2 3 4 5`
</details>

---

## Problem 2: For Loop Countdown (Easy)

Arrange these lines to count down from 5 to 1:

```
1. }
2. #include <iostream>
3. for (int i = 5; i >= 1; i--) {
4. return 0;
5. cout << i << " ";
6. using namespace std;
7. int main() {
8. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 2, 6, 7, 3, 5, 1, 4, 8

```cpp
#include <iostream>
using namespace std;
int main() {
for (int i = 5; i >= 1; i--) {
cout << i << " ";
}
return 0;
}
```

Output: `5 4 3 2 1`
</details>

---

## Problem 3: Sum with For Loop (Medium)

Arrange these lines to calculate the sum of 1 to 10:

```
1. cout << "Sum: " << sum << '\n';
2. }
3. for (int i = 1; i <= 10; i++) {
4. int sum = 0;
5. sum += i;
6. #include <iostream>
7. using namespace std;
8. int main() {
9. return 0;
10. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 6, 7, 8, 4, 3, 5, 2, 1, 9, 10

```cpp
#include <iostream>
using namespace std;
int main() {
int sum = 0;
for (int i = 1; i <= 10; i++) {
sum += i;
}
cout << "Sum: " << sum << '\n';
return 0;
}
```

Output: `Sum: 55`
</details>

---

## Problem 4: Do-While Input Validation (Medium)

Arrange these lines to keep asking for input until a positive number is entered:

```
1. } while (number <= 0);
2. int number;
3. cout << "You entered: " << number << '\n';
4. cin >> number;
5. do {
6. cout << "Enter a positive number: ";
7. int main() {
8. #include <iostream>
9. using namespace std;
10. return 0;
11. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 8, 9, 7, 2, 5, 6, 4, 1, 3, 10, 11

```cpp
#include <iostream>
using namespace std;
int main() {
int number;
do {
cout << "Enter a positive number: ";
cin >> number;
} while (number <= 0);
cout << "You entered: " << number << '\n';
return 0;
}
```
</details>

---

## Problem 5: For Loop with Distractors (Medium)

Arrange these lines to print even numbers from 2 to 10. Some lines are distractors.

```
1. for (int i = 2; i <= 10; i += 2) {
2. for (int i = 1; i <= 10; i++) {          // X - DISTRACTOR
3. cout << i << " ";
4. }
5. #include <iostream>
6. using namespace std;
7. int main() {
8. return 0;
9. }
10. for (int i = 2; i < 10; i += 2) {        // X - DISTRACTOR
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 5, 6, 7, 1, 3, 4, 8, 9

Distractors:
- Line 2: Would print all numbers 1-10, not just even
- Line 10: Uses `<` instead of `<=`, would miss 10

```cpp
#include <iostream>
using namespace std;
int main() {
for (int i = 2; i <= 10; i += 2) {
cout << i << " ";
}
return 0;
}
```

Output: `2 4 6 8 10`
</details>

---

## Problem 6: Nested Loops - Rectangle (Hard)

Arrange these lines to print a 3x4 rectangle of asterisks:

```
1. }
2. for (int row = 0; row < 3; row++) {
3. cout << "* ";
4. cout << '\n';
5. for (int col = 0; col < 4; col++) {
6. }
7. #include <iostream>
8. using namespace std;
9. int main() {
10. return 0;
11. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 8, 9, 2, 5, 3, 6, 4, 1, 10, 11

```cpp
#include <iostream>
using namespace std;
int main() {
for (int row = 0; row < 3; row++) {
for (int col = 0; col < 4; col++) {
cout << "* ";
}
cout << '\n';
}
return 0;
}
```

Output:
```
* * * *
* * * *
* * * *
```
</details>

---

## Problem 7: While Loop with Counter (Hard)

Arrange these lines to count how many times a number can be divided by 2:

```
1. int count = 0;
2. while (num > 1) {
3. cout << "Divisions: " << count << '\n';
4. count++;
5. }
6. num = num / 2;
7. int num = 64;
8. #include <iostream>
9. using namespace std;
10. int main() {
11. return 0;
12. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 8, 9, 10, 7, 1, 2, 6, 4, 5, 3, 11, 12

```cpp
#include <iostream>
using namespace std;
int main() {
int num = 64;
int count = 0;
while (num > 1) {
num = num / 2;
count++;
}
cout << "Divisions: " << count << '\n';
return 0;
}
```

Output: `Divisions: 6` (64 -> 32 -> 16 -> 8 -> 4 -> 2 -> 1)
</details>

---

## Problem 8: Nested Loops - Triangle with Distractors (Hard)

Arrange these lines to print a right triangle pattern. Some lines are distractors.

```
1. for (int row = 1; row <= 4; row++) {
2. for (int col = 1; col <= row; col++) {
3. cout << "* ";
4. cout << '\n';
5. }
6. }
7. for (int col = 1; col <= 4; col++) {      // X - DISTRACTOR
8. #include <iostream>
9. using namespace std;
10. int main() {
11. return 0;
12. }
13. for (int row = 0; row < 4; row++) {      // X - DISTRACTOR
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 8, 9, 10, 1, 2, 3, 5, 4, 6, 11, 12

Distractors:
- Line 7: Inner loop should go to `row`, not 4
- Line 13: Would work but changes the pattern starting point

```cpp
#include <iostream>
using namespace std;
int main() {
for (int row = 1; row <= 4; row++) {
for (int col = 1; col <= row; col++) {
cout << "* ";
}
cout << '\n';
}
return 0;
}
```

Output:
```
*
* *
* * *
* * * *
```
</details>

---

## Problem 9: Break Statement (Hard)

Arrange these lines to find the first number divisible by 7 between 50 and 100:

```
1. if (i % 7 == 0) {
2. for (int i = 50; i <= 100; i++) {
3. cout << "Found: " << i << '\n';
4. break;
5. }
6. }
7. #include <iostream>
8. using namespace std;
9. int main() {
10. return 0;
11. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 8, 9, 2, 1, 3, 4, 5, 6, 10, 11

```cpp
#include <iostream>
using namespace std;
int main() {
for (int i = 50; i <= 100; i++) {
if (i % 7 == 0) {
cout << "Found: " << i << '\n';
break;
}
}
return 0;
}
```

Output: `Found: 56`
</details>

---

## Problem 10: Accumulator Pattern with Distractors (Hard)

Arrange these lines to calculate the factorial of 5 (5! = 120). Some lines are distractors.

```
1. int factorial = 1;
2. for (int i = 1; i <= 5; i++) {
3. factorial *= i;
4. }
5. cout << "5! = " << factorial << '\n';
6. int factorial = 0;                        // X - DISTRACTOR
7. factorial += i;                           // X - DISTRACTOR
8. #include <iostream>
9. using namespace std;
10. int main() {
11. return 0;
12. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 8, 9, 10, 1, 2, 3, 4, 5, 11, 12

Distractors:
- Line 6: Factorial must start at 1, not 0 (anything times 0 is 0)
- Line 7: Factorial uses multiplication, not addition

```cpp
#include <iostream>
using namespace std;
int main() {
int factorial = 1;
for (int i = 1; i <= 5; i++) {
factorial *= i;
}
cout << "5! = " << factorial << '\n';
return 0;
}
```

Output: `5! = 120`
</details>

---

## Scoring Guide

- Problems 1-2: 1 point each (basic loops)
- Problems 3-5: 2 points each (intermediate)
- Problems 6-10: 3 points each (nested loops, complex patterns)

**Total possible: 23 points**
