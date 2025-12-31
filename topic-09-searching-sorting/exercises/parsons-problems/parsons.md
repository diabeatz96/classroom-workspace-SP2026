# Parsons Problems: Searching and Sorting

Arrange the code blocks in the correct order to create working programs.

---

## Problem 1: Linear Search Function

Arrange these blocks to create a linear search function.

```cpp
// Block A
for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
        return i;
    }
}

// Block B
int linearSearch(int arr[], int size, int target) {

// Block C
return -1;
}

// Block D
#include <iostream>
using namespace std;
```

<details>
<summary>Solution</summary>

Correct order: D, B, A, C

```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
```
</details>

---

## Problem 2: Binary Search

Arrange these blocks to implement binary search.

```cpp
// Block A
while (left <= right) {
    int mid = (left + right) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        right = mid - 1;
    } else {
        left = mid + 1;
    }
}

// Block B
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

// Block C
    return -1;
}

// Block D
#include <iostream>
using namespace std;
```

<details>
<summary>Solution</summary>

Correct order: D, B, A, C

```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
```
</details>

---

## Problem 3: Selection Sort Swap

Arrange these blocks to perform the swap in selection sort.

```cpp
// Block A
int temp = arr[i];

// Block B
arr[i] = arr[minIndex];

// Block C
arr[minIndex] = temp;

// Block D
// Swap minimum with current position
if (minIndex != i) {
```

<details>
<summary>Solution</summary>

Correct order: D, A, B, C

```cpp
// Swap minimum with current position
if (minIndex != i) {
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}
```
</details>

---

## Problem 4: Selection Sort Outer Loop

Arrange these blocks to form the selection sort algorithm.

```cpp
// Block A
for (int j = i + 1; j < size; j++) {
    if (arr[j] < arr[minIndex]) {
        minIndex = j;
    }
}

// Block B
for (int i = 0; i < size - 1; i++) {
    int minIndex = i;

// Block C
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
}

// Block D
void selectionSort(int arr[], int size) {
```

<details>
<summary>Solution</summary>

Correct order: D, B, A, C

```cpp
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
```
</details>

---

## Problem 5: Bubble Sort Inner Loop

Arrange these blocks to form the bubble sort inner loop.

```cpp
// Block A
if (arr[j] > arr[j + 1]) {
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}

// Block B
for (int j = 0; j < size - 1 - i; j++) {

// Block C
}
```

<details>
<summary>Solution</summary>

Correct order: B, A, C

```cpp
for (int j = 0; j < size - 1 - i; j++) {
    if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
}
```
</details>

---

## Problem 6: Complete Bubble Sort

Arrange these blocks to form the complete bubble sort.

```cpp
// Block A
void bubbleSort(int arr[], int size) {

// Block B
for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1 - i; j++) {

// Block C
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }

// Block D
    }
}
}
```

<details>
<summary>Solution</summary>

Correct order: A, B, C, D

```cpp
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```
</details>

---

## Problem 7: Using Linear Search

Arrange these blocks to use linear search in main.

```cpp
// Block A
if (result != -1) {
    cout << "Found at index " << result << '\n';
} else {
    cout << "Not found\n";
}

// Block B
int numbers[] = {23, 45, 12, 67, 89};
int target = 67;

// Block C
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target);

int main() {

// Block D
int result = linearSearch(numbers, 5, target);

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, B, D, A, E

```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target);

int main() {
    int numbers[] = {23, 45, 12, 67, 89};
    int target = 67;
    int result = linearSearch(numbers, 5, target);
    if (result != -1) {
        cout << "Found at index " << result << '\n';
    } else {
        cout << "Not found\n";
    }
    return 0;
}
```
</details>

---

## Problem 8: Sort Then Search

Arrange these blocks to sort an array then search it.

```cpp
// Block A
int numbers[] = {64, 25, 12, 22, 11};
int size = 5;

// Block B
selectionSort(numbers, size);

// Block C
int result = binarySearch(numbers, size, 22);
cout << "22 found at index " << result << '\n';

// Block D
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size);
int binarySearch(int arr[], int size, int target);

int main() {

// Block E
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: D, A, B, C, E

```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size);
int binarySearch(int arr[], int size, int target);

int main() {
    int numbers[] = {64, 25, 12, 22, 11};
    int size = 5;
    selectionSort(numbers, size);
    int result = binarySearch(numbers, size, 22);
    cout << "22 found at index " << result << '\n';
    return 0;
}
```

**Note:** Must sort BEFORE using binary search!
</details>
