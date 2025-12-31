# Parsons Problems: Functions

Arrange the code blocks in the correct order to create working programs.

---

## Problem 1: Simple Greeting Function

Arrange these blocks to create a program that defines and calls a greeting function.

```cpp
// Block A
void greet() {
    cout << "Hello, welcome to the program!\n";
}

// Block B
#include <iostream>
using namespace std;

// Block C
int main() {
    greet();
    return 0;
}

// Block D
void greet();
```

<details>
<summary>Solution</summary>

Correct order: B, D, C, A

```cpp
#include <iostream>
using namespace std;

void greet();

int main() {
    greet();
    return 0;
}

void greet() {
    cout << "Hello, welcome to the program!\n";
}
```

**Explanation:** Headers first, then prototype, then main, then function definition.
</details>

---

## Problem 2: Function with Parameter

Arrange these blocks to create a program that prints a number doubled.

```cpp
// Block A
int main() {
    printDouble(5);
    return 0;
}

// Block B
void printDouble(int num) {
    cout << num << " doubled is " << (num * 2) << '\n';
}

// Block C
void printDouble(int num);

// Block D
#include <iostream>
using namespace std;
```

<details>
<summary>Solution</summary>

Correct order: D, C, A, B

```cpp
#include <iostream>
using namespace std;

void printDouble(int num);

int main() {
    printDouble(5);
    return 0;
}

void printDouble(int num) {
    cout << num << " doubled is " << (num * 2) << '\n';
}
```

**Output:** `5 doubled is 10`
</details>

---

## Problem 3: Function with Return Value

Arrange these blocks to create a program that uses a function to add two numbers.

```cpp
// Block A
int result = add(3, 4);
cout << "Sum: " << result << '\n';

// Block B
int add(int a, int b) {
    return a + b;
}

// Block C
#include <iostream>
using namespace std;

int add(int a, int b);

// Block D
int main() {

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, D, A, E, B

```cpp
#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    int result = add(3, 4);
    cout << "Sum: " << result << '\n';
    return 0;
}

int add(int a, int b) {
    return a + b;
}
```

**Output:** `Sum: 7`
</details>

---

## Problem 4: Multiple Parameters

Arrange these blocks to create a program that calculates the area of a rectangle.

```cpp
// Block A
double area = calculateArea(5.0, 3.0);

// Block B
return length * width;

// Block C
#include <iostream>
using namespace std;

double calculateArea(double length, double width);

// Block D
int main() {

// Block E
double calculateArea(double length, double width) {

// Block F
cout << "Area: " << area << '\n';
return 0;
}

// Block G
}
```

<details>
<summary>Solution</summary>

Correct order: C, D, A, F, E, B, G

```cpp
#include <iostream>
using namespace std;

double calculateArea(double length, double width);

int main() {
    double area = calculateArea(5.0, 3.0);
    cout << "Area: " << area << '\n';
    return 0;
}

double calculateArea(double length, double width) {
    return length * width;
}
```

**Output:** `Area: 15`
</details>

---

## Problem 5: Boolean Return Function

Arrange these blocks to create a program that checks if a number is even.

```cpp
// Block A
bool isEven(int num) {
    return num % 2 == 0;
}

// Block B
if (isEven(number)) {
    cout << number << " is even\n";
} else {
    cout << number << " is odd\n";
}

// Block C
#include <iostream>
using namespace std;

bool isEven(int num);

// Block D
int main() {
    int number = 7;

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, D, B, E, A

```cpp
#include <iostream>
using namespace std;

bool isEven(int num);

int main() {
    int number = 7;
    if (isEven(number)) {
        cout << number << " is even\n";
    } else {
        cout << number << " is odd\n";
    }
    return 0;
}

bool isEven(int num) {
    return num % 2 == 0;
}
```

**Output:** `7 is odd`
</details>

---

## Problem 6: Function Calling Another Function

Arrange these blocks to create a program where one function calls another.

```cpp
// Block A
void printSquare(int n) {
    int sq = square(n);
    cout << n << " squared is " << sq << '\n';
}

// Block B
int square(int n);
void printSquare(int n);

// Block C
int square(int n) {
    return n * n;
}

// Block D
#include <iostream>
using namespace std;

// Block E
int main() {
    printSquare(5);
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: D, B, E, A, C

```cpp
#include <iostream>
using namespace std;

int square(int n);
void printSquare(int n);

int main() {
    printSquare(5);
    return 0;
}

void printSquare(int n) {
    int sq = square(n);
    cout << n << " squared is " << sq << '\n';
}

int square(int n) {
    return n * n;
}
```

**Output:** `5 squared is 25`
</details>

---

## Problem 7: Max of Two Numbers

Arrange these blocks to find the maximum of two numbers using a function.

```cpp
// Block A
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Block B
cout << "The larger number is: " << larger << '\n';

// Block C
#include <iostream>
using namespace std;

int max(int a, int b);

// Block D
int main() {
    int x = 10, y = 25;
    int larger = max(x, y);

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, D, B, E, A

```cpp
#include <iostream>
using namespace std;

int max(int a, int b);

int main() {
    int x = 10, y = 25;
    int larger = max(x, y);
    cout << "The larger number is: " << larger << '\n';
    return 0;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
```

**Output:** `The larger number is: 25`
</details>

---

## Problem 8: Void Function with Loop

Arrange these blocks to create a countdown function.

```cpp
// Block A
void countdown(int start) {
    for (int i = start; i >= 1; i--) {
        cout << i << " ";
    }
    cout << "Liftoff!\n";
}

// Block B
int main() {
    countdown(5);
    return 0;
}

// Block C
#include <iostream>
using namespace std;

// Block D
void countdown(int start);
```

<details>
<summary>Solution</summary>

Correct order: C, D, B, A

```cpp
#include <iostream>
using namespace std;

void countdown(int start);

int main() {
    countdown(5);
    return 0;
}

void countdown(int start) {
    for (int i = start; i >= 1; i--) {
        cout << i << " ";
    }
    cout << "Liftoff!\n";
}
```

**Output:** `5 4 3 2 1 Liftoff!`
</details>
