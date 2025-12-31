# Parsons Problems - Topic 01: Output

## Instructions

For each problem, the lines of code are given in scrambled order. Your task is to arrange them in the correct order to create a working program. Write the line numbers in the correct sequence.

Some problems include **distractor lines** (marked with an X) that should NOT be used in the solution.

---

## Problem 1: Hello World (Easy)

Arrange these lines to create a program that prints "Hello, World!":

```
1. return 0;
2. cout << "Hello, World!" << '\n';
3. int main() {
4. #include <iostream>
5. }
6. using namespace std;
```

**Your answer:** Write the line numbers in order (e.g., 4, 6, 3, 2, 1, 5)

<details>
<summary>Solution</summary>

**Correct order:** 4, 6, 3, 2, 1, 5

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "Hello, World!" << '\n';
return 0;
}
```
</details>

---

## Problem 2: Two Lines of Output (Easy)

Arrange these lines to print "First" on one line and "Second" on the next:

```
1. }
2. cout << "Second" << '\n';
3. #include <iostream>
4. int main() {
5. cout << "First" << '\n';
6. using namespace std;
7. return 0;
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 3, 6, 4, 5, 2, 7, 1

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "First" << '\n';
cout << "Second" << '\n';
return 0;
}
```
</details>

---

## Problem 3: Box Drawing (Medium)

Arrange these lines to draw a simple box around the word "Hi":

```
1. cout << "+----+" << '\n';
2. return 0;
3. using namespace std;
4. int main() {
5. cout << "| Hi |" << '\n';
6. }
7. #include <iostream>
8. cout << "+----+" << '\n';
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 7, 3, 4, 1, 5, 8, 2, 6

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "+----+" << '\n';
cout << "| Hi |" << '\n';
cout << "+----+" << '\n';
return 0;
}
```
</details>

---

## Problem 4: With Distractors (Medium)

Arrange these lines to print a greeting. Some lines should NOT be used (distractors).

```
1. cout << "Welcome!" << '\n';
2. int main() {
3. return 0;
4. #include <iostream>
5. cout >> "Welcome!" >> '\n';      // X - DISTRACTOR
6. }
7. include <iostream>               // X - DISTRACTOR
8. using namespace std;
```

**Your answer:** _______________ (do not include distractor lines)

<details>
<summary>Solution</summary>

**Correct order:** 4, 8, 2, 1, 3, 6

Lines 5 and 7 are distractors:
- Line 5 uses `>>` instead of `<<` (wrong operator)
- Line 7 is missing the `#` symbol

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "Welcome!" << '\n';
return 0;
}
```
</details>

---

## Problem 5: Multiple Outputs (Medium)

Arrange these lines to display:
```
Name: Alice
Age: 20
```

```
1. cout << "Age: 20" << '\n';
2. return 0;
3. }
4. #include <iostream>
5. cout << "Name: Alice" << '\n';
6. using namespace std;
7. int main() {
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 4, 6, 7, 5, 1, 2, 3

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "Name: Alice" << '\n';
cout << "Age: 20" << '\n';
return 0;
}
```
</details>

---

## Problem 6: With Tabs and Distractors (Hard)

Arrange these lines to create a simple two-column output. Some lines are distractors.

```
1. cout << "Item\tPrice" << '\n';
2. #include <iostream>
3. cout << "Apple\t$1.00" << '\n';
4. int main() {
5. cout << "Item    Price" << '\n';    // X - DISTRACTOR
6. using namespace std;
7. return 0;
8. }
9. cout << Apple\t$1.00 << '\n';       // X - DISTRACTOR
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 2, 6, 4, 1, 3, 7, 8

Distractors:
- Line 5: Uses spaces instead of `\t` (works but is the inferior approach for this exercise)
- Line 9: Missing quotes around the string

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "Item\tPrice" << '\n';
cout << "Apple\t$1.00" << '\n';
return 0;
}
```
</details>

---

## Problem 7: Escape Sequences (Hard)

Arrange these lines to print:
```
She said, "Hi!"
Path: C:\Users
```

```
1. cout << "Path: C:\\Users" << '\n';
2. }
3. int main() {
4. cout << "She said, \"Hi!\"" << '\n';
5. return 0;
6. using namespace std;
7. cout << "She said, "Hi!"" << '\n';    // X - DISTRACTOR
8. #include <iostream>
9. cout << "Path: C:\Users" << '\n';     // X - DISTRACTOR
```

**Your answer:** _______________

<details>
<summary>Solution</summary>

**Correct order:** 8, 6, 3, 4, 1, 5, 2

Distractors:
- Line 7: Quotes inside the string are not escaped
- Line 9: Backslash is not escaped (`\U` would be interpreted as an escape sequence)

```cpp
#include <iostream>
using namespace std;
int main() {
cout << "She said, \"Hi!\"" << '\n';
cout << "Path: C:\\Users" << '\n';
return 0;
}
```
</details>

---

## Scoring Guide

- Problems 1-2: 1 point each (basic structure)
- Problems 3-5: 2 points each (multiple statements)
- Problems 6-7: 3 points each (escape sequences and distractors)

**Total possible: 14 points**
