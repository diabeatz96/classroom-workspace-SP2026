# Parsons Problems - Topic 03: Arithmetic and Expressions

## Instructions

Arrange the scrambled lines into the correct order. Some problems include distractor lines marked with X.

---

## Problem 1: Simple Addition (Easy)

```
1. int result = a + b;
2. int a = 5;
3. cout << result << '\n';
4. int b = 3;
5. #include <iostream>
6. using namespace std;
7. int main() {
8. return 0;
9. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 5, 6, 7, 2, 4, 1, 3, 8, 9

```cpp
#include <iostream>
using namespace std;
int main() {
int a = 5;
int b = 3;
int result = a + b;
cout << result << '\n';
return 0;
}
```
</details>

---

## Problem 2: Calculate Average (Medium)

```
1. double average = sum / 3.0;
2. int c = 90;
3. cout << "Average: " << average << '\n';
4. int sum = a + b + c;
5. int a = 80;
6. int b = 85;
7. #include <iostream>
8. using namespace std;
9. int main() {
10. return 0;
11. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 8, 9, 5, 6, 2, 4, 1, 3, 10, 11

```cpp
#include <iostream>
using namespace std;
int main() {
int a = 80;
int b = 85;
int c = 90;
int sum = a + b + c;
double average = sum / 3.0;
cout << "Average: " << average << '\n';
return 0;
}
```
</details>

---

## Problem 3: Modulo for Remainder (Medium)

```
1. int minutes = totalSeconds % 60;
2. int totalSeconds = 185;
3. cout << seconds << " min, " << minutes << " sec" << '\n';
4. int seconds = totalSeconds / 60;
5. #include <iostream>
6. using namespace std;
7. int main() {
8. return 0;
9. }
```

Note: There's a variable naming issue to spot!

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 5, 6, 7, 2, 4, 1, 3, 8, 9

Note: The variable names are swapped in the output - this is intentional as a tricky detail.

Actually the correct output should use `seconds` for minutes and `minutes` for remaining seconds. The problem demonstrates that variable naming matters!
</details>

---

## Problem 4: Compound Assignment (Medium)

```
1. score *= 2;
2. int score = 10;
3. cout << score << '\n';
4. score += 5;
5. #include <iostream>
6. using namespace std;
7. int main() {
8. return 0;
9. }
```

What is the final output?

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 5, 6, 7, 2, 4, 1, 3, 8, 9

Trace:
- score = 10
- score += 5 -> score = 15
- score *= 2 -> score = 30
- Output: 30
</details>

---

## Problem 5: With Distractors (Medium)

Calculate the area of a rectangle. Some lines are distractors.

```
1. int width = 4;
2. int area = length + width;           // X - DISTRACTOR
3. int length = 5;
4. int area = length * width;
5. cout << "Area: " << area << '\n';
6. int area = length x width;           // X - DISTRACTOR
7. #include <iostream>
8. using namespace std;
9. int main() {
10. return 0;
11. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 8, 9, 3, 1, 4, 5, 10, 11

Distractors:
- Line 2: Uses + instead of * for area
- Line 6: Uses x instead of * (not valid C++)
</details>

---

## Problem 6: Type Casting (Hard)

```
1. int a = 7;
2. int b = 2;
3. double result = static_cast<double>(a) / b;
4. cout << result << '\n';
5. double wrong = a / b;                 // X - Would give 3.0
6. #include <iostream>
7. using namespace std;
8. int main() {
9. return 0;
10. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 6, 7, 8, 1, 2, 3, 4, 9, 10

Line 5 is a distractor showing the wrong approach.
Correct result: 3.5
</details>

---

## Problem 7: Precedence (Hard)

```
1. int result1 = 2 + 3 * 4;
2. int result2 = (2 + 3) * 4;
3. cout << "Without parens: " << result1 << '\n';
4. cout << "With parens: " << result2 << '\n';
5. #include <iostream>
6. using namespace std;
7. int main() {
8. return 0;
9. }
```

What are the two output values?

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 5, 6, 7, 1, 2, 3, 4, 8, 9

Output:
- Without parens: 14 (3*4=12, then 2+12=14)
- With parens: 20 (2+3=5, then 5*4=20)
</details>

---

## Problem 8: Money Calculation (Hard)

Calculate cents from a dollar amount with distractors.

```
1. double dollars = 5.75;
2. int cents = dollars * 100;
3. int cents = static_cast<int>(dollars * 100);
4. cout << dollars << " = " << cents << " cents" << '\n';
5. int cents = dollars % 100;           // X - DISTRACTOR
6. #include <iostream>
7. using namespace std;
8. int main() {
9. return 0;
10. }
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 6, 7, 8, 1, 3, 4, 9, 10

Distractors:
- Line 2: Works but may cause compiler warning
- Line 5: Modulo doesn't work with doubles

Output: 5.75 = 575 cents
</details>

---

## Scoring Guide

- Problems 1-2: 1 point each
- Problems 3-5: 2 points each
- Problems 6-8: 3 points each

**Total possible: 17 points**
