# Parsons Problems: Arrays

Arrange the code blocks in the correct order to create working programs.

---

## Problem 1: Declare and Initialize Array

Arrange these blocks to declare an array and print its elements.

```cpp
// Block A
for (int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
}

// Block B
#include <iostream>
using namespace std;

// Block C
int numbers[5] = {10, 20, 30, 40, 50};

// Block D
int main() {

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: B, D, C, A, E

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
```

**Output:** `10 20 30 40 50`
</details>

---

## Problem 2: Sum Array Elements

Arrange these blocks to calculate the sum of array elements.

```cpp
// Block A
cout << "Sum: " << sum << '\n';

// Block B
int sum = 0;
for (int i = 0; i < 4; i++) {
    sum += values[i];
}

// Block C
#include <iostream>
using namespace std;

int main() {

// Block D
int values[4] = {5, 10, 15, 20};

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, D, B, A, E

```cpp
#include <iostream>
using namespace std;

int main() {
    int values[4] = {5, 10, 15, 20};
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += values[i];
    }
    cout << "Sum: " << sum << '\n';
    return 0;
}
```

**Output:** `Sum: 50`
</details>

---

## Problem 3: Find Maximum Value

Arrange these blocks to find the largest value in an array.

```cpp
// Block A
for (int i = 1; i < 5; i++) {
    if (scores[i] > max) {
        max = scores[i];
    }
}

// Block B
int scores[5] = {78, 92, 65, 88, 95};
int max = scores[0];

// Block C
#include <iostream>
using namespace std;

int main() {

// Block D
cout << "Maximum score: " << max << '\n';
return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, B, A, D

```cpp
#include <iostream>
using namespace std;

int main() {
    int scores[5] = {78, 92, 65, 88, 95};
    int max = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    cout << "Maximum score: " << max << '\n';
    return 0;
}
```

**Output:** `Maximum score: 95`
</details>

---

## Problem 4: Input into Array

Arrange these blocks to read values from user into an array.

```cpp
// Block A
for (int i = 0; i < SIZE; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> nums[i];
}

// Block B
const int SIZE = 3;
int nums[SIZE];

// Block C
#include <iostream>
using namespace std;

int main() {

// Block D
cout << "You entered: ";
for (int i = 0; i < SIZE; i++) {
    cout << nums[i] << " ";
}
cout << '\n';
return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, B, A, D

```cpp
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int nums[SIZE];
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> nums[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << nums[i] << " ";
    }
    cout << '\n';
    return 0;
}
```
</details>

---

## Problem 5: Range-Based For Loop

Arrange these blocks to use a range-based for loop.

```cpp
// Block A
double prices[] = {19.99, 29.99, 9.99, 49.99};

// Block B
for (double price : prices) {
    total += price;
}

// Block C
cout << "Total: $" << total << '\n';
return 0;
}

// Block D
#include <iostream>
using namespace std;

int main() {

// Block E
double total = 0;
```

<details>
<summary>Solution</summary>

Correct order: D, A, E, B, C

```cpp
#include <iostream>
using namespace std;

int main() {
    double prices[] = {19.99, 29.99, 9.99, 49.99};
    double total = 0;
    for (double price : prices) {
        total += price;
    }
    cout << "Total: $" << total << '\n';
    return 0;
}
```

**Output:** `Total: $109.96`
</details>

---

## Problem 6: Count Occurrences

Arrange these blocks to count how many times a value appears.

```cpp
// Block A
int data[6] = {5, 3, 5, 8, 5, 2};
int target = 5;
int count = 0;

// Block B
for (int i = 0; i < 6; i++) {
    if (data[i] == target) {
        count++;
    }
}

// Block C
cout << target << " appears " << count << " times.\n";
return 0;
}

// Block D
#include <iostream>
using namespace std;

int main() {
```

<details>
<summary>Solution</summary>

Correct order: D, A, B, C

```cpp
#include <iostream>
using namespace std;

int main() {
    int data[6] = {5, 3, 5, 8, 5, 2};
    int target = 5;
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (data[i] == target) {
            count++;
        }
    }
    cout << target << " appears " << count << " times.\n";
    return 0;
}
```

**Output:** `5 appears 3 times.`
</details>

---

## Problem 7: Copy Array Elements

Arrange these blocks to copy elements from one array to another.

```cpp
// Block A
int source[4] = {1, 2, 3, 4};
int dest[4];

// Block B
cout << "Destination array: ";
for (int i = 0; i < 4; i++) {
    cout << dest[i] << " ";
}
cout << '\n';
return 0;
}

// Block C
for (int i = 0; i < 4; i++) {
    dest[i] = source[i];
}

// Block D
#include <iostream>
using namespace std;

int main() {
```

<details>
<summary>Solution</summary>

Correct order: D, A, C, B

```cpp
#include <iostream>
using namespace std;

int main() {
    int source[4] = {1, 2, 3, 4};
    int dest[4];
    for (int i = 0; i < 4; i++) {
        dest[i] = source[i];
    }
    cout << "Destination array: ";
    for (int i = 0; i < 4; i++) {
        cout << dest[i] << " ";
    }
    cout << '\n';
    return 0;
}
```

**Output:** `Destination array: 1 2 3 4`
</details>

---

## Problem 8: Reverse Array

Arrange these blocks to print array elements in reverse order.

```cpp
// Block A
int arr[5] = {10, 20, 30, 40, 50};

// Block B
for (int i = 4; i >= 0; i--) {
    cout << arr[i] << " ";
}

// Block C
cout << '\n';
return 0;
}

// Block D
#include <iostream>
using namespace std;

int main() {

// Block E
cout << "Reversed: ";
```

<details>
<summary>Solution</summary>

Correct order: D, A, E, B, C

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Reversed: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return 0;
}
```

**Output:** `Reversed: 50 40 30 20 10`
</details>
